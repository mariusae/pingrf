#include <u.h>
#include <libc.h>
#include "rcall.h"

int
rcall(Rcall *tx, Rcall *rx)
{
	static uint8 buf[RCALLMAX];

	if(tx->type == Treset){
		rx->type = Rreset;
		return radioreset();
	}

	if(convR2M(tx, buf, sizeof buf) == 0){
		werrstr("invalid tx message");
		return -1;
	}
	
	if(radiorpc(buf) < 0)
		return -1;
		
	if(convM2R(buf, buf[0], rx) == 0){
		werrstr("invalid rx message");
		return -1;
	}

	if(rx->type != tx->type+1 && rx->type != Rerr){
		werrstr("bad rx Rcall");
		return -1;
	}

	return 0;
}
