#include "a.h"

void rftxrxintr(void) __interrupt RFTXRX_VECTOR;
void rfrfintr(void) __interrupt RF_VECTOR;

void utx0intr(void) __interrupt UTX0_VECTOR;
void urx0intr(void) __interrupt URX0_VECTOR;

void t1intr(void) __interrupt T1_VECTOR;

#ifdef DEBUG
void uart1txintr(void) __interrupt UTX1_VECTOR;
#endif

// This needs to stay in the data segment so that we
// have atomic clear-and-set.
volatile uint8 flag;

volatile __xdata uint8 rxcall[SPIMAX];
volatile __xdata uint8 txcall[SPIMAX];

static __xdata Rcall curcall;

Rcall* peekcall();
void nextcall(Rcall *c);
void reply(Rcall *c);

void putchar(char c);

void srvprintstate();

void
main(void)
{
	uint32 nrftx = 0, nrxuf = 0;
	int i = 0;
	static __xdata Rcall c;
	uint8 state = Idle;
	uint8 waitflag = 0, clearflag = 0;
	uint8 laststate, lastflag, lastMARCSTATE;
	
	laststate = state;
	lastflag = flag;
	lastMARCSTATE = MARCSTATE;

	memset(&curcall, 0, sizeof curcall);

	SLEEP &= ~SLEEP_OSC_PD;
	await(SLEEP & SLEEP_XOSC_S);
	
	CLKCON = (CLKCON & ~(CLKCON_CLKSPD | CLKCON_OSC)) | CLKSPD_DIV_1;
	await(!(CLKCON & CLKCON_OSC));

	SLEEP |= SLEEP_OSC_PD;
	await(SLEEP & SLEEP_XOSC_S);

	P1DIR |= LEDBITS;

	printinit();
	srvinit();
	rfinit();

	GREEN = RED = 0;
 	
	// Enables interrupts. (Go go go)
	EA = 1;

	dprint("pingrf started.\n");

	srvrx();
	for(;;){
		if(flag&Fpanic){
			GREEN = 0;
			RED = 0;

			for(;;){
				RED ^= 1;
				sleep(1000);
				/* TODO: reset */
			}
		}
		
		if((flag&clearflag) != 0)
			flag &= ~(flag&clearflag);

		switch(state){
		case Idle:
			if(peekcall()->type == Nop)
				break;

			nextcall(&c);
			waitflag = clearflag = 0;
			call(&c, &state, &waitflag, &clearflag);

			break;

		case Reply:
			reply(&c);
			state = Replying;
			break;

		case Replying:
			if(flag&Ftxcall){
				flag &= ~Ftxcall;
				state = Idle;
			}
//			GREEN=1;
			break;

		default:
			if((flag&waitflag) != 0){
				waitflag = flag&waitflag;
				flag &= ~waitflag;
				call(&c, &state, &waitflag, &clearflag);
			}
/*
			if((flag&waitflag)==waitflag){
				flag &= ~waitflag;
				call(&c, &state, &waitflag, &clearflag);
			}
*/
			break;
		}

		#ifdef DEBUG
		if((i++%100000 == 0) || (flag != lastflag || state != laststate | lastMARCSTATE != MARCSTATE)){
//__critical {
			switch(state){
			case Idle: 
				dprint("idle"); break;
			case Replying: 
			case Reply:
				dprint("replying %d", c.type); 
				break;
			default: 
				dprint("handling(%d) %d", state, c.type);; 
				break;
			}

			lastflag = flag;
			laststate = state;
			lastMARCSTATE = MARCSTATE;

			dprint(" flag=");
			printflag(flag);
			dprint(" waitflag=");
			printflag(waitflag);
			dprint(" radio=%s\n", strmarcstate(lastMARCSTATE));

//			dprint(" flag=%F waitflag=%F radio=%S\n", flag, waitflag, lastMARCSTATE);
//
//			putchar('.');
//			putchar('\n');
			
//}
		}
		#endif
	}
}

Rcall*
peekcall()
{
	if(curcall.type == Nop && (flag&Frxcall)){
		srvrxlower();
		flag &= ~Frxcall;

		if(convM2R(rxcall, sizeof rxcall, &curcall) == 0)
			panic("bad rxcall");

		srvrx();
	}

	return &curcall;
}

void
nextcall(Rcall *c)
{
	memcpy(c, peekcall(), sizeof *c);
	if(curcall.type != Nop)
		curcall.type = Nop;
}

void
reply(Rcall *c)
{
	if(convR2M(c, txcall, sizeof txcall) == 0)
		panic("bad txcall");
	srvtx();
}

void
sleep(int ms)
{
	int i, j;
	
	for(i=0; i<ms; i++)
	for(j=0; j<1000; j++)
		;
}
