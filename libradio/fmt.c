#include <u.h>
#include <libc.h>
#include "rcall.h"

#ifdef CC1110
static const char* const __code strmsgtype[] = {
#else
static char* strmsgtype[] = {
#endif
	"Nop", "Trx", "Rrx", "Ttx", "Rtx", "Ttxrx", "Rtxrx", "Tping", "Rping"
};

int
rcallfmt(Fmt *f)
{
	Rcall *c = va_arg(f->args, Rcall*);
	
	if(c->type == Treset)
		fmtprint(f, "Treset ");
	else if(c->type == Rreset)
		fmtprint(f, "Rreset ");
	else if(c->type >= Rerr){
		fmtprint(f, "Rerr ");
		switch(c->err){
		case Emissing:		fmtprint(f, "missing"); break;
		case Ebadcall:		fmtprint(f, "bad call"); break;
		case Etimeout:		fmtprint(f, "timeout"); break;
		}
	}
	else if(c->type < nelem(strmsgtype))
		fmtprint(f, "%s", strmsgtype[c->type]);
	else
		fmtprint(f, "Unknown<%d>", c->type);

	if(c->type == Trx || c->type == Ttxrx)
		fmtprint(f, " timeout %dms", c->timeoutms);
	if(c->type == Ttx || c->type == Ttxrx)
		fmtprint(f, " preamble %dms", c->preamblems);
	
	return 0;
}
