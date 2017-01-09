#include "pumpimpl.h"

char* printstr(char *dst, char *edst, char *s, int size)  REENTRANT;
char* seprint(char *dst, char *edst, char *fmt, ...) REENTRANT;
static char* strpcallerr(int err);

/* 
 * BUG: currently this expects to be called from replies only.
 * e.g., the type is adjusted to account for this.
 */
int
convP2C(uint8 *ap, Pcall *c)
{
	uint8 *p = ap;
	uint size;
	uint32 chk, chk1;

	c->type = 0xff + *p++;
	if(*p++ != 0)
		return 0;
	c->tag = *p++;
	size = c->size = *p++;

	if(pumpchk(p-4, 4, &chk) == 0){
		/* TODO: soft error/warning when we don't have it. */
		if(chk != U32GETLE(p)){
			werrstr("header checksum mismatch: got %8ux, expected %8ux", 
				U32GETLE(p), chk);
			return -1;
		}
	}

	p += 4;

	if(size > 0){
		chk = crc32(p, size);
		chk1 = U32GET(p+size);
		if(chk != chk1){
			werrstr("payload checksum mismatch: got %8ux, expected %8ux",
				chk1, chk);
			return -1;
		}
	}
	
	c->err = Eok;
	switch(c->type){
	default: break;
	
	case Rkeepalive:
		c->backoffms = U16GETLE(p);
		break;
		
	case Rbolus:
	{
		Mbolus *b = &c->bolus;
		p += 2;
		b->insulin = U16GETLE(p);
		p += 2;
		b->minutes = U16GETLE(p)*6;
		break;
	}
	
	case Rdeliverystatus:
	{
		p += 1;
		switch(*p){
		case 0x01:	c->deliverystatus = DeliveryBusy; break;
		case 0x02:	c->deliverystatus = DeliveryDone; break;
		default:		c->deliverystatus = DeliveryUnknown; break;
		}
	}

	/* TODO: check against sizes */
	case Rstatus:
	{
		Mstatus *s = &c->status;

		/* 4 bytes unknown */

		s->year = 2007 + (p[4]&0xf);
		s->month = 1 + (p[4]>>4);
		s->day = p[5];
		s->hour = p[6];
		s->minute = p[7];

		/* 4 bytes unknown */

		s->basal = (p[13]<<8) | p[12];

		s->insulin = p[14];
		
		/* 2 bytes unknown */
		
		if(!(p[17]&0x1))
			s->temp = 0;
		else if(p[18] > 128)
			s->temp = (int8)-(256-p[18]);
		else
			s->temp = p[18];
		
		/* 2 bytes unknown */

		s->temptotal = p[22]*60 + p[23];
		s->temptime = s->temptotal-(p[20]*60 + p[21]);
		
		break;
	}

	case Rstatus1:
	{
		Mstatus1  *s = &c->status1;

		s->prognum = p[1];

		s->insulin = p[6];
		s->daily = 10*((p[3]<<8) | p[2]);
		s->hourly = (p[5]<<8) | p[4];
		
		/* p[7] unknown. */

		memcpy(s->progname, p+8, 10);
		s->progname[10] = 0;

		 break;
	}
	
	case Rstatus2:
	{
		Mstatus2 *s = &c->status2;

		// Last bolus 
		s->year = 2007 + (p[6]&0xf);
		s->month = 1 + (p[6]>>4);
		s->day = p[7];
		s->hour = p[8];
		s->minute = p[9];
		s->bolus = (p[5]<<8) | p[4];
		s->iob = 10* ((p[17]<<8) | p[16]);
		break;
	}

	case Rstatus3:
	{
		Mstatus3 *s = &c->status3;
		
		s->temp = p[2] & 0x1;
		s->suspend = p[2] & 0x2;

		s->bolus = U32GETLE(p+4);
		s->basal = U32GETLE(p+8); 

		break;
	}

	case Rstatus4:
	{
		Mstatus4 *s = &c->status4;
		
		s->active = p[1] == 0x01; /* tbd. */
		
		s->year = 2007+(p[2]&0xf);
		s->month = 1+(p[2]>>4);
		s->day = p[3]; 
		s->starthour = p[4];
		s->startminute = p[5];
		s->endhour = p[6];
		s->endminute = p[7];
		
		s->delivered = U16GETLE(p+8);
		s->total = U16GETLE(p+10);

	}


	}

	/* Fill status bits where we (think) we have them. */
	switch(c->type){
	case Rbolus:
	case R2c:
	case Rdeliverystatus:
	case Rstatus:
		if(p[0] & BIT(4))
			c->flag |= Fwarn;	
	}
	
	/* TODO: check against size */

	return 0;
}

