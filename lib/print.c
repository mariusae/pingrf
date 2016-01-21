#include <u.h>
#include <lib.h>

#include <stdarg.h>
#include <string.h>
#if defined(__unix__)
#include <errno.h>
#endif

int write(int, void*, int);
void abort();
int __errfmt(Fmt *f);

static XDATA
struct
{
	char c;
	Printer *pr;
} printers[8];

/* Copyright (c) 2004 Russ Cox.  See COPYRIGHT. */

/*
 * Stripped down print library.  Plan 9 interface, new code.
 */

enum
{
	FlagLong = 1<<0,
	FlagLongLong = 1<<1,
	FlagUnsigned = 1<<2,
};

char*
printstr(char *dst, char *edst, char *s, int size)
{
	int l, n, sign;

	sign = 1;
	if(size < 0){
		size = -size;
		sign = -1;
	}
	if(dst >= edst)
		return dst;
	l = strlen(s);
	n = l;
	if(n < size)
		n = size;
	if(n >= edst-dst)
		n = (edst-dst)-1;
	if(l > n)
		l = n;
	if(sign < 0){
		memmove(dst, s, l);
		if(n-l)
			memset(dst+l, ' ', n-l);
	}else{
		if(n-l)
			memset(dst, ' ', n-l);
		memmove(dst+n-l, s, l);
	}
	return dst+n;
}
	
char*
vseprint(char *dst, char *edst, char *fmt, va_list arg)
{
	int fl, size, sign, base, i;
	Fmt fmtarg;
	char *p, *w;
	char cbuf[2];

	va_copy(fmtarg.arg, arg);

	w = dst;
	for(p=fmt; *p && w<edst-1; p++){
		switch(*p){
		default:
			*w++ = *p;
			break;
		case '%':
			fl = 0;
			size = 0;
			sign = 1;
			for(p++; *p; p++){
				switch(*p){
				case '-':
					sign = -1;
					break;
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					size = size*10 + *p-'0';
					break;
				case 'l':
					if(fl&FlagLong)
						fl |= FlagLongLong;
					else
						fl |= FlagLong;
					break;
				case 'u':
					fl |= FlagUnsigned;
					break;
				case 'd':
					base = 10;
					goto num;
				case 'o':
					base = 8;
					goto num;
				case 'p':
				case 'x':
					base = 16;
					goto num;
				num:
				{
					static XDATA char digits[] = "0123456789abcdef";
					char buf[30];
					char *p, *zp;
					int neg, zero;
					uvlong luv;

					if(fl&FlagLongLong){
						if(fl&FlagUnsigned)
							luv = va_arg(fmtarg.arg, uvlong);
						else
							luv = va_arg(fmtarg.arg, vlong);
					}else{
						if(fl&FlagLong){
							if(fl&FlagUnsigned)
								luv = va_arg(fmtarg.arg, ulong);
							else
								luv = va_arg(fmtarg.arg, long);
						}else{
							if(fl&FlagUnsigned)
								luv = va_arg(fmtarg.arg, uint);
							else
								luv = va_arg(fmtarg.arg, int);
						}
					}

					p = buf+sizeof buf;
					neg = 0;
					zero = 0;
					if(!(fl&FlagUnsigned) && (vlong)luv < 0){
						neg = 1;
						luv = -luv;
					}
					if(luv == 0)
						zero = 1;
					*--p = 0;
					zp = p-size;
					while(luv){
						*--p = digits[luv%base];
						luv /= base;
					}
					if(size){
						while(p > zp)
							*--p = '0';
					}else if(zero)
						*--p = '0';

					if(base == 8)
						*--p = '0';
					if(neg)
						*--p = '-';
					w = printstr(w, edst, p, size*sign);
					goto break2;
				}
				case 'c':
					cbuf[0] = va_arg(fmtarg.arg, int);
					cbuf[1] = 0;
					w = printstr(w, edst, cbuf, size*sign);
					goto break2;
				case 's':
					w = printstr(w, edst, va_arg(fmtarg.arg, char*), size*sign);
					goto break2;
				
				case 'X':
					// XXX
					goto break2;

				case 'r':
					fmtarg.dst = w;
					fmtarg.edst = edst;
					fmtarg.size = size*sign;
					__errfmt(&fmtarg);
					w = fmtarg.dst;
					goto break2;

				default: 
					for(i=0; i<nelem(printers); i++)
					if(printers[i].c == *p)
						break;

					if(i == nelem(printers))
						p = "X*verb*";
					else{
						fmtarg.dst = w;
						fmtarg.edst = edst;
						fmtarg.size = size*sign;
						printers[i].pr(&fmtarg);
						w = fmtarg.dst;
					}

					goto break2;
				}
			}
		    break2:
			break;
		}
	}
	
//	assert(w < edst);
	*w = 0;
	
	va_end(fmtarg.arg);
	return w;
}

