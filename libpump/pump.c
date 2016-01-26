#include "pumpimpl.h"

int
pstat(Pstat *ps)
{
	static Pcall tx, rx;

	memset(ps, 0, sizeof *ps);

	if(_presume() < 0)
		return -1;

	pcallinit(&tx, Tstatus);
	if(_pcall(&tx, &rx) != 1)
		return -1;

	ps->month = rx.status.month;
	ps->day = rx.status.day;
	ps->hour = rx.status.hour;
	ps->minute = rx.status.minute;
	ps->year = rx.status.year;
	ps->basal = rx.status.basal;
	ps->insulinleft = rx.status.insulin;
	ps->temp = rx.status.temp;
	ps->temptime = rx.status.temptime;
	ps->temptotal = rx.status.temptotal;

	_padjourn();
	if(_presume() < 0)
		return -1;

	pcallinit(&tx, Tstatus2);
	if(_pcall(&tx, &rx) != 1)
		return -1;

	/* XXX last bolus time */

	ps->lastbolus = rx.status2.bolus;
	ps->iob = rx.status2.iob;
	
	_padjourn();

	return 0;
}

int
pcombo(uint insulin, uint minutes)
{
	static Pcall tx, rx;

	if(minutes%6 != 0){
		werrstr("combo duration must be in increments of 6 minutes!");
		return -1;
	}

	if(_presume() < 0)
		return -1;

	pcallinit(&tx, Tcombo);
	tx.combo.insulin = insulin;
	tx.combo.minutes = minutes;
	if(_pcall(&tx, &rx) != 1)
		return -1;

	pcallinit(&tx, Tack1);
	if(_pcall(&tx, &rx) != 1)
		return -1;

	pcallinit(&tx, Tack2);
	if(_pcall(&tx, &rx) != 1)
		return -1;

/*
	tx.type = Tack3;
	if(_pcall(&tx, &rx, 250, 0) != 1)
		return -1;
*/

	_padjourn();

	return 0;
}

int
pcancel()
{
	static Pcall tx, rx;

	if(_presume() < 0)
		return -1;
	
	pcallinit(&tx, Tcancelcombo);
	if(_pcall(&tx, &rx) != 1)
		return -1;
	
	_padjourn();
	return 0;
}
