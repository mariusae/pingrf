#include "pumpimpl.h"

static uint8 tagseq[] = {
	0x00, 0x0e, 0xf8, 0x12, 0xea,
	0x24, 0xdc, 0x36, 0xc0, 0x4e,
	0xb6
};
static uint8 tagseqidx = 0;


static int	_ptxrx(Pcall *ptx, Pcall *prx, uint16 timeoutms, uint16 preamblems);
static int	_pcall1(Pcall *tx, Pcall *rx, uint16 timeoutms, uint16 preamblems, uint tries);

int
pcall(Pcall *tx, Pcall *rx)
{
	if(_presume() < 0)
		return -1;

	if(_pcall(tx, rx) != 1)
		return -1;
	
	_padjourn();

	return 0;
}

int
_pcallsimple(int type)
{
	static Pcall tx, rx;
	tx.type = type;
	return _pcall(&tx, &rx);
}

int
_pcall(Pcall *tx, Pcall *rx)
{
	static Pcall tx1;
	int rv;
	uint preamblems, timeoutms, tries;

	switch(tx->type){
	case Twakeup:
		preamblems = 2000;
		timeoutms = 200;
		tries = 5;
		break;

	case Tadjourn:
		preamblems = 0;
		tries = 1;
		break;

	default:
		preamblems = 0;
		timeoutms = 500;
		tries = 3;
		break;
	}

	if((rv=_pcall1(tx, rx, timeoutms, preamblems, tries)) != 1)
		return rv;

	while(rx->type == Rkeepalive){
		/* The keepalive reply tells the remote to backoff
		 * for the given number of milliseconds; we comply. */
		taskdelay(rx->backoffms);
		tx1.type = Tkeepalive;
		if((rv=_pcall1(&tx1, rx, timeoutms*2, 0, 2)) != 1)
			return rv;
	}

	if(rx->type != tx->type+0xff){
		werrstr("unexpected reply type %2x to request %2x", 
			rx->type, tx->type);
		return -1;
	}

	return rv;
}

static int
_pcall1(Pcall *tx, Pcall *rx, uint16 timeoutms, uint16 preamblems, uint tries)
{
	int rv;
	
	if(tagseqidx == nelem(tagseq)){
		werrstr("ran out of tags");
		return -1;
	}
	tx->tag = tagseq[tagseqidx];

	do rv = _ptxrx(tx, rx, timeoutms, preamblems);
	while(--tries > 0 && rv == 0);

	if(rv == 1)
		++tagseqidx;

	return rv;
}

static int
_ptxrx(Pcall *ptx, Pcall *prx, uint16 timeoutms, uint16 preamblems)
{
	static Rcall tx, rx;

	tx.type = Ttxrx;
	tx.timeoutms = timeoutms;
	tx.preamblems = preamblems;

	if(convC2P(ptx, tx.pkt) < 0)
		return -1;

	switch(ptx->type){
	default:
		tx.type = Ttxrx;
		tx.timeoutms = timeoutms;
		tx.preamblems = preamblems;

		if(rcall(&tx, &rx) < 0)
			return -1;
	
		if(rx.type == Rerr){
			if(rx.err == Etimeout)
				return 0;
			else
				return -1;
		}

		if(convP2C(rx.pkt, prx) < 0)
			return -1;
	
		/* TODO: push this as a filter down to the radio */
		if(prx->tag != (ptx->tag^0xff)){
			werrstr("bad reply tag");
			return -1;
		}
		
		break;

	case Tadjourn:
		tx.type = Ttx;
		tx.preamblems = preamblems;
		
		if(rcall(&tx, &rx) < 0)
			return -1;
		
		if(rx.type == Rerr)
			return -1;
		
		prx->type = Radjourn;
		
		break;		
	}


	return 1;
}

int
_presume()
{
	static Rcall tx, rx;

	tagseqidx = 0;
	
	/* We try to reset the radio for good measure. */
	tx.type = Treset;
	rcall(&tx, &rx);

	switch(_pcallsimple(Twakeup)){
	case 1:	break;
	case 0:
		werrstr("session wakeup timeout");
		return -1;
	default:
		werrstr("session wakeup error: %r");
		return -1;
	}

	return 0;
}

int
_padjourn()
{
	/*
	 * TODO: use a pure TX-only here
	 * instead of relying on the timeout.
	 */
	_pcallsimple(Tadjourn);

	return 0;
}

int
_preset()
{
	_padjourn();
	return _presume();
}

void
pxxx()
{
	static Pcall tx, rx;

	if(_presume() < 0)
		panic("presume: %r");

	tx.type = T2c;
	if(_pcall(&tx, &rx) != 1)
		panic("pcall: %r");

	if(rx.flag&Fwarn){		fprint(2, "Warning emitted; clearing.\n");

		_padjourn();
		if(_presume() < 0)
			panic("presume: %r");
		tx.type = Tclearwarn;
		if(_pcall(&tx, &rx) != 1)
			panic("pcall: %r");
		
		_padjourn();
		if(_presume() < 0)
			panic("presume: %r");
	}else{
		fprint(2, "No warning emitted\n");
	}

	tx.type = Tstatus;
	if(_pcall(&tx, &rx) != 1)
		panic("pcall: %r");

	if(rx.flag&Fwarn)
		fprint(2, "Rstatus warn\n");
	else
		fprint(2, "Rstatus nowarn\n");

	_padjourn();
}