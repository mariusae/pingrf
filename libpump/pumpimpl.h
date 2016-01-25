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
