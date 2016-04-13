#include "impl.h"

#define  TICKSPERSECOND ((MHZ*1e6)/128/2)

static uint32 ticks;

void
timerinit()
{
	// I can't seem to reduce the tickspeed beyond using the /128
	// prescaler. The datasheet is hilarious ambiguous: 
	// "Timer tick speed setting. The value of TICKSPD cannot 
	// be higher than CLKSPD."
	//
	// Somehow, there is a factor of two in there, that I don't quite know
	// where comes from.
	CLKCON = (CLKCON & ~CLKCON_TICKSPD) | TICKSPD_DIV_1;
	T1CTL = 0;
}

void
alarm(uint16 ms)
{
	T1CTL = 0;
	T1IE = 0;
	flag &= ~Falarm;

	if(ms == 0){
		ticks = 0;
		return;
	}

	T1CTL = 0;
	T1CNTL =  0;

	ticks = ((uint32)ms*TICKSPERSECOND)/1000;

	if(ticks>>16){
		T1CC0H = 0xff;
		T1CC0L = 0xff;
	}else{
		T1CC0H = ticks >> 8;
		T1CC0L = ticks & 0xff;
	}

	T1CCTL0 = 0x44;

	T1IE = 1;

	T1CTL = T1CTL_DIV_128 | T1CTL_MODE_MODULO;
}

void
t1intr(void) __interrupt T1_VECTOR
{
	if(!(ticks>>16)){
		flag |= Falarm;
		ticks = 0;
		T1IE = 0;
		T1CTL = (T1CTL&~T1CTL_MODE) | T1CTL_MODE_SUSPEND;
	}else{
		ticks -= 0xffff;

		if(!(ticks>>16)){
			T1CC0H = ticks >> 8;
			T1CC0H = ticks & 0xff;
		}
	}
}
