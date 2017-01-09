typedef struct sigaltstack {
	void *ss_sp;
	int ss_flags;
	size_t ss_size;
} stack_t;

#define NGREG 15 

typedef int greg_t;
typedef greg_t gregset_t[NGREG];

typedef struct {
/*
	unsigned regmask;
	unsigned status;
*/
	gregset_t gregs;
	greg_t pc;
/*
	fpregset_t fpregs;
	unsigned fp_owned;
	unsigned fpc_csr;
	unsigned fpc_eir;
	unsigned used_math;
	unsigned dsp;
	greg_t mdhi;
	greg_t mdlo;
	unsigned long hi1;
	unsigned long lo1;
	unsigned long hi2;
	unsigned long lo2;
	unsigned long hi3;
	unsigned long lo3;
*/
} mcontext_t;


typedef struct ucontext {
	mcontext_t uc_mcontext;
	stack_t uc_stack;
} ucontext_t;

