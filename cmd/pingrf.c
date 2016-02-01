
#include "impl.h"

char *argv0;

/* char *ttypath = "/dev/tty.usbserial"; */
char *ttypath = "/dev/cu.usbserial-AH03IMYO";
speed_t ttybaud = 19200;
int tty;
int debug = 0;

void usage();
void opentty();

int 	rcallwrite(void *p, uint n);
void	chkadd(char *v, char *chk);
void	call(int type);
int	rcallimpl(Rcall *tx, Rcall *rx);

static void chklearn();
static void	ping();

extern int (*_rcallimpl)(Rcall*, Rcall*);

uint32	crc32(void*, uint);

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

int
main(int argc, char **argv)
{
	int i;
	uint8 buf[256];
	uint n;
	float insulin, hours;
	uint dox = 0;
	
	_rcallimpl = &rcallimpl;

	fmtinstall('P', Pcallfmt);
	fmtinstall('R', rcallfmt);

	ARGBEGIN{
	case 't':
		ttypath = EARGF(usage()); 
		break;
	case 'b':
		ttybaud = atoi(EARGF(usage()));
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

	opentty();
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
	}else if(strcmp(argv[0], "stat") == 0){
		Pstat ps;
		
		if(pstat(&ps) < 0)
			panic("pstat: %r");
		
		print("%4d/%2d/%2d %2d:%2d\n", 
			ps.year, ps.month, ps.day, ps.hour, ps.minute);
		print("	Insulin remaining: %d\n", ps.insulinleft);
		print("	IOB: %d.%2d\n", ps.iob/1000, ps.iob%1000);
		print("	Basal: %d.%3d\n", ps.basal/1000, ps.basal%1000);
		print("	Temp: %d %d/%d\n", ps.temp, ps.temptime, ps.temptotal);
		print("	Last bolus: %d.%2d\n", ps.lastbolus/1000, ps.lastbolus%1000);
		if(ps.comboactive){
			print("	Combo active %2d:%2d-%2d:%2d %d.%3d/%d.%3d\n", 
				ps.combostarthour, ps.combostartminute,
				ps.comboendhour, ps.comboendminute,
				ps.combodelivered/1000, ps.combodelivered%1000,
				ps.combototal/1000, ps.combototal%1000);
		}else{
			print("	No combo active\n");
		}
		if(ps.haswarning)
			print("	WARNING ACTIVE\n");
	}else if(strcmp(argv[0], "clearwarning") == 0){
		if(pclearwarning() < 0)
			panic("pclearwarning: %r");
	}else if(strcmp(argv[0], "combo") == 0){
		if(argc != 3)
			usage();

		insulin = strtof(argv[1], nil);
		hours = strtof(argv[2], nil);
		
		if(pcombo((uint)(insulin*1000.0), (uint)(hours*60)) < 0)
			panic("pcombo: %r");

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

	return 0;
}

void
usage()
{
	int i;

	fprint(2, "usage: pingrf [-t tty] [-b baud] [-dh] command [options]\n");
	fprint(2, "Where command is one of:\n");
	fprint(2, "  chkadd data checksum\n");
	fprint(2, "	Add known data-checksum pair. Arguments are hexdecimal strings.\n");
	fprint(2, "  combo insulin hours\n");
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
opentty()
{
	struct termios ts;
	int opts;

	// We open the tty in nonblocking mode,
	// but then later re-enable it. This seems 
	// to be the only way to actually open the 
	// tty on OSX.
	tty = open(ttypath, O_RDWR|O_NOCTTY|O_NDELAY);
	if(tty < 0)
		panic("%s: %r", ttypath);

	if(fcntl(tty, F_SETFL, 0) < 0)
		panic("fcntl: %r");

	if(tcgetattr(tty, &ts) < 0)
		panic("tcgetattr: %r");

	cfsetspeed(&ts, ttybaud);
	cfmakeraw(&ts);

	ts.c_cc[VMIN]  = 1;
	ts.c_cc[VTIME] = 0;

	ts.c_cflag |= CS8|CLOCAL|CREAD|B19200;
	ts.c_iflag &= ~(BRKINT|ICRNL|INPCK|ISTRIP|IXON);
	ts.c_oflag &= ~OPOST;
	ts.c_cflag &= ~(CSIZE|PARENB);
	ts.c_lflag &= ~(ECHO|ICANON|IEXTEN|ISIG);

/*
	attr.Iflag &^= syscall.BRKINT | syscall.ICRNL | syscall.INPCK | syscall.ISTRIP | syscall.IXON
	attr.Oflag &^= syscall.OPOST
	attr.Cflag &^= syscall.CSIZE | syscall.PARENB
	attr.Cflag |= syscall.CS8
	attr.Lflag &^= syscall.ECHO | syscall.ICANON | syscall.IEXTEN | syscall.ISIG
	attr.Cc[syscall.VMIN] = 1
	attr.Cc[syscall.VTIME] = 0
*/

	ts.c_cc[VMIN]  = 1;
	ts.c_cc[VTIME] = 0;

	if(tcsetattr(tty, TCSAFLUSH, &ts) < 0)
		panic("tcsetattr: %r");
}

int
rcallimpl(Rcall *tx, Rcall *rx)
{
	uint8 buf[RCALLMAX];

	dprint("tx %R\n", tx);
	dprinthex(tx->pkt, Npkt);

	if(convR2M(tx, buf, sizeof buf) == 0)
		return -1;

	if(rcallwrite(buf, buf[0]) < 0) {
		werrstr("Rcall write: %r");
		return -1;
	}

	if(readn(tty, buf, 1) < 0){
		werrstr("Rcall read size: %r");
		return -1;
	}

	if(buf[0] > RCALLMAX){
		werrstr("invalid rcall: too big");
		return -1;
	}

	if(readn(tty, &buf[1], buf[0]-1) < 0){
		werrstr("Rcall read payload: %r");
		return -1;
	}

	if(convM2R(buf, sizeof buf, rx) == 0){
		werrstr("Invalid Rcall R-message");
		return -1;
	}

	if(rx->type != tx->type+1 && rx->type != Rerr){
		werrstr("bad rx Rcall");
		return -1;
	}

	dprint("rx %R\n", rx);
	dprinthex(rx->pkt, Npkt);
	
	return 0;
}

int 
rcallwrite(void *p, uint n)
{
	int nw, tmp;

	if((nw = write(tty, p, n)) < 0){
		return -1;
	}else if(nw != n){
		errno = EIO;
		return -1;
	}
	
	return 0;
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

void
call(int type)
{
	Pcall tx, rx;

	tx.type = type;
	if(pcall(&tx, &rx) < 0)
		panic("pcall: %r");

	print("%P\n", &rx);
}

int
radiorpc(uint8 *buf)
{
	werrstr("not implemented");
	return -1;
}

int
radioreset()
{
	static uint8 ff = 0xff;
	
	if(write(tty, &ff, 1) < 0)
		return -1;
	
	usleep(250*1000);

	return 0;
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