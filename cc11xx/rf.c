#include "a.h"

static void recv(uint8 x);

volatile __xdata uint8 rfrxbuf[Npkt];
static volatile __xdata uint8 rxidx;

volatile __xdata uint8 rftxbuf[Npkt];
static volatile __xdata uint8 txidx;

static volatile int32 nrx, ntx;

enum
{
	Rfidle,
	Rftx,
	Rftxpreamble,
	Rfrx,
	Rftxrx,
	Rfwakeup
};

static volatile uint8 mode = Rfidle;
static volatile uint16 nwakeup;

void
rfinit()
{
	SYNC1 = 0xd3;
	SYNC0 = 0x91;
	PKTCTRL1 = 0xC0; // Packet Automation Control 
	PKTCTRL0 = 0x02; // Packet Automation Control 
	FSCTRL1 = 0x06; // Frequency Synthesizer Control 
	FSCTRL0 = 0x00;
	
#if MHZ == 24
	FREQ2 = 0x25; // Frequency Control Word, High Byte 
	FREQ1 = 0xA0; // Frequency Control Word, Middle Byte 
	FREQ0 = 0x36; // Frequency Control Word, Low Byte 

	MDMCFG4 = 0xB9; // Modem configuration 
	MDMCFG3 = 0xA3; // Modem Configuration 
	MDMCFG2 = 0x01; // Modem Configuration 
	MDMCFG1 = 0x23; // Modem Configuration 
	MDMCFG0 = 0xA0; // Modem Configuration 

	DEVIATN = 0x33; // Modem Deviation Setting 
#elif MHZ == 26
	FREQ2 = 0x22; // Frequency Control Word, High Byte 
	FREQ1 = 0xBB; // Frequency Control Word, Middle Byte 
	FREQ0 = 0x46; // Frequency Control Word, Low Byte

	MDMCFG4 = 0xC9; // Modem configuration 
	MDMCFG3 = 0x83; // Modem Configuration 
	MDMCFG2 = 0x01; // Modem Configuration 
	MDMCFG1 = 0x23; // Modem Configuration 
	MDMCFG0 = 0x80; // Modem Configuration 

	DEVIATN = 0x32; // Modem Deviation Setting 

#else
#error	No modem configuration for the configured clock speed.
#endif


	MCSM2 = 0x07;
	MCSM1 = 0x30;  //  0x3f: continues RX after TX, RX.
	MCSM0 = 0x18;

	FOCCFG = 0x16; // Frequency Offset Compensation Configuration 

	FSCAL3 = 0xE9; // Frequency Synthesizer Calibration 
	FSCAL2 = 0x2A; // Frequency Synthesizer Calibration 
	FSCAL1 = 0x00; // Frequency Synthesizer Calibration 
	FSCAL0 = 0x1F; // Frequency Synthesizer Calibration 

	TEST1 = 0x31; // Various Test Settings 
	TEST0 = 0x09; // Various Test Settings 

	PA_TABLE0 = 0xc0; // PA Power Setting 0 
	PA_TABLE1 = 0x00; // PA Power Setting 0 

	PKTLEN = Npkt;
	PKTCTRL0 = (PKTCTRL0&~0x3) | 0; // 0: fixed, 1: var, 2: infinite
	CHANNR = 36;

//	RFIM |= RFIF_IRQ_DONE;
	RFIM |= RFIF_IRQ_TXUNF;
	RFIM |= RFIF_IRQ_RXOVF;
	RFIM |= RFIF_IRQ_SFD;
//	RFIM |= RFIF_IRQ_TIMEOUT;

	// ENABLE RF interrupts
	RFIF = 0;
	IEN2 |= IEN2_RFIE;
	RFTXRXIF = 0;
	RFTXRXIE = 1;
	
	nrx = ntx = 0;
	
	rfidle();
}

void
rfidle()
{
	mode = Rfidle;
	RFST = RFST_SIDLE;
	await(MARCSTATE == MARC_STATE_IDLE);
}

