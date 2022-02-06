#include "impl.h"
#include <sys/utsname.h>

enum
{
	Resetserial,
	Resetgpio
};

char *argv0;

#if 0
/* char *ttypath = "/dev/tty.usbserial"; */
/* char *ttypath = "/dev/cu.usbserial-AH03IMYO"; */
char *ttypath = nil;
speed_t ttybaud = B19200;
#endif

void usage();
void opentty();

int 	rcallwrite(void *p, uint n);
void	chkadd(char *v, char *chk);
void	call(int type);
int	rcallimpl(Rcall *tx, Rcall *rx);

/* extract */
int	roundtrip(uint8*);

static void chklearn();
static void	ping();
static void reset();

uint32	crc32(void*, uint);

int (*radioread)(int, void*, uint) = readn;
ssize_t (*radiowrite)(int, const void*, size_t) = write;

void pxxx();

static struct
{
	char *name;
	int type;
	char *description;
} cmdtab[] = {
	{"status", Tstatus, "Retrieve the home-screen status message of the pump"},
	{"status1", Tstatus1, "Retreive status screen 1 from the pump"},
	{"status2", Tstatus2, "Retriece status screen 2 from the pump"},
	{"status3", Tstatus3, "Retrieve status screen 3 from the pump"},
	{"status4", Tstatus4, "Retrieve status screen 4 from the pump"},
	{"cancelcombo", Tcancelcombo, "Cancel an existing combo bolus"}
};

void
taskmain(int argc, char **argv)
{
	int i;
	uint8 buf[256];
	uint n;
	float insulin, hours;
	uint dox = 0;
	struct utsname name;
	char c;
	char *radio;
	int doreset = 0;

	radio = "tty:";

	fixfmtinstall();
	hexfmtinstall();
	fmtinstall('P', Pcallfmt);
	fmtinstall('R', rcallfmt);

	ARGBEGIN{
	case 'r':
		radio = EARGF(usage());
		break;
	case 'R':
		doreset = 1;
		break;
	case 'd':
		debug = 1;
		break;
	case 'x':
		dox = 1;
		break;
	case 'h':
		usage();
	}ARGEND

	if(argc == 0)
		usage();

	if(radioinit(radio) < 0)
		panic("failed to initialize radio: %r");

	if(doreset)
		radioreset();

	if(dox) pxxx();

	if(strcmp(argv[0], "chkadd") == 0){
		if(argc < 3)
			usage();

		chkadd(argv[1], argv[2]);
	}else if(strcmp(argv[0], "chklearn") == 0){
		chklearn();
	}else if(strcmp(argv[0], "crc32") == 0){
		if(argc != 2)
			usage();

		n = sizeof buf;

		if(unhexlify(argv[1], buf, &n) < 0)
			panic("unhexlify: %r");

		print("crc32(%s) = %8ux\n", argv[1], crc32(buf, n));
	}else if(strcmp(argv[0], "ping") == 0){
		ping();
	}else if(strcmp(argv[0], "reset") == 0){
		reset();
	}else if(strcmp(argv[0], "stat") == 0){
		Pstat ps;

		if(pstat(&ps) < 0)
			panic("pstat: %r");

		print("%4d/%2d/%2d %2d:%2d\n",
			ps.year, ps.month, ps.day, ps.hour, ps.minute);
		print("	Insulin remaining: %d\n", ps.insulinleft);
		print("	IOB: %.3uF\n", ps.iob);
		print("	Basal: %.3uF\n", ps.basal);
		print("	Temp: %d %d/%d\n", ps.temp, ps.temptime, ps.temptotal);
		print("	Daily basal delivery: %.3uF\n", ps.dailybasal);
		print("	Daily bolus delivery: %.3uF\n", ps.dailybolus);
		print("	Last bolus: %.3uF\n", ps.lastbolus);
		if(ps.comboactive){
			print("	Combo active %2d:%2d-%2d:%2d %.3uF/%.3uF\n",
				ps.combostarthour, ps.combostartminute,
				ps.comboendhour, ps.comboendminute,
				ps.combodelivered, ps.combototal);
		}else{
			print("	No combo active\n");
		}
		if(ps.haswarning)
			print("	WARNING ACTIVE\n");
	}else if(strcmp(argv[0], "clearwarning") == 0){
		if(pclearwarning() < 0)
			panic("pclearwarning: %r");
	}else if(strcmp(argv[0], "bolus") == 0){
		if(argc != 3)
			usage();

		insulin = strtof(argv[1], nil);
		hours = strtof(argv[2], nil);

		if(pbolus((uint)(insulin*1000.0), (uint)(hours*60)) < 0)
			panic("pbolus: %r");

		print("ok\n");
	}else if(strcmp(argv[0], "cancelcombo") == 0){
		if(pcancel() < 0)
			panic("pcancel: %r");
		print("ok\n");
	}else if(strcmp(argv[0], "pcall") == 0 && argc > 1){
		int type = -1;

		for(i=0; i<nelem(cmdtab); i++)
			if(strcmp(argv[1], cmdtab[i].name) == 0){
				type = cmdtab[i].type;
				break;
			}

		if(type < 0)
			usage();

		call(type);
	}else{
		usage();
	}
}