static uint sizeC2P[256] = {
	[Twakeup] = 4,
	[Tbolus] = 28,
	[Tclearwarn] = 2,
};

int
convC2P(Pcall *c, uint8 *ap/*[Npkt]]*/)
{
	uint8 *p = ap;
	uint32 chk;
	uint size = sizeC2P[c->type];

	*p++ = c->type;
	*p++ = 0;
	*p++ = c->tag;
	*p++ = size;

	if(pumpchk(p-4, 4, &chk) < 0)
		return -1;

	U32PUTLE(p, chk);
	p += 4;

	/* Clear out our garbage. */
	memset(p, 0, Npkt-8);

	switch(c->type){
	default:	break;

	case Twakeup:
		*p++ = 0xbf;
		*p++ = 0x00;
		*p++ = 0x5b;
		*p++ = 0x17;
		break;

	case Tbolus:
		if(c->bolus.minutes % 6 != 0){
			/* The pump does not seem to accept other durations. */
			werrstr("combo duration must be a multiple of 6");
			return -1;
		}

		*p++ = c->bolus.minutes == 0 ? 0x00 : 0x01;
		*p++ = 0x00;

		/* They seem to be in "extra careful" mode here. */
		U16PUTLE(p, c->bolus.insulin);
		p += 2;
		U16PUTLE(p, 0xffff^c->bolus.insulin);
		p += 2;
		*p++ = c->bolus.minutes/6;

		/* zeroes! (for now) */
		p += 28-7;

		break;

	case Tclearwarn:
		*p++ = 0xa7;
		*p++ = 0x01;
		break;
	}
	
	if(p-ap!=size+8)
		return -1;

	if(size > 0){
		chk = crc32(ap+8, size);
		U32PUT(p, chk);
	}

	return 0;
}

int
Pcallfmt(Fmt *f)
{
	Pcall *c = va_arg(f->args, Pcall*);

	switch(c->type){
	default: 
		if(c->type < 0xff)
			return fmtprint(f, "<unknown T call %x>", c->type);
		else
			return fmtprint(f, "<unknown R call %x>", c->type);
	
	case Rerror:
		return fmtprint(f, "Rerror");

	case Rstatus:
	{
		Mstatus *s = &c->status;

		return fmtprint(f,  "Rstatus  %4d/%d/%d %d:%2d basal %.3uF insulin %dU temp %d %d/%d",
			s->year, s->month, s->day, s->hour, s->minute,
			s->basal, s->insulin, s->temp, s->temptime, s->temptotal);
	}

	case Rstatus1:
	{
		Mstatus1 *s = &c->status1;
		return fmtprint(f, "Rstatus1 %d-%s insulin %dU, daily %.3uFU hourly %.3uFU",
			s->prognum, s->progname, s->insulin, s->daily, s->hourly);
	}

	
	case Rstatus2:
	{
		Mstatus2 *s = &c->status2;
		return fmtprint(f, "Rstatus2 bolus %d.%3d %4d/%d/%d %2d:%2d iob %.3uF",
			s->bolus/1000, s->bolus%1000,
			s->year, s->month, s->day,
			s->hour, s->minute, s->iob);
	}
	
	case Rstatus3:
	{
		Mstatus3 *s = &c->status3;
		return fmtprint(f, "Rstatus3 bolus %.3uF basal %.3uF temp=%d suspend=%d",
			s->bolus, s->basal, s->temp, s->suspend);
	}

	case Rcancelcombo:
		return fmtprint(f, "Rcancelcombo %s", strpcallerr(c->err));
	}
}

static char* strpcallerrs[] = {
	[Eok] = "ok", 
	[Einternal] = "internal",
	[Ebadreq] = "bad request",
	[Enocombo] = "no combo active",
	[Eunknown] = "unknown error"
};

static char*
strpcallerr(int err)
{
	if(err >= 0 && err < nelem(strpcallerrs))
		return strpcallerrs[err];
	else
		return "unknown error";
}