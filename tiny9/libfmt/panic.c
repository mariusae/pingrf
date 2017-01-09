#include <u.h>
#include <libc.h>
#include "fmtdef.h"

void
panic(char *fmt, ...)
{
	va_list arg;
	
	va_start(arg, fmt);
	vfprint(2, fmt, arg);
	va_end(arg);
	fprint(2, "\n");
	abort();
}