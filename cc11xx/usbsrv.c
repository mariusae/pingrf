#include "impl.h"
#include <stdint.h>
#include <usb.h>
#include <intel_hex.h>

/*
*/

enum
{
	Uidle,
	Uready,
	Urxing
};

static volatile uint8 nrx, ntx;
static volatile uint8 rxstate;

void
dprintsrvstate()
{
	dprint("nrx=%d ntx=%d rxstate=%d\n", nrx, ntx, rxstate);
}

void
srvinit()
{
	usb_init();
	usb_enable();
	usb_up();
	usb_flush();

	rxstate = Uidle;
}

void
srvrx()
{
	flag &= ~Frxcall;
	nrx = 0;
        rxstate = Uready;
}

void
srvrxpeek()
{
	uint8_t length;
	uint8_t in_byte;
	char nibbles[2];
	int bytes_to_read;

	if (rxstate != Urxing){
		return;
	}
	GREEN=1;

	dprint("start of reading ---- ");

	nibbles[0] = usb_getchar();

	if(nibbles[0] == 1){
		dprint("info request\n");
		usb_putchar(1);
		dprint("flush\n");
		usb_flush();
		rxstate = Uready;
		GREEN = 0;
		return;
	}

	dprint("%c ", nibbles[0]);
	nibbles[1] = usb_getchar();
	dprint("%c ", nibbles[1]);
	in_byte = hex8(&nibbles[0]);
	dprint("(%x) ", in_byte);

	if (nrx == 0) {
		if (in_byte == 0) {
			dprint("getting 0 size. error\n");
			while (1) {;}
        		rxstate = Uready;
			flag &= ~Frxcall;
			GREEN=0;
			return;
		}

		if (in_byte == 0xff) {
			dprint("radio reset\n");
	        		rxstate = Uready;
			flag &= ~Frxcall;
			WDCTL = BIT(3) | BIT(0);
			for(;;) sleep(1);
		}

		// if the index is still at 0, here is the length
		rxcall[nrx++] = in_byte;
	}

	length = rxcall[0];
	while (nrx < length) {
		nibbles[0] = usb_getchar();
		dprint("%c ", nibbles[0]);
		nibbles[1] = usb_getchar();
		dprint("%c ", nibbles[1]);
		in_byte = hex8(&nibbles[0]);
		dprint("(%x) ", in_byte);

		rxcall[nrx++] = in_byte;
		if(nrx == sizeof rxcall)
			panic("usb: rxcall overrun");
	}

	if (nrx == length) {
		rxstate = Uidle;
		flag |= Frxcall;
		dprint(" ---- read %d\n", length);
	} else {
		RED=1;
		// if we didn't read everything, let's let
		// WD take over here
		dprint(" ---- only read %d out of %d\n", nrx, length);
		while (1) {;}
	}
	
	GREEN=0;
}

void
srvpending()
{
	dprint("srvpending\n");

	if(rxstate == Uidle)
		return; /* TODO: panic? */

	if(rxstate == Uready){
		rxstate = Urxing;
        }
}

void
srvrxlower()
{
}

void
srvtx()
{
	int i;
	uint8 length;
	char txcall_in_ascii[SPIMAX * 2];
	int ascii_idx;

	flag &= ~Ftxcall;
	length = txcall[0];

	for (ntx = 0; ntx < length; ntx++) {
		to_hex8_ascii(&txcall_in_ascii[ntx * 2], txcall[ntx]);
	}

	for (ascii_idx = 0; ascii_idx < length * 2; ascii_idx++) {
		usb_putchar(txcall_in_ascii[ascii_idx]);
	}
	usb_flush( );
	flag |= Ftxcall;
}
