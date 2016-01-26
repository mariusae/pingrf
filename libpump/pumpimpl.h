#include <u.h>
#include <lib.h>
#include <table.h>
#include <libradio/rcall.h>
#include "pcall.h"
#include "pump.h"

uint32	crc32(void*, uint);
int		pumpchk(void *v, uint n, uint32 *chkp);
int		pumpchkhd(void *v);
int		pumpchkpayload(void *v);

extern uint8	challengetab[256];

int	_pcall(Pcall *tx, Pcall *rx);
int	_presume();
int	_padjourn();
int	_pcallsimple(int type);

/* libtask */
int	taskdelay(uint);
