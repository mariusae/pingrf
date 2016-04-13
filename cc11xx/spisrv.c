#include "impl.h"
#include "cobs.h"

/*

	Configures SPI with:
	 *	~1.002930 Mbps for 26 MHz clock (doesn't matter, since we're always a slave)
	 *	clock phase to be centered on first edge of SCK period
	 *	negative clock polarity (SCK low when idle)
	 *	bit order for transfers to MSB first

	Pins:
	 MISO	P0.2
	 MOSI	P0.3
	 SSN		P0.4
	 SCK		P0.5

	This works with the default BusPirate settings.
	
	We use COBS to ensure proper framing and synchronization of messages.
		https://en.wikipedia.org/wiki/Consistent_Overhead_Byte_Stuffing

*/

enum
{
	Sidle = 0,
	Sheader,
	Sbuffer
};

static volatile uint8 rxstate, txstate;
static volatile uint8 ntx, nrx;
static volatile uint8 rxh, txh;
static volatile uint8 txsz;

void
srvinit()
{
	uint8 pins = BIT(2) | BIT(3) | BIT(4) | BIT(5);

	// USART0, Alt. 1
	PERCFG = (PERCFG & ~PERCFG_U0CFG) | PERCFG_U1CFG;

	// Give priority to USART0 over USART 1 for port 0 pins
	P2DIR = (P2DIR & ~P2DIR_PRIP0) | P2DIR_PRIP0_0;
	
	// SPI slave
	U0CSR = (U0CSR & ~U0CSR_MODE) | U0CSR_SLAVE;

	// Select peripheral.
	P0SEL |= pins;

	// ~1.002930 Mbps for 26 MHz clock.
	// (Doesn't matter since we're the SPI slave.)
	U0BAUD = 60;
	U0GCR &=  ~(U0GCR_BAUD_E | U0GCR_CPOL  |  U0GCR_CPHA | U0GCR_ORDER);
	U0GCR |= 15;
//	U0GCR |= U0GCR_ORDER;  // MSB first

	URX0IF = 0;
	URX0IE = 1;

	UTX0IF = 0;
	IEN2 |= IEN2_UTX0IE;
}

void
srvrx()
{
	flag &= ~Frxcall;
	rxstate = Sheader;
	nrx = 0;
}

void
srvtx()
{
	flag &= ~Ftxcall;
	if(txstate != Idle)
		panic("spisrv: bad txstate");
	txsz = txcall[0];
	txh = stuff(txcall, txsz);
	txstate = Sheader;
}

void
srvrxlower()
{
	unstuff(rxh, rxcall, nrx);
}

void
srvprintstate()
{
	dprint("rxstate=%d txstate=%d ntx=%d nrx=%d\n", rxstate, txstate, ntx, nrx);
}

void 
urx0intr(void) __interrupt URX0_VECTOR
{
	uint8 d = U0DBUF;
	
	switch(rxstate){
	case Sidle: break;

	case Sheader:
		if(d != 0){
			rxh = d;
			rxstate = Sbuffer;
		}
		break;

	case Sbuffer:
		if(d == 0){
			flag |= Frxcall;
			rxstate = Sidle;
		}else{
			rxcall[nrx++] = d;
			if(nrx == sizeof rxcall)
				panic("spi: rxcall overrun");
		}
		break;
	}
}

void 
utx0intr(void) __interrupt UTX0_VECTOR
{
	UTX0IF = 0;

	switch(txstate){
	case Sidle:
		U0DBUF = 0;
		break;

	case Sheader:
		U0DBUF = txh;
		txstate = Sbuffer;
		break;

	case Sbuffer:
		if(txcall[ntx] == 0)
			panic("attempting to transmit unstuffed data\n");
		U0DBUF = txcall[ntx++];
		if(ntx == txsz){
			flag |= Ftxcall;
			ntx = 0;
			txstate = Sidle;
		}
		break;
	}

}
