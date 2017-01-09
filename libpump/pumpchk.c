#include "pumpimpl.h"

static Table *chktab;

static int openchktab();

int
pumpchk(void *v, uint n, uint32 *chkp)
{
	uint32 crc;
	uint8 *chk;
	uint8 crcbuf[4];

	if(chktab == nil && openchktab() < 0)
		return -1;
	
	dprint("pumpchk\n");
	dprinthex(v, n);

	crc = crc32(v, n);
	dprint("pumpchk crc32: %ux\n", crc);
	U32PUT(crcbuf, crc);

	chk = tablelookup(chktab, crcbuf);
	if(chk != nil){
		*chkp = U32GET(chk);
		dprint("pumpchk chkhd: %ux\n", *chkp);
		return 0;
	}else{
		werrstr("checksum missing for payload %H", v, n);
		return -1;
	}
}

int
pumpchkhd(void *v)
{
	uint8 *p = v;
	uint32 chk;

	if(pumpchk(p, 4, &chk) < 0)
		return -1;

	U32PUTLE(p+4, chk);
	return 0;
}

int
pumpchkpayload(void *v)
{
	uint8 *p = v;
	uint32 crc = crc32(p+8, 28);
	U32PUT(p+36, crc);
	return 0;
}

int
pumpaddchk(void *v, uint n, uint32 chk)
{
	uint32 crc;
	uint8 crcbuf[4], chkbuf[4];

	if(chktab == nil && openchktab() < 0)
		return -1;

	crc = crc32(v, n);
	U32PUT(crcbuf, crc);
	U32PUT(chkbuf, chk);

	if(tablewrite(chktab, crcbuf, chkbuf) <0)
		return -1;
	
	return 0;
}

static int
openchktab()
{
	if(chktab != nil)
		return 0;
	chktab = tableopen("chktab", 4, 4);
	if(chktab == nil)
		return -1;

	return 0;
}

