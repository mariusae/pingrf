#include <u.h>
#include <libc.h>
#include "fmtdef.h"

static char digits[] = "0123456789abcdef";

int
hexstrfmt(Fmt *f)
{
	uint8 *buf;
	int n, i;
	
	buf = va_arg(f->args, uint8*);
	n = va_arg(f->args, uint);
	
	for(i=0; i<n; i++)
		fmtprint(f, "%02uhhx", buf[i]);
	
	return 0;
}

void
hexfmtinstall()
{
	fmtinstall('H', hexstrfmt);
}
