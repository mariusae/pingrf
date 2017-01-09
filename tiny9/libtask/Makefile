TCPLIBS=
OUT=_build
OUT6M=_build6m

LIB=libtask.a

ASM=asm.o
PORTOBJECTS=\
	$(ASM)\
	channel.o\
	context.o\
	print.o\
	qlock.o\
	rendez.o\
	task.o

OBJECTS=\
	$(PORTOBJECTS)\
	fd.o\
	net.o

OFILES=$(addprefix $(OUT)/, $(OBJECTS))
OFILES6M=$(addprefix $(OUT6M)/, $(PORTOBJECTS))

all: $(OUT)/$(LIB) primes tcpproxy testdelay

CC=gcc
AR=ar
CFLAGS=-Wall -c -I. -ggdb
AS=$(CC) -c

CC6M=arm-none-eabi-gcc
AS6M=$(CC6M) -c
AR6M=arm-none-eabi-ar
CFLAGS6M=-Wall -c -I. \
	-mcpu=cortex-m0 -mthumb -mabi=aapcs \
	-mfloat-abi=soft -ffunction-sections -fdata-sections \
	-fno-strict-aliasing -fno-builtin --short-enums
ifdef DEBUG
CFLAGS6M+=-ggdb
endif

$(OFILES): taskimpl.h task.h 386-ucontext.h power-ucontext.h arm-ucontext.h

$(OUT):
	mkdir -p $(OUT)

$(OUT6M):
	mkdir -p $(OUT6M)

$(OUT)/%.o: $(OUT) %.s
	$(AS) $*.s -o$@

$(OUT)/%.o: $(OUT) %.c
	$(CC) $(CFLAGS) $*.c -o$@

$(OUT)/$(LIB): $(OUT) $(OFILES)
	ar rvc $@ $(OFILES)

$(OUT6M)/%.o: $(OUT6M) %.s
	$(AS6M) -x assembler-with-cpp  $*.s -o$@

$(OUT6M)/%.o: $(OUT6M) %.c
	$(CC6M) $(CFLAGS6M) $*.c -o$@

$(OUT6M)/$(LIB): $(OUT6M) $(OFILES6M)
	ar rvc $@ $(OFILES6M)

primes: primes.o $(OUT)/$(LIB)
	$(CC) -o primes primes.o $(OUT)/$(LIB)

tcpproxy: tcpproxy.o $(OUT)/$(LIB)
	$(CC) -o tcpproxy tcpproxy.o $(OUT)/$(LIB) $(TCPLIBS)

httpload: httpload.o $(OUT)/$(LIB)
	$(CC) -o httpload httpload.o $(OUT)/$(LIB)

testdelay: testdelay.o $(OUT)/$(LIB)
	$(CC) -o testdelay testdelay.o $(OUT)/$(LIB)

testdelay1: testdelay1.o $(LIB)
	$(CC) -o testdelay1 testdelay1.o $(OUT)/$(LIB)

clean:
	rm -rf *.o primes tcpproxy testdelay testdelay1 httpload $(OUT) $(OUT6M)

install: $(LIB)
	cp $(OUT)/$(LIB) /usr/local/lib
	cp task.h /usr/local/include

