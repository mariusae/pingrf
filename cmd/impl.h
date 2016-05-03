#include <u.h>
#include <libc.h>

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <termios.h>

#include <rcall.h>
#include <pcall.h>
#include <pump.h>
#include "arg.h"

/* The tty file descriptor. */
int tty;

void*	emalloc(uint n);
char*	estrdup(char *s);
int		readn(int fd, void *buf, uint n);
int		unhexlify(char *h, void* buf, uint *n);
void		printhex(uint8 *buf, uint n);

int	rpigpioinit();
int	rpigpioradioreset();

int	ttysetblocking(int, int);
int	ttysetattr(int, int, int);

int		hexreadn(int, void*, uint);
ssize_t	hexwrite(int, const void*, size_t);