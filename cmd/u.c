#include "impl.h"
#include <sys/uio.h>
#include <ctype.h>

void*
emalloc(uint n)
{
	void *p;

	if((p = calloc(n, 1)) == nil)
		abort();

	return p;
}

char*
estrdup(char *s)
{
	void *d;
	
	if((d = strdup(s)) == nil)
		abort();

	return d;
}

int
readn(int fd, void *p, uint n)
{
	int m, q = n;
	uint8 *buf = p;

	while(n>0){
		if((m = read(fd, buf, n)) < 0)
			return m;
		else if(m == 0)
			return q-n;
		n -= m;
		buf += m;
	}

	return q;
}


static char digits[] = "0123456789abcdef";

int
unhexlify(char *h, void* buf, uint *n)
{
	uint8 *p = buf;
	char *c;

	if(*n < strlen(h)/2)
		return -1;
	
	if(strlen(h)%2 != 0)
		return -1;

	while(*h){
		c = strchr(digits, tolower(*h++));
		if(c == nil)
			return -1;
		*p = (c-digits) << 4;
		
		c = strchr(digits, tolower(*h++));
		if(c == nil)
			return -1;
		
		*p |= c-digits;
		p++;
	}
	
	*n = p-(uint8*)buf;

	return 0;
}
