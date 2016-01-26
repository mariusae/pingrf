
typedef struct
{
	uint8 month;
	uint8 day;
	uint8 hour;		// 24h
	uint8 minute;
	uint16 year;

	uint16 basal;		// milliunits/hr

	uint8 insulin;

	int8 temp;			// temp basal
	uint16 temptime;	// temp time remaining (m)
	uint16 temptotal;	// temp time total (m)
	
	// Internal
	int type;
} Mstatus;

typedef struct
{
	uint8 prognum;
	char progname[11];
	
	uint8 insulin;

	// This might be including temps..?
	uint16 daily;		// milliunits/day
	uint16 hourly;		// milliunits/hr
} Mstatus1;

typedef struct
{

	/* XXX these are last bolus time... */
	uint8 hour;
	uint8 minute;
	uint8 month;
	uint8 day;
	uint16 year;
	uint16 bolus;	// milliunits
	uint16 iob; 	// milliunits

} Mstatus2;

typedef struct
{
	uint bolus;
	uint basal;
	
	/* Turn these into flags? */
	uint temp;
	uint suspend;
} Mstatus3;

/* This only permits 0:100 combos for now;
 * time must be in increments of 5 minutes. */
typedef struct
{
	uint insulin;
	uint minutes;
} Mcombo;

enum
{
	Eok = 0,
	Einternal,
	Ebadreq,

	Enocombo,  /* Not really an error as such.. */
	Eunknown
};

enum
{
	Twakeup = 0x00,
	Rwakeup = Twakeup+0xff,
	
	Tkeepalive = 0x03,
	Rkeepalive = 0x03+0xff,
	
	Tadjourn = 0x05,

	Tstatus = 0x50,
	Rstatus = Tstatus+0xff,

	Tstatus1 = 0x20,
	Rstatus1 = Tstatus1+0xff,

	Tstatus2 = 0x25,
	Rstatus2 = Tstatus2+0xff,

	Tstatus3 = 0x27,
	Rstatus3 = Tstatus3+0xff,
	
	Tcancelcombo = 0x35,
	Rcancelcombo = Tcancelcombo+0xff,

	/* These are .. not acks exactly.  More like "user still present" */

	Tack0 = 0x30,
	Rack0 = 0x30+0xff,
	
	Tack1 = 0x31,
	Rack1 = Tack1+0xff,
	
	Tack2 = 0x33,
	Rack2 = Tack2+0xff,
	
	Tack3 = 0x36,
	Rack3 = Tack3+0xff,
	
	Tcombo = 0x37,
	Rcombo = Tcombo+0xff,

	Rerror = -1
};

typedef struct
{
	int type;
	uint8 tag;
	uint8 arg;

	union
	{
		int err;
		Mstatus status;
		Mstatus1 status1;
		Mstatus2 status2;
		Mstatus3 status3;
		Mcombo combo;
	};
} Pcall;

int	pcall(Pcall*, Pcall*);
void	pcallinit(Pcall *pc, int type);

int	convP2C(uint8 *p, Pcall *c);
int	convC2P(Pcall *c, uint8 *p);
void	Pcallfmt(Fmt *f);

// XXX
int pxxx();

int	pumpaddchk(void *v, uint n, uint32 chk);
