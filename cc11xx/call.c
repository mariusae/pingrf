#include "impl.h"

void callrx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag);
void calltx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag);
void calltxrx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag);
void callwakeup(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag);
void callping(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag);

void
call(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
{
	switch(c->type){
	default:
		c->type = Rerr;
		c->err = Ebadcall;
		*state = Reply;
		return;

	case Trx:		callrx(c, state, waitflag, clearflag); break;
	case Ttx:		calltx(c, state, waitflag, clearflag); break;
	case Ttxrx:	calltxrx(c, state, waitflag, clearflag); break;
	case Tping:	callping(c, state, waitflag, clearflag); break;
	}
}
