
// 

enum
{
	Nop = 0,

	Trx,		// [1]size [1]Trx [2]timeout
	Rrx,		// [1]size [1]Rrx [Npkt]pkt

	Ttx,		// [1]size [1]Ttx [2]preamblems [Npkt]pkt
	Rtx,		// [1]size [1]Rtx

	Ttxrx,	// [1]size [1]Ttxrx [2]timeout  [2]preamblems [Npkt]pkt
	Rtxrx,	// [1]size [1]Rtxrx [Npkt]pkt

	Tping,	// [1]size [1]Tping
	Rping,	// [1]size [1]Rping

	Tmax,

	Rerr = 128,	// [1]size [1]Rerr [1]err
};

enum
{
	Npkt = 78
};

enum
{
	Emissing = 1,
	Ebadcall =2,
	Etimeout
};

#define RCALLMAX (1/*size*/ + 1/*type*/ + 2/*preamblems*/ + 2/*timeout*/ + Npkt)

typedef struct 
{
	uint8 type;
	uint8 err;
	uint16 timeoutms;
	uint16 preamblems;

	uint8 pkt[Npkt];
} Rcall;

int	rcall(Rcall *, Rcall *);
uint	convM2R(uint8 *p, uint8 n, Rcall *r);
uint	convR2M(Rcall *r, uint8 *ap, uint8 n);
void	rcallfmt(Fmt*);

/* This must be provided by an underlying implementation. */
int	radiorpc(uint8 *buf);
