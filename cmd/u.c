#include "impl.h"
#include <sys/uio.h>
#include <ctype.h>
#include <intel_hex.h>

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

ssize_t
hexwrite(int fd, const void *p, size_t n)
{
	char hex[RCALLMAX*2];
	int i, nw;
	char *cp = (char*)p;
	
	for(i=0; i<n; i++)
		to_hex8_ascii(&hex[i*2], cp[i]);
		
	nw = write(fd, hex, n*2);
	if(nw < 0)
		return -1;

	return nw/2;
}

int
hexreadn(int fd, void *p, uint n)
{
	char hex[RCALLMAX*2];
	int nr, i;
	char *cp = p;
	
	nr = readn(fd, hex, n*2);
	if(nr < 0)
		return -1;

	for(i=0; i < nr/2; i++)
		cp[i] = hex8(hex + i*2);

	return nr/2;
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