void
fmtinstall(char c, Printer *pr)
{
	int i;
	
	for(i=0; i<nelem(printers); i++)
	if(printers[i].c == 0)
		break;
	
	if(i == nelem(printers))
		panic("out of printers");
	
	printers[i].c = c;
	printers[i].pr = pr;
}

char*
vsnprint(char *dst, uint n, char *fmt, va_list arg)
{
	vseprint(dst, dst+n, fmt, arg);
	return dst;
}

char*
snprint(char *dst, uint n, char *fmt, ...)
{
	va_list arg;

	va_start(arg, fmt);
	vsnprint(dst, n, fmt, arg);
	va_end(arg);
	return dst;
}

char*
seprint(char *dst, char *edst, char *fmt, ...) 
{
	va_list arg;
	char *ep;

	va_start(arg, fmt);
	ep = vseprint(dst, edst, fmt, arg);
	va_end(arg);
	return ep;
}

void
fmtprint(Fmt *f, char *fmt, ...)
{
	va_list arg;
	
	va_start(arg, fmt);
	f->dst = vseprint(f->dst, f->edst, fmt, arg);
	va_end(arg);
}

int
vfprint(int fd, char *fmt, va_list arg) 
{
	static XDATA char buf[256];

	vseprint(buf, buf+sizeof buf, fmt, arg);
	return write(fd, buf, strlen(buf));
}

int
vprint(char *fmt, va_list arg) 
{
	return vfprint(1, fmt, arg);
}

int
fprint(int fd, char *fmt, ...) 
{
	int n;
	va_list arg;

	va_start(arg, fmt);
	n = vfprint(fd, fmt, arg);
	va_end(arg);
	return n;
}

int
print(char *fmt, ...) 
{
	int n;
	va_list arg;

	va_start(arg, fmt);
	n = vprint(fmt, arg);
	va_end(arg);
	return n;
}

char*
strecpy(char *dst, char *edst, char *src) 
{
	*printstr(dst, edst, src, 0) = 0;
	return dst;
}

static int
isprint(char c) 
{
	return c >= ' ' && c <= '~';
}

void
printhex(uint8 *buf, uint n) 
{
	int i, j;

	for(i=0; i < n/16; i++){
		for(j=0; j < 16; j+=2)
			print("%02x%02x ", buf[16*i+j], buf[16*i+j+1]);
		for(j=0; j < 16; j++)
			print("%c", isprint(buf[16*i+j]) ? buf[16*i+j] : '.');
		print("\n");
	}
	
	for(j=i*16; j<n; j++){
		print("%02x", buf[j]);
		if(j%2 == 1)
			print(" ");
	}
	
	while((j++)%16 > 0){
		print("  ");
		if(j%2 == 1)
			print(" ");
	}
	print(" ");
	
	for(j=i*16; j<n; j++)
		print("%c", isprint(buf[j]) ? buf[j] : '.');

	print("\n");
}

void
panic(char *fmt, ...) 
{
	va_list arg;

	va_start(arg, fmt);
	vprint(fmt, arg);
	va_end(arg);
	print("\n");
	abort();
}
