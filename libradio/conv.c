#include <u.h>
#include <libc.h>
#include "rcall.h"

uint
convM2R(uint8 *p, uint8 n, Rcall *r)
{
	uint8 size;

	if(n == 0) return 0;
	size = U8GET(p);
	p += 1;

	if(n < size)
		return 0;

	r->type = U8GET(p);
	p+= 1;
	r->flag = U8GET(p);
	p += 1;

	switch(r->type){
	default: return 0;

	case Tping:
	case Rping:
	case Rtx:
		break;

	case Trx:
		r->timeoutms = U16GET(p);
		p += 2;
		r->filterbyte3 = U8GET(p);
		p += 1;
		break;

	case Ttxrx:
		r->timeoutms = U16GET(p);
		p += 2;
		r->filterbyte3 = U8GET(p);
		p += 1;

	case Ttx:
		r->preamblems = U16GET(p);
		p += 2;
	case Rrx:
	case Rtxrx:
		memcpy(r->pkt, p, sizeof r->pkt);
		p += sizeof r->pkt;
		break;

	case Rerr:
		r->err = U8GET(p);
		p += 1;
	}

	return size;
}

uint
convR2M(Rcall *r, uint8 *ap, uint8 n)
{
	uint8 *p = ap;
	uint8 size;
	
	size = 3; // size, type, flag
	switch(r->type){
	default: return 0;
	

	case Rtx:
	case Tping:
	case Rping:
		break;

	case Trx:
		size += 2; // timeout
		size += 1; // filterbyte3
		break;

	case Ttxrx:
		size += 2; // timeout
		size += 1; // filterbyte3
	case Ttx:
		size += 2; // preamble
	case Rrx:
	case Rtxrx:
		size += Npkt;
		break;

	case Rerr:
		size += 1;
		break;
	}
	
	if(n < size)
		return 0;
	
	U8PUT(p, size);
	p += 1;
	U8PUT(p, r->type);
	p += 1;
	U8PUT(p, r->flag);
	p += 1;

	switch(r->type){
	default: 
		dprint("convR2M: invalid message type %d\n", r->type);
		return 0;

	case Rtx:
	case Tping:
	case Rping:
		break;

	case Trx:
		U16PUT(p, r->timeoutms);
		p += 2;
		U8PUT(p, r->filterbyte3);
		p += 1;
		break;

	case Ttxrx:
		U16PUT(p, r->timeoutms);
		p += 2;
		U8PUT(p, r->filterbyte3);
		p += 1;
	case Ttx:
		U16PUT(p, r->preamblems);
		p += 2;

	case Rrx:
	case Rtxrx:
		memcpy(p, r->pkt, sizeof r->pkt);
		p += sizeof r->pkt;
		break;
	
	case Rerr:
		U8PUT(p, r->err);
		p += 1;
		break;
	}

	if(size != p-ap)
		return 0;

	return size;
}
