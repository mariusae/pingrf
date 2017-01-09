#ifndef nelem
#define	nelem(x)	(sizeof(x)/sizeof((x)[0]))
#endif
#ifndef offsetof
#define	offsetof(s, m)	(ulong)(&(((s*)0)->m))
#endif

#define	nrow2		nelem
#define	ncol2(x)		nelem(x[0])
#define	elemsz2(x)	sizeof(x[0][0])

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

#define	BIT(x)	(1<<(x))
