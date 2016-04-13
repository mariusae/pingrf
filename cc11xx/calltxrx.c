#include "impl.h"

enum
{
	Txrxing = Nstate,
	Preambling
};

void
calltxrx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
{
	switch(*state){
	case Idle:
		memcpy(rftxbuf, c->pkt, sizeof rftxbuf);

		if(c->preamblems > 0){
			alarm(c->preamblems);
			rftxpreamble();
			*state = Preambling;
			*waitflag = Falarm;
		}else{
			rftx(Txrx);
			goto txrxing;
		}

		break;

	case Preambling:
		rftx(Txrx|Txcontinue);

  txrxing:
		*state = Txrxing;
		*waitflag = Frfrx;
		*clearflag = Frftx;
		if(c->timeoutms > 0){
			alarm(c->timeoutms);
			*waitflag |= Falarm;
		}
		break;

	case Txrxing:
		rfidle();
		if(*waitflag&Falarm){
			c->type = Rerr;
			c->err = Etimeout;
		}else{
			c->type = Rtxrx;
			memcpy(&c->pkt, rfrxbuf, sizeof c->pkt);
		}
		alarm(0);
		*state = Reply;
		*waitflag = 0;
		break;

	default:
		panic("Unknown state %d", *state);
	}
}
