#include <u.h>
#include <libc.h>
#include <task.h>
#include <rcall.h>
#include <errno.h>
#include <termios.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <intel_hex.h>

static int	roundtrip(uint8*);
static int	fdreadn(int, void*, int),
		hexreadn(int, void*, int),
		hexwrite(int, void*, int);
static int	ttysetattr(int, int, int);
static int	ttyreset(int),
		ttyopen(char*),
		pireset(int),
		piopen(char*),
		piread(int, void*, int),
		piwrite(int, void*, int),
		usbreset(int),
		usbopen(char*),
		usbread(int, void*, int),
		usbwrite(int, void*, int);

int		rpigpioradioreset();

typedef struct
{
	char *name;
	int (*reset)(int);
	int (*open)(char*);
	int (*read)(int, void*, int);
	int (*write)(int, void*, int);
} Radio;

Radio radios[] = {
	{ "tty", ttyreset, ttyopen, fdreadn, fdwrite },
	{ "piuart", pireset, ttyopen, fdreadn, fdwrite },
	{ "usb", usbreset, usbopen, hexreadn, hexwrite },
};

static Radio *radio = nil;
static int radiofd;
static char *radiopath;
static char _radiopath[64];

int
radioinit(char *s)
{
	int i;
	char *path = nil;

	for(i=0; i<nelem(radios); i++)
		if(strstr(s, radios[i].name) == s)
			break;

	if(i == nelem(radios)){
		werrstr("no radio config found for \"%s\"", s);
		return -1;
	}

	radio = &radios[i];

	if(strlen(s) > strlen(radios[i].name)){
		if(s[strlen(radios[i].name)] != ':'){
			werrstr("invalid radio name \"%s\"", s);
			return -1;
		}

		strecpy(_radiopath, _radiopath+nelem(_radiopath)-1, 
			s+strlen(radios[i].name)+1);

		radiopath = _radiopath;
	}

	if((radiofd = radio->open(radiopath)) < 0)
		return -1;

	return 0;
}

int
rcall(Rcall *tx, Rcall *rx)
{
	static uint8 buf[RCALLMAX];
	int n;
	
	dprint("tx %R\n", tx);
	if(tx->pkt[3]){
		dprinthex(tx->pkt, 8+tx->pkt[3]+4);
	}else{
		dprinthex(tx->pkt, 8);
	}

	if(tx->type == Treset){
		rx->type = Rreset;
		return radioreset();
	}

	if(convR2M(tx, buf, sizeof buf) == 0)
		return -1;

	if(roundtrip(buf) < 0)
		return -1;

	if(convM2R(buf, sizeof buf, rx) == 0){
		werrstr("Invalid Rcall R-message");
		return -1;
	}

	if(rx->type != tx->type+1 && rx->type != Rerr){
		werrstr("bad rx Rcall");
		return -1;
	}

	dprint("rx %R\n", rx);
	dprinthex(rx->pkt, 8+rx->pkt[3]);
	
	return 0;
}

int
radioreset()
{
	/* This is a little hacky. 
		Maybe it should be pushed down. */
	close(radiofd);
	
	if((radiofd = radio->open(radiopath)) < 0)
		return -1;
	
	return radio->reset(radiofd);
}

static int
roundtrip(uint8 *buf)
{
	int i, n, nw;
	
	if((nw=radio->write(radiofd, buf, buf[0])) < 0)
		return -1;
	else if(nw < buf[0]){
		werrstr("short write");
		return -1;
	}
	
	if(radio->read(radiofd, buf, 1) != 1){
		werrstr("reading size: %r");
		return -1;
	}
	
	if(buf[0] > RCALLMAX){
		werrstr("invalid rcall: too big");
		return -1;
	}
	
	if(radio->read(radiofd, buf+1, buf[0]-1) != buf[0]-1){
		werrstr("read payload: %r");
		return -1;
	}

	return 0;
}


static int
ttyreset(int fd)
{
	static uint8 ff = 0xff;

	if(fdwrite(fd, &ff, 1) < 0)
		return -1;

	/* This is fairly conservative. */
	taskdelay(250);
	return 0;
}

