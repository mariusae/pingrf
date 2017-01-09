#include <u.h>
#include <libc.h>

static int
_isprint(char c) 
{
	return c >= ' ' && c <= '~';
}

void
printhex(uint8 *buf, uint n) 
{
	int i, j;

	for(i=0; i < n/16; i++){
		for(j=0; j < 16; j+=2)
			print("%02x %02x ", buf[16*i+j], buf[16*i+j+1]);
		for(j=0; j < 16; j++)
			print("%c", _isprint(buf[16*i+j]) ? buf[16*i+j] : '.');
		print("\n");
	}
	
	for(j=i*16; j<n; j++){
		print("%02x ", buf[j]);
	}
	
	while((j++)%16 > 0)
		print("     ");
	print(" ");
	
	for(j=i*16; j<n; j++)
		print("%c", _isprint(buf[j]) ? buf[j] : '.');

	print("\n");
}
