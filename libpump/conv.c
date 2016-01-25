#include "pumpimpl.h"

char* printstr(char *dst, char *edst, char *s, int size)  REENTRANT;
char* seprint(char *dst, char *edst, char *fmt, ...) REENTRANT;
static char* strpcallerr(int err);

int
convP2C(uint8 *p, Pcall *c)
{
	c->type = p[0]+0xff; /* XXX - actually distinguish between these */

	switch(c->type){
	default: return 0;

	case Rstatus:
	{
		Mstatus *s = &c->status;
		s->year = 2007 + (p[12]&0xf);
		s->month = 1 + (p[12]>>4);
		s->day = p[13];
		s->hour = p[14];
		s->minute = p[15];
		s->basal = (p[21]<<8) | p[20];
		s->insulin = p[22];
		
		if(!(p[25]&0x1))
			s->temp = 0;
		else if(p[26] > 128)
			s->temp = (int8)-(256-p[26]);
		else
			s->temp = p[26];

		s->temptotal = p[30]*60 + p[31];
		s->temptime = s->temptotal-(p[28]*60 + p[29]);

		break;
	}

	case Rstatus1:
	{
		Mstatus1  *s = &c->status1;
		s->prognum = p[9];
		memcpy(s->progname, p+16, 10);
		s->progname[10] = 0;
		s->insulin = p[14];
		s->daily = 10*((p[11]<<8) | p[10]);
		s->hourly = (p[13]<<8) | p[12];
		
		 break;
	}
	
	case Rstatus2:
	{
		Mstatus2 *s = &c->status2;

		// Last bolus 
		s->year = 2007 + (p[14]&0xf);
		s->month = 1 + (p[14]>>4);
		s->day = p[15];
		s->hour = p[16];
		s->minute = p[17];
		s->bolus = (p[13]<<8) | p[12];
		s->iob = 10*((p[25]<<8) | p[24]);

		break;
	}

	case Rstatus3:
	{
		Mstatus3 *s = &c->status3;

		s->bolus = U32GETLE(p+12);
		s->basal = U32GETLE(p+16);
		s->temp = p[10] & 0x1;
		s->suspend = p[10] & 0x2;
	}
	
	case Rcancelcombo:
		switch(p[2]){
		case 0x07:	c->err = Eok; break;
		case 0x15:	c->err = Enocombo; break;
		default:		c->err = Eunknown;
		}
		break;
	}

	return 0;
}

int
convC2P(Pcall *c, uint8 *p)
{
	memset(p, 0, Npkt);

	switch(c->type){
	default:
		werrstr("No encoding for packet type %2x", c->type);
		return -1;

	case Twakeup:
	{
		static uint8 wakeup[] = {
			0x00, 0x00, 0x00, 0x04,	/* command */
			0xde, 0xad, 0xbe, 0xef, 
			0x49, 0x01, 0x2d, 0x14, 	/* this seems be required, */
			0x50, 0x8b, 0xdb, 0xb9	/* not sure why exactly */
		};
		memcpy(p, wakeup, sizeof wakeup);
		break;
	}
	
	case Tstatus:
//		p[0] = 0x50, p[1] = 0x00, p[2] = 0xf8, p[3] = 0x00;
		p[0] = 0x50, p[1] = 0x00, p[2] = 0x0e, p[3] = 0x00;

		break;

	case Tstatus1:
		p[0] = 0x20, p[1] = 0x00, p[2] = 0x0e, p[3] = 0x00;
		break;
	
	case Tstatus2:
		p[0] = 0x25, p[1] = 0x00, p[2] = 0x0e, p[3] = 0x00;
		break;
	
	case Tstatus3:
		p[0] = 0x27, p[1] = 0x00, p[2] = 0xf8, p[3] = 0x00;
//		p[76] = 0x18; /* XXX*/
		break;
	
	case Tcancelcombo:
		p[0] = 0x35, p[1] = 0x00, p[2]= 0x0e, p[3] = 0x00;
		break;

	case Tack1:
		p[0] = 0x31, p[1] = 0x00, p[2] = 0x12, p[3] = 0x00;
		break;

	case Tack2:
		p[0] = 0x33, p[1] = 0x00, p[2] = 0x24, p[3] = 0x00;
		break;

	case Tack3:
		p[0] = 0x36, p[1] = 0x00, p[2] = 0xdc, p[3] = 0x00;
		break;

	case Tcombo:
		p[0] = 0x37, p[1] = 0x00, p[2] = 0x0e, p[3] = 0x1c;
		
		if(c->combo.minutes % 6 != 0){
			werrstr("combo duration must be a multiple of 6");
			return -1;
		}

		/* Do we need to set flag=78? */
		
		/* p[10], p[11] - LE amount */
/*
		p[8] = 0x01, p[9] = 0x00, p[10] = 0x32, p[11] = 0x00, 
			p[12] = 0xcd, p[13] = 0xff, p[14] = 0x41;
*/

		p[8] = 0x01, p[9] = 0x00;
		
		/* They seem to be in "extra careful" mode here:
		 * as well as the amount of insulin, they also store
		 * the two's complement of the amount of insulin.
		 * (All in milliunits.)
		 */
		U16PUTLE(p+10, c->combo.insulin);
		U16PUTLE(p+12, 65535-c->combo.insulin);
		p[14] = c->combo.minutes/6;

/*
		p[8] = 0x01, p[9] = 0x00, 
			p[10] = 0xb0, p[11] = 0x04, 
			p[12] = 0x4f, p[13] = 0xfb, 
			p[14] = 0x5;
*/
			/* increments of 6 minutes. */

			
		if(pumpchkpayload(p) < 0)
			return -1;

		break;
	}

	return pumpchkhd(p);
}

void
Pcallfmt(Fmt *f)
{
	Pcall *c = va_arg(f->arg, Pcall*);

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

		return fmtprint(f,  "Rstatus  %4d/%d/%d %d:%2d basal %d.%3d insulin %dU temp %d %d/%d",
			s->year, s->month, s->day, s->hour, s->minute,
			s->basal/1000, s->basal%1000, s->insulin,
			s->temp, s->temptime, s->temptotal);
	}

	case Rstatus1:
	{
		Mstatus1 *s = &c->status1;
		return fmtprint(f, "Rstatus1 %d-%s insulin %dU, daily %d.%2dU hourly %d.%3dU",
			s->prognum, s->progname, s->insulin,
			s->daily/1000, s->daily%1000,
			s->hourly/1000, s->hourly%1000);
	}

	
	case Rstatus2:
	{
		Mstatus2 *s = &c->status2;
		return fmtprint(f, "Rstatus2 bolus %d.%3d %4d/%d/%d %2d:%2d iob %d.%2d",
			s->bolus/1000, s->bolus%1000,
			s->year, s->month, s->day,
			s->hour, s->minute, s->iob/1000, s->iob%1000);
	}
	
	case Rstatus3:
	{
		Mstatus3 *s = &c->status3;
		return fmtprint(f, "Rstatus3 bolus %d.%3d basal %d.%3d temp=%d suspend=%d",
			s->bolus/1000, s->bolus%1000, s->basal/1000, s->basal%1000,
			s->temp, s->suspend);
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