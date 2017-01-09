#include <u.h>
#include <libc.h>

extern long time(long*);

long
now()
{
	return time(0);
}
