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
	// UART, defaults.
	U0CSR = U0CSR_MODE;

	// USART0 Alt. 1
	PERCFG = (PERCFG & ~PERCFG_U0CFG) | PERCFG_U1CFG;
	P0SEL |= BIT(2) | BIT(3) | BIT(4) | BIT(5);

	// Baudrate = 57.6 kbps (U0BAUD.BAUD_M = 34, U0GCR.BAUD_E = 11)
	// Baudrate = 19.2 kbps (U0BAUD.BAUD_M = 131, U0GCR.BAUD_E = 9)
	
	/* XXX */

	// 26mhz:
	U0BAUD = 131;
	U0GCR = (U0GCR&~U0GCR_BAUD_E) | 9;

	// 24mhz:
/*
	U0BAUD = 163;
	U0GCR = (U0GCR&~U0GCR_BAUD_E) | 9;
*/

	// Enable flow control.
	U0UCR |= U0UCR_FLOW;
	U0UCR |= U0UCR_FLUSH;
	// XXX
	U0UCR |= 0x02;

	rxstate = Uidle;

	URX0IF = 0;
	U0CSR &= ~U0CSR_RX_BYTE;
	U0CSR |= U0CSR_RE;
	URX0IE = 1;
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
urx0intr(void) __interrupt URX0_VECTOR
{
	static uint8 byte;

	URX0IF = 0;
	byte = U0DBUF;
	
	if((rxstate == Uidle || rxstate == Uready) && byte == 0xff){
		RED=1;
		EA = 0;
		WDCTL = BIT(3) | BIT(0);
		return;
	}
	
	if(rxstate == Uidle)
		return;	/* TODO: panic? */

	if(rxstate == Uready){
		nrx = 0;
		rxstate = Urxing;
	}

	rxcall[nrx++] = U0DBUF;

	if(nrx == rxcall[0]){
		rxstate = Uidle;
		flag |= Frxcall;
	}
}

void
srvtx()
{
	// TODO: check that we never perform overlapping 
	// xfers
	flag &= ~Ftxcall;
	
	ntx = 1;
	U0DBUF = txcall[0];
	IEN2 |= IEN2_UTX0IE;
}

void
utx0intr(void) __interrupt UTX0_VECTOR
{
	UTX0IF = 0;

	U0DBUF = txcall[ntx++];
	if(ntx == txcall[0]){
		IEN2 &= ~IEN2_UTX0IE;
		flag |= Ftxcall;
	}
}
