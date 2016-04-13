#include "impl.h"

void putchar(char c);

void
abort()
{
	flag |= Fpanic;
}
