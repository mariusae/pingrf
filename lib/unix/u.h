#include <stdarg.h>
#include <string.h>
#include <stdint.h>

#define	USED(x)	if(x){}else{}

#if __GNUC__ >= 3
#	undef USED
#	define USED(x) ((void)(x))
#endif

typedef	unsigned short	ushort;
typedef	unsigned char	uchar;
typedef 	unsigned long	ulong;
typedef 	unsigned int	uint;
typedef	signed char	schar;
typedef	long long	vlong;
typedef	unsigned long long uvlong;
typedef	unsigned long	uintptr;
typedef	unsigned long	usize;

typedef 	int8_t int8;
typedef 	uint8_t uint8;
typedef 	int16_t int16;
typedef 	uint16_t uint16;
typedef 	unsigned int uint24;
typedef 	uint32_t uint32;
typedef 	uint64_t uint64;
typedef 	unsigned int uint;
typedef 	int32_t int32;
typedef 	int64_t int64;

#define PACKEDSTRUCT __attribute__((packed))
#define REENTRANT
#define XDATA 
