#include "pumpimpl.h"

static uint8 lastrx[Npkt];

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

void
pcallinit(Pcall *pc, int type)
{
	memset(pc, 0, sizeof *pc);
	pc->type = type;
}

int
_pcallsimple(int type)
{
	static Pcall tx, rx;
	pcallinit(&tx, type);
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
		/* This is really a hack: 
		 * we should really have this be a tx-only
		 * request. */
		preamblems = 0;
		timeoutms = 10;
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
		/* This has been chosen experimentally and 
		 * through sniffing sessions. It gives a good trade
		 * off of not timing out and also having the pump
		 * actually accept the keepalive.
		 * Note that it's an overkill for non-bolus requests,
		 * we might consider adapting this. */
		taskdelay(2000);
		pcallinit(&tx1, Tkeepalive);
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
	default: break;
	case Tstatus:
	case Tstatus1:
	case Tstatus2:
	case Tstatus3:
	
	case Tkeepalive:
	
	case Tack1:
	case Tack2:
	case Tack3:
	case Tadjourn:
		// Flags should be set separately.
		memcpy(tx.pkt+8, lastrx+8, Npkt-8-2);
		break;
	case Twakeup:
		memcpy(tx.pkt+16, lastrx+16, Npkt-16);
		break;
	}

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

	memcpy(lastrx, rx.pkt, Npkt);

	return 1;
}

int
_presume()
{
	tagseqidx = 0;

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
	static Pcall tx, rx;

	/*
	 * TODO: use a pure TX-only here
	 * instead of relying on the timeout.
	 */
	pcallinit(&tx, Tadjourn);
	_pcallsimple(Tadjourn);

	return 0;
}
