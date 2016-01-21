#include <stdarg.h>

#define 	nil	((void*)0)
#define	nelem(x)	(sizeof(x)/sizeof((x)[0]))

/* From $PLAN9/src/cmd/fossil/pack.c */
#define	U8GET(p)	((p)[0])
#define	U16GET(p)	(((p)[0]<<8)|(p)[1])
#define	U24GET(p)	(((p)[0]<<16)|((p)[1]<<8)|(p)[2])
#define	U32GET(p)	(((p)[0]<<24)|((p)[1]<<16)|((p)[2]<<8)|(p)[3])
#define	U48GET(p)	(((uvlong)U16GET(p)<<32)|(uvlong)U32GET((p)+2))
#define	U64GET(p)	(((uvlong)U32GET(p)<<32)|(uvlong)U32GET((p)+4))

#define	U8PUT(p,v)	(p)[0]=(v)
#define	U16PUT(p,v)	(p)[0]=(v)>>8;(p)[1]=(v)
#define	U24PUT(p,v)	(p)[0]=((v)>>16)&0xFF;(p)[1]=((v)>>8)&0xFF;(p)[2]=(v)&0xFF
#define	U32PUT(p,v)	(p)[0]=((v)>>24)&0xFF;(p)[1]=((v)>>16)&0xFF;(p)[2]=((v)>>8)&0xFF;(p)[3]=(v)&0xFF
#define	U48PUT(p,v,t32)	t32=(v)>>32;U16PUT(p,t32);t32=(v);U32PUT((p)+2,t32)
#define	U64PUT(p,v,t32)	t32=(v)>>32;U32PUT(p,t32);t32=(v);U32PUT((p)+4,t32)

#define	U8GETLE(p)	((p)[0])
#define	U16GETLE(p)	(((p)[1]<<8)|(p)[0])
#define	U24GETLE(p)	(((p)[2]<<16)|((p)[1]<<8)|(p)[0])
#define	U32GETLE(p)	(((p)[3]<<24)|((p)[2]<<16)|((p)[1]<<8)|(p)[0])

#define	U8PUTLE(p,v)	(p)[0]=(v)
#define	U16PUTLE(p,v)	(p)[1]=(v)>>8;(p)[0]=(v)
#define	U24PUTLE(p,v)	(p)[2]=((v)>>16)&0xFF;(p)[1]=((v)>>8)&0xFF;(p)[0]=(v)&0xFF
#define	U32PUTLE(p,v)	(p)[3]=((v)>>24)&0xFF;(p)[2]=((v)>>16)&0xFF;(p)[1]=((v)>>8)&0xFF;(p)[0]=(v)&0xFF

/*
#define	U48PUT(p,v,t32)	t32=(v)>>32;U16PUT(p,t32);t32=(v);U32PUT((p)+2,t32)
#define	U64PUT(p,v,t32)	t32=(v)>>32;U32PUT(p,t32);t32=(v);U32PUT((p)+4,t32)
*/

#define	BIT(x)	(1<<(x))

#define	ERRMAX	128	/* max length of error string */

// We define a wrapper struct for va_list so that we can pass
// it around portably as a pointer.
typedef struct 
{
	char *dst, *edst;
	int size;
	va_list arg;
} Fmt;

typedef void Printer(Fmt*);

int		print(char*, ...);
int		fprint(int, char*, ...);
char*	snprint(char*, uint, char*, ...);
char*	seprint(char*, char*, char*, ...);
int		vprint(char*, va_list);
int		vfprint(int, char*, va_list);
char*	vsnprint(char*, uint, char*, va_list);
char*	vseprint(char*, char*, char*, va_list);
char*	strecpy(char*, char*, char*);
char*	printstr(char *dst, char *edst, char *s, int size);
void		fmtinstall(char, Printer*);
void		fmtprint(Fmt *f, char *fmt, ...);

void	werrstr(char*, ...);
int	errstr(char*, uint);
void	rerrstr(char*, uint);

void panic(char *fmt, ...);
void printhex(uint8 *buf, uint n);

#ifdef DEBUG
#define dprint(...)	print(__VA_ARGS__)
#define dprinthex(p, n)	printhex(p, n)
#else
#define dprint(...)
#define dprinthex(p, n)
#endif
