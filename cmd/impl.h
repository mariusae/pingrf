#include <u.h>
#include <lib.h>

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <termios.h>

#include <libradio/rcall.h>
#include <libpump/pump.h>
#include "arg.h"

void*	emalloc(uint n);
char*	estrdup(char *s);
int		readn(int fd, void *buf, uint n);
int		unhexlify(char *h, void* buf, uint *n);

extern int debug;

#undef dprint
#undef dprinthex

#define dprint(...)	if(debug) fprint(2, __VA_ARGS__)
#define dprinthex(p, n)	if(debug) printhex(p, n)
