#include <u.h>
#include <lib.h>
#include "rcall.h"

#ifdef CC1110
static const char* const __code strmsgtype[] = {
#else
static char* strmsgtype[] = {
#endif
	"Nop", "Trx", "Rrx", "Ttx", "Rtx", "Ttxrx", "Rtxrx", "Tping", "Rping"
};

void
rcallfmt(Fmt *f)
{
	Rcall *c = va_arg(f->arg, Rcall*);

	if(c->type >= Rerr){
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
}
