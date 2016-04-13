#include "a.h"

void
callping(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
{
	USED(waitflag);
	USED(clearflag);
	
	c->type = Rping;
	*state = Reply;
}
