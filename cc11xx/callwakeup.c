#include "impl.h"

enum
{
	Txing = Nstate
};

uint8
callwakeup(Rcall *c, uint8 *state)
{
	switch(*state){
	case Idle:
		rfwakeup(c->nwakeup);
		*state = Txing;
		return Frftx;
	
	case Txing:
		c->type = Rwakeup;
		*state = Reply;
		return 0;
	
	default:
		panic("Unknown state %d", *state);
		return 0;
	}
}