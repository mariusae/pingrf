#include "impl.h"

void putchar(char c);

void
abort()
{
	flag |= Fpanic;
	
	for(;;){
		RED=1;
		GREEN=0;
		sleep(1000);
		RED=0;
		sleep(1000);
	}
}
