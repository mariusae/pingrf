#include "a.h"

void abort();

void
printinit()
{
}

void
putchar(char c)
{
	USED(c);
}

void
panic(char *fmt, ...)
{
	va_list arg;
	
	va_start(arg, fmt);
	va_end(arg);
	
	abort();
}
