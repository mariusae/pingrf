#include "impl.h"
#include "pkt.h"

enum
{
	Sinit = 255
};

void
pktinit(Pkt *p)
{
	p->rxstate = p -> txstate = Sinit;
}

int
pktin(Pkt *p, uint8 b)
{
	if (p->rxstate == Sinit){
		p->type = b;
		p->rxstate = 0;
		return p->type == Pcancel ? 0 : 1;
	}else{
		p->data[p->rxstate++] = b;
		return p->rxstate == Npkt ? 0 : 1;
	}
}

int
pktout(Pkt *p, uint8 *b)
{
	if(p->txstate == Sinit){
		*b = p->type;
		p->txstate = 0;
		return p->type == Pcancel ? 0 : 1;
	}else{
		*b = p->data[p->txstate++];
		return p->txstate == Npkt ? 0 : 1;
	}
}

void
pktprint(Pkt *p)
{
	char *type;
	uint8 i;

	switch(p->type){
	case Pcancel: type = "cancel"; break;
	case Prx: type = "rx"; break;
	case Ptx: type = "tx"; break;
	}
	
	dprint("Pkt %s\n", type);

	if(p->type != Prx && p->type != Ptx)
		return;

	// Exactly 13 rows
	for(i=0; i<Npkt; i+=6){
		dprint("	%02x %02x %02x %02x %02x %02x\n",
			p->data[i], p->data[i+1], p->data[i+2],
			p->data[i+3], p->data[i+4], p->data[i+5]);
	}
}