void
rfrx()
{
	rfidle();
	GREEN = 0;
	rxidx = 0;
	mode = Rfrx;
	RFIM |= RFIF_IRQ_DONE;
	RFST = RFST_SRX;
}

void
rftxpreamble()
{
	rfidle();
	RED = 1;
	mode = Rftxpreamble;
	RFST = RFST_STX;
}

void
rftx(uint8 flags)
{
	if(flags&Txrx){
		MCSM1 |= MCSM1_TXOFF_MODE_RX;
		mode = Rftxrx;
	}else{
		mode = Rftx;
	}

	RFIM |= RFIF_IRQ_DONE;

	if(flags&Txcontinue){
		txidx = 1;
		RFD = rftxbuf[0];
	}else{
		rfidle();
		// XXX HACK
		if(flags&Txrx) mode = Rftxrx;
		else mode = Rftx;
		RED = 1;
		txidx = 0;
		RFST = RFST_STX;
	}
}

void
rfwakeup(uint16 n)
{
	rfidle();

	RED = 1;
	mode = Rfwakeup;
	nwakeup = n;

	PKTLEN = n%0xff;
	MDMCFG2 = 0;

	// Turn on secret level "infinite mode"
	if(nwakeup > 0xff)
		PKTCTRL0 = (PKTCTRL0&~PKTCTRL0_LENGTH_CONFIG) | 0x2;

	RFIM |= RFIF_IRQ_DONE;
	RFST = RFST_STX;
}

void
rftxrxintr(void) __interrupt RFTXRX_VECTOR
{
	RFTXRXIF = 0;

	switch(MARCSTATE){
	case MARC_STATE_RX:
		rfrxbuf[rxidx++] = RFD;
		if(rxidx >= Npkt)
			rxidx = 0;
		nrx++;
		break;
	case MARC_STATE_TX:
		switch(mode){
		default: panic("unknown mode");

		/*
			"Note that if an STX strobe is issued but no data is written to the
			RFD register after the following assertion of the RFTXRXIF flag,
			the radio will start sending preamble without entering TX_UNDERFLOW
			state."
		*/
		case Rftxpreamble: break;
		case Rfwakeup:
			RFD = 0x55;
			if(--nwakeup == 0xff)
				PKTCTRL0 &= ~PKTCTRL0_LENGTH_CONFIG;
			break;
		case Rftx:
		case Rftxrx:
			RFD = rftxbuf[txidx++];
			if(txidx >= Npkt)
				txidx = 0;
			ntx++;
			break;
		}
		break;
	}
}

void
rfrfintr(void) __interrupt RF_VECTOR
{
	// Clear interrupt flags.
	S1CON &= ~(S1CON_RFIF_0|S1CON_RFIF_1);

	if(RFIF & RFIF_IRQ_SFD){
		GREEN = 1;
		RFIF &= ~RFIF_IRQ_SFD;
	}else if(RFIF & RFIF_IRQ_RXOVF){
		RFIF &= ~RFIF_IRQ_RXOVF;
		panic("rx overflow");
	}else if(RFIF & RFIF_IRQ_TXUNF){
		panic("tx underflow");
		RFIF &= ~RFIF_IRQ_TXUNF;
		RFST = RFST_SIDLE;
	}else if(RFIF & RFIF_IRQ_DONE){
		switch(mode){
		case Rfidle: 
			break;
		case Rfwakeup:
			PKTLEN = Npkt;
			MDMCFG2 = 0x01;
		case Rftx:
		case Rftxrx:
			flag |= Frftx;
			RED = 0;
			break;
		case Rfrx:
			flag |= Frfrx;
			GREEN = 0;
			break;
		}

		if(mode == Rftxrx){
			mode = Rfrx;
			MCSM1 = (MCSM1&~MCSM1_TXOFF_MODE) | MCSM1_TXOFF_MODE_IDLE;
		}else{
			mode = Rfidle;
			RFST = RFST_SIDLE;
		}

		RFIF &= ~RFIF_IRQ_DONE;
	}else{
		panic("unknown rfrfintr!");
	}
}
