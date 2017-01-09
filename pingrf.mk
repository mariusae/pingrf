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

RADIODRIVEROBJECTS=\
	lib/intel_hex.o\
	libradio/driver.o\
	libradio/rpigpio.o

CFLAGS+=\
	-I$(PINGRF)/include
