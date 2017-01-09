#include <utf.h>
#include <fmt.h>
#include <umacro.h>

/* This turns on plan9-like print behavior. */
#define	PLAN9PORT 1
#define	TINY9	1

#define	ERRMAX	128	/* max length of error string */

void	werrstr(char*, ...);
int	errstr(char*, uint);
void	rerrstr(char*, uint);
void panic(char *fmt, ...);

void	printhex(uint8*, uint);


extern int debug;
#define dprint(...)	if(debug)fprint(2, __VA_ARGS__)
#define dprinthex(p, n)	if(debug)printhex(p, n)

typedef
struct Tm
{
	int	sec;
	int	min;
	int	hour;
	int	mday;
	int	mon;
	int	year;
	int	wday;
	int	yday;
	char	zone[4];
	int	tzoff;
} Tm;

#define	gmtime		p9gmtime
#define	localtime	p9localtime
#define	asctime		p9asctime
#define	ctime		p9ctime
#define	cputime		p9cputime
#define	times		p9times
#define	tm2sec		p9tm2sec
#define	nsec		p9nsec

long	now();

Tm*	p9gmtime(long);
Tm*	p9localtime(long);
char*	p9asctime(Tm*);
char*	p9ctime(long);
long	p9tm2sec(Tm*);

char*	strecpy(char *dst, char *edst, char *src);

#define	OREAD	0	/* open for read */
#define	OWRITE	1	/* write */
#define	ORDWR	2	/* read and write */
#define	OEXEC	3	/* execute, == read but check execute permission */
#define	OTRUNC	16	/* or'ed in (except for exec), truncate file first */
#define	ORCLOSE	64	/* or'ed in, remove on close */
#define	ODIRECT	128	/* or'ed in, direct access */
#define	OEXCL	0x1000	/* or'ed in, exclusive use (create only) */
#define	OAPPEND	0x4000	/* or'ed in, append only */

#define DMDIR		0x80000000	/* mode bit for directories */
#define DMAPPEND	0x40000000	/* mode bit for append only files */
#define DMEXCL		0x20000000	/* mode bit for exclusive use files */
#define DMMOUNT		0x10000000	/* mode bit for mounted channel */
#define DMAUTH		0x08000000	/* mode bit for authentication file */
#define DMTMP		0x04000000	/* mode bit for non-backed-up file */
#define DMSYMLINK	0x02000000	/* mode bit for symbolic link (Unix, 9P2000.u) */
#define DMDEVICE	0x00800000	/* mode bit for device file (Unix, 9P2000.u) */
#define DMNAMEDPIPE	0x00200000	/* mode bit for named pipe (Unix, 9P2000.u) */
#define DMSOCKET	0x00100000	/* mode bit for socket (Unix, 9P2000.u) */
#define DMSETUID	0x00080000	/* mode bit for setuid (Unix, 9P2000.u) */
#define DMSETGID	0x00040000	/* mode bit for setgid (Unix, 9P2000.u) */

#define DMREAD		0x4		/* mode bit for read permission */
#define DMWRITE		0x2		/* mode bit for write permission */
#define DMEXEC		0x1		/* mode bit for execute permission */
