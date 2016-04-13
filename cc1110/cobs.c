#include <u.h>

/* TODO: this needs to be robust to malformed messages. */

uint8
stuff(uint8 *p, uint8 n)
{
	uint8 header = n+1, *cp = nil;
	uint8 *bp = p, *ep = bp + n;

	for(; p<ep; p++){
		if(*p == 0){
			if(cp == nil)
				header = 1+p-bp;
			else
				*cp = p-cp;

			cp = p;
		}
	}
	
	if(cp != nil)
		*cp = p-cp;

	return header;
}

void
unstuff(uint8 h, uint8 *p, uint8 n)
{
	uint8 *ep = p+n;
	uint8 tmp;
	
	p += h-1;
	
	while(p < ep){
		tmp = *p;
		*p = 0;
		p += tmp;
	}
}
