#include <cc1110.h>
#include "ioCCxx10_bitdef.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

#include <u.h>
#include <umacro.h>
#include <rcall.h>

#include <uboard.h>

#define 	zero(x)	memset((x), 0, sizeof(*(x)))
#define	await(x)	while(!(x))

enum
{
	Frxcall = 1<<0,
	Ftxcall = 1<<1,

/*	Furx = 1<<0,
	Futx = 1<<1,
	*/

	Frfrx = 1<<2,
	Frftx = 1<<3,
	Frfovf = 1<<4,
	Falarm = 1<<5,
	Fpanic = 1<<6
};


extern volatile uint8 flag;

void sleep(int ms);

void printinit();

#ifdef DEBUG
#undef dprint
#define	dprint(...)		printf_small(__VA_ARGS__)
#else
#define	dprint(...)
#endif

enum
{
	Txcontinue = 1<<0,
	Txrx = 1<<1,
};

void rfinit();
void rfidle();
void rfrx();
void rftx(uint8 flags);
void rftxpreamble();
void rfwakeup(uint16 n);
extern volatile __xdata uint8 rfrxbuf[Npkt];
extern volatile __xdata uint8 rftxbuf[Npkt];

void timerinit();
void alarm(uint16 ms);

void spiinit();
void spitx(uint8 c);

void srvinit();
void srvrx();
void srvtx();
void srvrxlower();

#define SPIMAX (RCALLMAX+2)

extern volatile __xdata uint8 rxcall[SPIMAX];
extern volatile __xdata uint8 txcall[SPIMAX];

enum
{
	Idle = 0, 
	Reply,
	Replying,
	Nstate
};

void call(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag);

void printflag(uint8 flag);
char* strmarcstate(uint8 state);

void	panic(char*, ...);