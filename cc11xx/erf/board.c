#include <impl.h>

void
boardprintinit()
{
	/* USART1 Alt. 2 */
	PERCFG = (PERCFG & ~PERCFG_U0CFG) | PERCFG_U1CFG;
	P1SEL |= BIT(4) | BIT(5) | BIT(6) | BIT(7);

	/* Baudrate = 57.6 kbps (U1BAUD.BAUD_M = 34, U1GCR.BAUD_E = 11) */
	U1BAUD = 34;
	U1GCR = (U1GCR & ~U1GCR_BAUD_E) | 11;
}
