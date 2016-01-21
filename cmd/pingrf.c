
#include "impl.h"

char *argv0;

/* char *ttypath = "/dev/tty.usbserial"; */
char *ttypath = "/dev/cu.usbserial-AH03IMYO";
speed_t ttybaud = 57600;
int tty;
int debug = 0;

void usage();
void opentty();

int 	rcallwrite(void *p, uint n);
void	chkadd(char *v, char *chk);
void	call(int type);
int	rcallimpl(Rcall *tx, Rcall *rx);

extern int (*_rcallimpl)(Rcall*, Rcall*);

uint32	crc32(void*, uint);

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
	{"cancelcombo", Tcancelcombo, "Cancel an existing combo bolus"},
	{"combo", Tcombo, "Issue a combo bolus"}
};

int
main(int argc, char **argv)
{
	int i;
	uint8 buf[256];
	uint n;
	
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
	case 'h':
		usage();
	}ARGEND
	
	if(argc == 0)
		usage();

	opentty();

	if(strcmp(argv[0], "chkadd") == 0){
		if(argc < 3)
			usage();

		chkadd(argv[1], argv[2]);
	}else if(strcmp(argv[0], "crc32") == 0){
		if(argc != 2)
			usage();
		
		n = sizeof buf;

		if(unhexlify(argv[1], buf, &n) < 0)
			panic("unhexlify: %r");

		print("crc32(%s) = %8ux\n", argv[1], crc32(buf, n));
	}else{
		int type = -1;

		for(i=0; i<nelem(cmdtab); i++)
			if(strcmp(argv[0], cmdtab[i].name) == 0){
				type = cmdtab[i].type;
				break;
			}

		if(type < 0)
			usage();
		
		call(type);
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
	fprint(2, "	Add known data-checksum pair. Arguments are hexdecimal strings.");

	for(i=0; i<nelem(cmdtab); i++){
		fprint(2, "  %s\n", cmdtab[i].name);
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

	ts.c_cflag |= CS8|CLOCAL|CREAD|B57600;
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

	if(rcallwrite(buf, buf[0]) < 0)
		return -1;

	if(readn(tty, buf, 1) < 0)
		return -1;

	if(buf[0] > RCALLMAX)
		return -1;

	if(readn(tty, &buf[1], buf[0]-1) < 0)
		return -1;

	if(convM2R(buf, sizeof buf, rx) == 0)
		return -1;

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