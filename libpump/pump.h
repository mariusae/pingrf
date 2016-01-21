



// PstatusCmd
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
} Pstatus;

typedef struct
{
	uint8 prognum;
	char progname[11];
	
	uint8 insulin;
	
	// This might be including temps..?
	uint16 daily;		// centiunits/day
	uint16 hourly;		// milliunits/hr
} Pstatus1;

typedef struct
{
	uint8 hour;
	uint8 minute;
	uint8 month;
	uint8 day;
	uint16 year;
	uint16 bolus;	// milliunits
	uint16 iob; 	// centiunits

} Pstatus2;

typedef struct
{
	uint bolus;
	uint basal;
	
	/* Turn these into flags? */
	uint temp;
	uint suspend;
} Pstatus3;

enum
{
	Eok = 0,
	Einternal,
	Ebadreq,
	
	Enocombo,
	Eunknown
};



enum
{
/*
	Mstatus = 0x50,
	Mstatus1 = 0x20,
	Mstatus2 = 0x25,
	Mstatus3 = 0x27,
*/
	Twakeup = 0x00,
	Rwakeup = Twakeup+0xff,

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
	union
	{
		int err;
		Pstatus status;
		Pstatus1 status1;
		Pstatus2 status2;
		Pstatus3 status3;
	};
} Pcall;

int	pcall(Pcall*, Pcall*);

int	convP2C(uint8 *p, Pcall *c);
int	convC2P(Pcall *c, uint8 *p);
void	Pcallfmt(Fmt *f);

// XXX
int pxxx();

int	pumpaddchk(void *v, uint n, uint32 chk);
