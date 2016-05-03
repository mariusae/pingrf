#include <impl.h>

void
boardprintinit()
{
	/* USART1 Alt. 1 */
	PERCFG = (PERCFG & ~PERCFG_U1CFG) | PERCFG_U0CFG;
	P0SEL |= BIT(4) | BIT(5);
	
	/* Baudrate = 57.6 (U1BAUD.BAUD_M = 131, U1GCR.BAUD_E = 8) */
	U1BAUD = 59;
	U1GCR = (U1GCR & ~U1GCR_BAUD_E) | 11;
}

