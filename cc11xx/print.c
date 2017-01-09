#include "impl.h"

/*
	UART for debug output using USART1.
	
	Pins:
	 RX	P1.7
	 TX	P1.6
	 RT	P1.5
	 CT	P1.4

	57.6kbps, 8-bit no parity, 1 stop bit, receive polarity 1, open drain output.
*/

enum
{
	N = 512
};

static volatile __xdata uint8 buf[N];
static volatile __xdata int16 readpos = 0;
static volatile __xdata int16 writepos = 0;
static volatile __xdata int16 n = -1;

/*static void marcstatefmt(Fmt*);
static void flagfmt(Fmt*);*/
int _putchar(char c);
void abort();

void
printinit()
{
	// UART, defaults.
	U1CSR = U1CSR_MODE;
	
	boardprintinit();

	U1UCR |= U1UCR_FLUSH;
	// U1UCR |= U1UCR_FLOW;
}

int 
write(int fd, void *p, int np)
{
	int i;
	uint8 *bp = p;
	USED(fd);

	IEN2 &= ~IEN2_UTX1IE;

	for(i=0; i<np; i++)
		if(_putchar(bp[i]) != 0)
			break;

	IEN2 |= IEN2_UTX1IE;

	return i;
}

void
putchar(char c)
{
	IEN2 &= ~IEN2_UTX1IE;
	_putchar(c);
	IEN2 |= IEN2_UTX1IE;
}

int
_putchar(char c)
{
	if(n < 0){
		n++;
		U1DBUF = c;
	}else if(n < N){
		n++;
		buf[writepos++] = c;
		if(writepos == N)
			writepos = 0;
	}else{
		return -1;
	}

	return 0;
}

void
panic(char *fmt, ...) 
{
	va_list arg;

	va_start(arg, fmt);
	vprintf(fmt, arg);
	va_end(arg);

	abort();
}

int
print(char *fmt, ...)
{
	va_list arg;
	int n;

	va_start(arg, fmt);
	n = vprintf(fmt, arg);
	va_end(arg);
	
	return n;	
}

void
uart1txintr(void) __interrupt UTX1_VECTOR
{
	UTX1IF = 0;
	
	if(n > 0){
		U1DBUF = buf[readpos++];
		if(readpos == N)
			readpos = 0;
	}

	if(n-- < 0)
		IEN2 &= ~IEN2_UTX1IE;
}

char*
strmarcstate(uint8 state)
{
	switch(state){
	case MARC_STATE_SLEEP: return "MARC_STATE_SLEEP";
	case MARC_STATE_IDLE: return "MARC_STATE_IDLE"; 
	case MARC_STATE_VCOON_MC: return "MARC_STATE_VCOON_MC"; 
	case MARC_STATE_REGON_MC: return "MARC_STATE_REGON_MC"; 
	case MARC_STATE_MANCAL: return "MARC_STATE_MANCAL"; 
	case MARC_STATE_VCOON: return "MARC_STATE_VCOON"; 
	case MARC_STATE_REGON: return "MARC_STATE_REGON"; 
	case MARC_STATE_STARTCAL: return "MARC_STATE_STARTCAL"; 
	case MARC_STATE_BWBOOST: return "MARC_STATE_BWBOOST"; 
	case MARC_STATE_FS_LOCK: return "MARC_STATE_FS_LOCK"; 
	case MARC_STATE_IFADCON: return "MARC_STATE_IFADCON"; 
	case MARC_STATE_ENDCAL: return "MARC_STATE_ENDCAL"; 
	case MARC_STATE_RX: return "MARC_STATE_RX"; 
	case MARC_STATE_RX_END: return "MARC_STATE_RX_END"; 
	case MARC_STATE_RX_RST: return "MARC_STATE_RX_RST"; 
	case MARC_STATE_TXRX_SWITCH: return "MARC_STATE_TXRX_SWITCH"; 
	case MARC_STATE_RX_OVERFLOW: return "MARC_STATE_RX_OVERFLOW"; 
	case MARC_STATE_FSTXON: return "MARC_STATE_FSTXON"; 
	case MARC_STATE_TX: return "MARC_STATE_TX"; 
	case MARC_STATE_TX_END: return "MARC_STATE_TX_END"; 
	case MARC_STATE_RXTX_SWITCH: return "MARC_STATE_RXTX_SWITCH"; 
	case MARC_STATE_TX_UNDERFLOW: return "MARC_STATE_TX_UNDERFLOW"; 
	default: return "MARC_STATE_UNKNOWN";
	}
}

/*
static void
marcstatefmt(Fmt *fmt)
{
	fmt->dst = printstr(fmt->dst, fmt->edst, strmarcstate(va_arg(fmt->arg, int)), fmt->size);
}
*/

static const char* const __code _strflag[] = {
	"Rxcall", "Txcall", "Rfrx", "Rftx", "Rfovf", "Alarm", "Panic"
};

void
printflag(uint8 flag)
{
	int i;

	for(i=0; i < nelem(_strflag); i++){
		if(flag&BIT(i))
			printf("%s", _strflag[i]);
	}
}
