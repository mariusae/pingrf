/*
 * Argument parser from Plan 9, lifted from u9fs.
 */
/*
The authors of this software are Bob Flandrena, Ken Thompson,
Rob Pike, and Russ Cox.

		Copyright (c) 1992-2002 by Lucent Technologies.

Permission to use, copy, modify, and distribute this software for any
purpose without fee is hereby granted, provided that this entire notice
is included in all copies of any software which is or includes a copy
or modification of this software and in all copies of the supporting
documentation for such software.

THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
WARRANTY.  IN PARTICULAR, NEITHER THE AUTHORS NOR LUCENT TECHNOLOGIES MAKE ANY
REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
*/
extern char	*argv0;
#define	ARGBEGIN	if(argv0==0) argv0=*argv; for(argv++,argc--;\
			    argv[0] && argv[0][0]=='-' && argv[0][1];\
			    argc--, argv++) {\
				char *_args, *_argt;\
				char _argc;\
				_args = &argv[0][1];\
				if(_args[0]=='-' && _args[1]==0){\
					argc--; argv++; break;\
				}\
				_argc = 0;\
				while(*_args)\
				switch(*_args++)
#define	ARGEND		SET(_argt);USED(_argt);USED(_argc);USED(_args);}USED(argv);USED(argc);
#define	ARGF()		(_argt=_args, _args="",\
				(*_argt? _argt: argv[1]? (argc--, *++argv): 0))
#define	EARGF(x)	(_argt=_args, _args="",\
				(*_argt? _argt: argv[1]? (argc--, *++argv): ((x), abort(), (char*)0)))

#define	ARGC()		_argc

#define USED(x) ((void)(x))
#define SET(x) ((x)=0)
