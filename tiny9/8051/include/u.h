#include <stdarg.h>
#include <string.h>


typedef	unsigned short	ushort;
typedef	unsigned char	uchar;
typedef	unsigned long	ulong;
typedef	unsigned int	uint;
typedef   signed char	schar;

/* Technically unavailable. We fudge it. */
/*typedef	long long	vlong;
typedef	unsigned long long uvlong;*/
typedef	long vlong;
typedef	unsigned long uvlong;

typedef unsigned long	uintptr;
typedef unsigned long	usize;

typedef unsigned char	uint8;
typedef char	int8;
typedef unsigned int	uint16;
typedef int	int16;
typedef unsigned long	uint32;
typedef long	int32;

#define PACKEDSTRUCT
#define REENTRANT __reentrant
#define XDATA __xdata

#define	USED(x)	if(x){}else{}

#define 	nil	((void*)0)
