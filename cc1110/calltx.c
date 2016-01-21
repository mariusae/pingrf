#include "a.h"

enum
{
	Txing = Nstate,
	Preambling
};

void
calltx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
{
	USED(clearflag);

	switch(*state){
	case Idle:
		memcpy(rftxbuf, c->pkt, sizeof rftxbuf);
		if(c->preamblems > 0){
			alarm(c->preamblems);
			rftxpreamble();
			*state = Preambling;
			*waitflag = Falarm;
		}else{
			rftx(0);
			*state = Txing;
			*waitflag = Frftx;
		}
		
		break;

	case Preambling:
		rftx(Txcontinue);
		*state = Txing;
		*waitflag = Frftx;
		break;

	case Txing:
		c->type = Rtx;
		*state = Reply;
		*waitflag = 0;
		break;

	default:
		panic("Unknown state %d", *state);
	}
}