static int
ttyopen(char *path)
{
	int fd;
	struct utsname name;

	if(path != nil){
	}else if(uname(&name) < 0){
		werrstr("unknown system, cannot determine radio settings");
		return -1;
	}else if(strcmp(name.sysname, "Darwin") == 0){
		path = "/dev/cu.usbserial-AH03IMYO";
	}else if(strcmp(name.sysname, "Linux") == 0){
		path = "/dev/ttyAMA0";
	}else{
		werrstr("no default tty path found for system %s", name.sysname);
		return -1;
	}

	fd = open(path, O_RDWR|O_NOCTTY|O_NONBLOCK);
	if(fd < 0){
		werrstr("open %s: %r", path);
		return -1;
	}

	if(ttysetattr(fd, B19200, 0) < 0){
		werrstr("%s: %r", path);
		return -1;
	}

	fdnoblock(fd);

	return fd;
}

static int
pireset(int fd)
{
	return rpigpioradioreset();
}

static int
piopen(char *path)
{
	return -1;
}

static int
piread(int fd, void *p, int n)
{
	return -1;
}

static int
piwrite(int fd, void *p, int n)
{
	return -1;
}

static int
usbreset(int fd)
{
	return -1;
}

static int
usbopen(char *path)
{
	int fd;
	struct utsname name;

	if(path != nil){
	}else if(uname(&name) < 0){
		werrstr("unknown system, cannot determine radio settings");
		return -1;
	}else if(strcmp(name.sysname, "Darwin") == 0){
		path = "/dev/cu.usbmodem000001";
	}else if(strcmp(name.sysname, "Linux") == 0){
		path = "/dev/serial/by-id/usb-Nightscout_subg_rfspy_000002-if00";
	}else{
		werrstr("no default tty path found for system %s", name.sysname);
		return -1;
	}

	fd = open(path, O_RDWR|O_NOCTTY|O_NDELAY);
	if(fd < 0){
		werrstr("open %s: %r", path);
		return -1;
	}

	if(ttysetattr(fd, B19200, 0) < 0){
		werrstr("%s: %r", path);
		return -1;
	}

	fdnoblock(fd);

	return fd;
}

static int
usbread(int fd, void *p, int n)
{
	return -1;
}

static int
usbwrite(int fd, void *p, int n)
{
	return -1;
}

static int
fdreadn(int fd, void *p, int n)
{
	int m, q = n;
	uint8 *buf = p;

	while(n>0){
		if((m = fdread(fd, buf, n)) < 0)
			return m;
		else if(m == 0)
			return q-n;
		n -= m;
		buf += m;
	}

	return q;
}

static int
hexwrite(int fd, void *p, int n)
{
	char hex[RCALLMAX*2];
	int i, nw;
	char *cp = (char*)p;
	
	for(i=0; i<n; i++)
		to_hex8_ascii(&hex[i*2], cp[i]);
		
	nw = fdwrite(fd, hex, n*2);
	if(nw < 0)
		return -1;

	return nw/2;
}

static int
hexreadn(int fd, void *p, int n)
{
	char hex[RCALLMAX*2];
	int nr, i;
	char *cp = p;
	
	nr = fdreadn(fd, hex, n*2);
	if(nr < 0)
		return -1;

	for(i=0; i < nr/2; i++)
		cp[i] = hex8(hex + i*2);

	return nr/2;
}

static int
ttysetattr(int fd, int speed, int parity)
{
	struct termios tty;
	
	memset(&tty, 0, sizeof tty);
	
	if(tcgetattr (fd, &tty) != 0){
		werrstr("tcgetattr: %r");
		return -1;
	}

	cfsetospeed(&tty, speed);
	cfsetispeed(&tty, speed);

	tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8 | speed;     /* 8-bit chars */
	/* disable IGNBRK for mismatched speed tests; 
		otherwise receive break as \000 chars */
	tty.c_iflag &= ~IGNBRK;         /*disable break processing */
	tty.c_lflag = 0;               /* no signaling chars, no echo, no canonical processing */
	tty.c_oflag = 0;                /* no remapping, no delays */
	tty.c_cc[VMIN]  = 0;          /* read doesn't block */
	tty.c_cc[VTIME] = 5;            /* 0.5 seconds read timeout */

	tty.c_iflag &= ~(IXON | IXOFF | IXANY); /* shut off xon/xoff ctrl */

	tty.c_cflag |= (CLOCAL | CREAD); /* ignore modem controls, enable reading */
	tty.c_cflag &= ~(PARENB | PARODD);      /* shut off parity */
	tty.c_cflag |= parity;
	tty.c_cflag &= ~CSTOPB;
	tty.c_cflag &= ~CRTSCTS;

	tty.c_cc[VMIN] = 1;
	tty.c_cc[VTIME] = 0;

	if(tcsetattr(fd, TCSANOW, &tty) != 0){
		werrstr("tcsetattr: %r");
		return -1;
	}
	
	return 0;
}