void
usage()
{
	int i;

	fprint(2, "usage: pingrf [-r radio] [-dh] command [options]\n");
	fprint(2, "Where command is one of:\n");
	fprint(2, "  chkadd data checksum\n");
	fprint(2, "	Add known data-checksum pair. Arguments are hexdecimal strings.\n");
	fprint(2, "  bolus insulin hours\n");
	fprint(2, "	Issue a combo bolus for the given amount of insulin and time.\n");
	fprint(2, "  cancelcombo\n");
	fprint(2, "	Cancel a currently running combo bolus.\n");

	for(i=0; i<nelem(cmdtab); i++){
		fprint(2, "  pcall %s\n", cmdtab[i].name);
		fprint(2, "	%s\n", cmdtab[i].description);
	}

	exit(2);
}

void
chkadd(char *v, char *c)
{
	uint8 data[256];
	uint ndata = sizeof data;
	uint8 chk[4];
	uint nchk = sizeof chk;
	uint32 chk32;

	if(unhexlify(v, data, &ndata) < 0)
		panic("unhexlify data");

	if(strlen(c) != 8)
		panic("invalid checksum");

	if(unhexlify(c, chk, &nchk) < 0)
		panic("unhexlify chk");

	chk32 = U32GETLE(chk);

	if(pumpaddchk(data, ndata, chk32) < 0)
		panic("pumpaddchk: %r");

	fprint(2, "added checksum %8ux  (n=%ud)\n", chk32, nchk);
}

static void
chklearn()
{
	Rcall tx, rx;
	uint32 chk32;

	for(;;){
		tx.type = Trx;
		tx.timeoutms = 0;
		if(rcall(&tx, &rx) < 0)
			panic("rcall: %r");

		chk32 = U32GETLE(rx.pkt+4);

		if(pumpaddchk(rx.pkt, 4, chk32) < 0)
			panic("pumpaddchk: %r");

		fprint(2, "learned chk(%2x%2x%2x%2x) = %8ux\n",
			rx.pkt[0], rx.pkt[1], rx.pkt[2], rx.pkt[3], chk32);
	}
}


static void
ping()
{
	Rcall tx, rx;

	tx.type = Tping;
	if(rcall(&tx, &rx) < 0)
		panic("rcall: %r");

	print("%R\n", &rx);
}

static void
reset()
{
	Rcall tx, rx;

	tx.type = Treset;
	tx.timeoutms = 0;
	if(rcall(&tx, &rx) < 0)
		panic("rcall: %r");
	/*TODO: we don't expect this to return.*/
}

void
call(int type)
{
	Pcall tx, rx;

	tx.type = type;
	if(pcall(&tx, &rx) < 0)
		panic("pcall: %r");

	print("%P\n", &rx);
}
