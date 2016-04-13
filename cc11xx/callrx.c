#include "impl.h"

enum
{
	Waiting = Nstate
};

void
callrx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
{
	USED(clearflag);
	
	switch(*state){
	case Idle:
		rfrx();
		*state = Waiting;
		*waitflag = Frfrx;

		if(c->timeoutms > 0){
			alarm(c->timeoutms);
			*waitflag |= Falarm;
		}

		break;

	case Waiting:
		if(*waitflag&Falarm){
			rfidle();
			c->type = Rerr;
			c->err = Etimeout;
		}else{
			memcpy(&c->pkt, rfrxbuf, sizeof c->pkt);
			c->type = Rrx;
		}
		alarm(0);
		*state = Reply;
		*waitflag = 0;
		break;

	default:
		panic("Unknown state %d", *state);
	}
}
