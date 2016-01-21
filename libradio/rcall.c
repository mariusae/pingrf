#include <u.h>
#include <lib.h>
#include "rcall.h"

int (*_rcallimpl)(Rcall*, Rcall*);

int
rcall(Rcall *tx, Rcall *rx)
{
	static uint8 buf[RCALLMAX];
	
	if(_rcallimpl != nil)
		return _rcallimpl(tx, rx);

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
	
	// TODO: detailed error messages
	if(rx->type == Rerr){
		werrstr("rcall error");
		return -1;
	}
	
	if(rx->type != tx->type+1){
		werrstr("bad rx Rcall");
		return -1;
	}

	return 0;
}
