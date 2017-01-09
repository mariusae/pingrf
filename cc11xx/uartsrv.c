#include "impl.h"

/*
	UART for comms using USART0
	
	Pins:
	 RX	P0.2
	 TX	P0.3
	 CT	P0.4
	 RT	P0.5

*/

enum
{
	Uidle,
	Uready,
	Urxing
};

static volatile __xdata uint8 nrx, ntx;
static volatile uint8 rxstate;

void
srvinit()
{
	U1CSR = U1CSR_MODE;

	PERCFG = (PERCFG & ~PERCFG_U0CFG) | PERCFG_U1CFG;
	P1SEL |= BIT(4) | BIT(5) | BIT(6) | BIT(7);

#if MHZ == 26
	U1BAUD = 131;
	U1GCR = (U1GCR&~U1GCR_BAUD_E) | 9;
#elif MHZ == 24
	U1BAUD = 163;
	U1GCR = (U1GCR&~U1GCR_BAUD_E) | 9;
#endif

	U1UCR |= U1UCR_FLUSH;
	
	URX1IF = 0;
	U1CSR &= ~U1CSR_RX_BYTE;
	U1CSR |= U1CSR_RE;
	URX1IE = 1;
}

void
srvrx()
{
	flag &= ~Frxcall;
	rxstate = Uready;
	nrx = 0;
	
//	URX0IF = 0;
//	U0CSR &= ~U0CSR_RX_BYTE;
//	U0CSR |= U0CSR_RE;
}

void
srvrxlower()
{/*no-op*/}

void
srvrxpeek()
{/*no-op*/}

void
urx1intr(void) __interrupt URX1_VECTOR
{
	static uint8 byte;

	URX1IF = 0;
	byte = U1DBUF;
	
	if((rxstate == Uidle || rxstate == Uready) && byte == 0xff){
		RED=1;
		EA = 0;
		WDCTL = BIT(3) | BIT(0);
		for(;;) sleep(1000);
	}
	
	if(rxstate == Uidle)
		return;	/* TODO: panic? */

	if(rxstate == Uready){
		nrx = 0;
		rxstate = Urxing;
	}

	rxcall[nrx++] = U1DBUF;

	if(nrx == rxcall[0]){
		rxstate = Uidle;
		flag |= Frxcall;
	}
}

void
srvtx()
{
	// TODO: check that we never perform overlapping xfers
	flag &= ~Ftxcall;
	
	ntx = 1;
	U1DBUF = txcall[0];
	IEN2 |= IEN2_UTX1IE;
}

void
utx1intr(void) __interrupt UTX1_VECTOR
{
	UTX1IF = 0;

	U1DBUF = txcall[ntx++];
	if(ntx == txcall[0]){
		IEN2 &= ~IEN2_UTX1IE;
		flag |= Ftxcall;
	}
}
