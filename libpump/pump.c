#include "pumpimpl.h"

static uint8 lastrx[Npkt];

typedef struct {
	uint8 challenge[8];
	uint8 response[8];
} Reply03;

static Reply03 reply03tab[] = {
	{{0x03, 0x00, 0xf1, 0x04}, 	{0x03, 0x00, 0xf8, 0x00}},
	{{0x03, 0x00, 0x07, 0x04},	{0x03, 0x00, 0x12, 0x00}},
	{{0x03, 0x00, 0xed, 0x04}, 	{0x03, 0x00, 0xea, 0x00}},
	{{0x03, 0x00, 0x15, 0x04},	{0x03, 0x00, 0x24, 0x00}}
};

static Reply03 *reply03bp = reply03tab;
static Reply03 *reply03ep = &reply03tab[nelem(reply03tab)];

static int txrx(Pcall*, Pcall*, uint16 timeoutms, uint16 preamblems);
static int pstatus(Pcall*);
static int wakeup();

int
pcall(Pcall *tx, Pcall *rx)
{
	if(wakeup() < 0){
		werrstr("wakeup: %r");
		return -1;
	}

	if(txrx(tx, rx, 250, 0) < 0)
		return -1;

	return 0;
}

static int
txrx(Pcall *ptx, Pcall *prx, uint16 timeoutms, uint16 preamblems)
{
	Rcall tx, rx;

	tx.type = Ttxrx;
	/* TODO: determine this from Pcall type */
	tx.timeoutms = timeoutms;
	tx.preamblems = preamblems;

	if(convC2P(ptx, tx.pkt) < 0)
		return -1;

	switch(ptx->type){
	default: break;
	/* TODO: Mstatus1? */
//	case 0x2c:
//	case 0x50:

//	case Twakeup:
	case Tstatus:
	case Tstatus1:
	case Tstatus2:
	case Tstatus3:
	
	case Tack1:
	case Tack2:
	case Tack3:

/*
	case 0x35:  // XXX todo
	case 0x31: // XXX todo-
	case 0x33:
	case 0x36:
*/
		// Flags should be set separately.
		memcpy(tx.pkt+8, lastrx+8, Npkt-8-2);
		break;
	}

	if(rcall(&tx, &rx) < 0)
		return -1;

	if(rx.type != tx.type+1) /* implement this in rcall itself..? */
		return -1;

	// TODO: push a filter down to the radio for the first byte
	// (0x03 or tx.pkt[0] is admissible)

	while(rx.pkt[0] == 0x03){
		Reply03 *p;
		for(p = reply03bp; p < reply03ep; p++){
			if(memcmp(rx.pkt, p->challenge, 4) == 0)
				break;
		}

		if(p == reply03ep){
			/* TODO: %X for hexdumps (takes buf, size) */
			werrstr("no response for 03 challenge %2x %2x %2x %2x",
				rx.pkt[0], rx.pkt[1], rx.pkt[2], rx.pkt[3]);
			return -1;
		}

		memcpy(tx.pkt, p->response, 8);
		memcpy(tx.pkt+8, rx.pkt+8, Npkt-8);

		if(pumpchkhd(tx.pkt) < 0){
			werrstr("checksum not found: %r");
			return -1;
		}

		// TODO: do we need to set a status bit?  (0x04)

		if(rcall(&tx, &rx) < 0)
			return -1;
		
		if(rx.type != tx.type+1)
			return -1;
	}

	if(rx.pkt[0] != ptx->type){
		werrstr("expected response packet %2x; got %2x", ptx->type, rx.pkt[0]);
		return -1;
	}

	if(convP2C(rx.pkt, prx) < 0)
		return -1;

	if(prx->type != ptx->type+0xff)
		return -1;

	memcpy(lastrx, rx.pkt, Npkt);

	// TODO: send 0x50 (adjournment message?)

	return 0;
}

static int
wakeup()
{
	static Pcall tx, rx;

	tx.type = Twakeup;
	
	if(txrx(&tx, &rx, 250, 2500) < 0)
		return -1;

	// TODO: check
	return 0;
}
