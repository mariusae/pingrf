
typedef struct
{
	uint month;
	uint day;
	uint hour;	
	uint minute;
	uint year;
	
	uint basal;
	
	uint insulinleft;
	int temp;
	uint temptime;
	uint temptotal;
	
	uint iob;
	uint lastbolus;
	
	/* Temporary. */
	uint comboactive;
	uint combostarthour;
	uint combostartminute;
	uint comboendhour;
	uint comboendminute;
	uint combodelivered;
	uint combototal;
	
	uint haswarning;
} Pstat;


int	pstat(Pstat*);
int	pbolus(uint insulin, uint minutes);
int	pcancel();
int	pclearwarning();

