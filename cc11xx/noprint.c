#include "impl.h"

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
	USED(fmt);
	abort();
}
