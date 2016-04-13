PINGRF := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

vpath %.c $(PINGRF)
vpath %.h $(PINGRF)

PINGRFOBJECTS=\
	$(TARG)/lib/table.o

LIBPUMPOBJECTS=\
	libpump/conv.o\
	libpump/crc32.o\
	libpump/pcall.o\
	libpump/pump.o\
	libpump/pumpchk.o 

ifndef HASLIBTASK
LIBPUMPOBJECTS+=\
	libpump/task.o
endif

LIBRADIOOBJECTS=\
	libradio/conv.o\
	libradio/fmt.o

LIBHEXOBJECTS=\
	lib/intel_hex.o

CFLAGS+=\
	-I$(PINGRF)/include
