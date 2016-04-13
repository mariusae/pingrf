#include "a.h"

void putchar(char c);

void
abort()
{
	flag |= Fpanic;
}
