#include <u.h>
#include <libc.h>
#include "fmtdef.h"

int
fixstrfmt(Fmt *f)
{
	ulong u;
	int isv, i;
	uvlong div;
	char fmt[24];
	
	if(!(f->flags & FmtPrec))
		return fmtprint(f, "<no prec>");
	if(f->flags & FmtVLong)
		return fmtprint(f, "<no fixuvlong>");
	
	if(f->flags & FmtLong){
		if(f->flags & FmtUnsigned)
			u = va_arg(f->args, ulong);
		else
			u = va_arg(f->args, long);
	}else if(f->flags & FmtByte){
		if(f->flags & FmtUnsigned)
			u = (uchar)va_arg(f->args, int);
		else
			u = (char)va_arg(f->args, int);
	}else if(f->flags & FmtShort){
		if(f->flags & FmtUnsigned)
			u = (ushort)va_arg(f->args, int);
		else
			u = (short)va_arg(f->args, int);
	}else{
		if(f->flags & FmtUnsigned)
			u = va_arg(f->args, uint);
		else
			u = va_arg(f->args, int);
	}
	
	div = 1;
	for(i=0; i<f->prec; i++)
		div *= 10;
	
	if(!(f->flags & FmtUnsigned) && (vlong)u < 0){
		u = -u;
		fmtprint(f, "-");
	}

	seprint(fmt, fmt+sizeof fmt, "%%llud.%%.%dllud", f->prec);
	return fmtprint(f, fmt, u/div, u%div);
}

void
fixfmtinstall()
{
	fmtinstall('F', fixstrfmt);
}
