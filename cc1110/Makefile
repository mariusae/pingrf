
S=$(GOPATH)/src

OBJ = pkg/$(PROFILE)

CODE_LOC := 0x0000
CC = sdcc
CFLAGS = --model-large --opt-code-size --std-c99
LDFLAGS_FLASH = \
	 --std-c99  \
	--out-fmt-ihx \
	--code-loc ${CODE_LOC} --code-size 0x8000 \
	--xram-loc 0xf000  \
	--iram-size 0x100 \
	--xram-size 0x0f00

CFLAGS += -I$(S)/tinyap.org/tiny9/8051/include
CFLAGS += -I$(S)/tinyap.org/tiny9/include
CFLAGS += -I../lib
CFLAGS += -I../include
CFLAGS += -DCC1110

SRC=\
	main.c\
	rf.c\
	timer.c\
	call.c\
	callrx.c\
	calltx.c\
	calltxrx.c\
	callping.c\
	cobs.c\
	u.c\
	conv.c

PROFILE = CC1110DK
PROFILE<$(PROFILE)> = 1

ifdef PROFILE<CC1110DK>
SRC += uartsrv.c
endif

ifdef PROFILE<ERF>
SRC += uartsrv.c
endif

ifdef DEBUG
#CFLAGS += --debug
CFLAGS += -DDEBUG
SRC += cc1110print.c
#SRC += print.c
#SRC += radiofmt.c
else
SRC += noprint.c
endif

CFLAGS += -DPROFILE=\"$(PROFILE).h\"

ADB=$(addprefix $(OBJ)/, $(SRC:.c=.adb))
ASM=$(addprefix $(OBJ)/, $(SRC:.c=.asm))
LNK=$(addprefix $(OBJ)/, $(SRC:.c=.lnk))
LST=$(addprefix $(OBJ)/, $(SRC:.c=.lst))
REL=$(addprefix $(OBJ)/, $(SRC:.c=.rel))
RST=$(addprefix $(OBJ)/, $(SRC:.c=.rst))
SYM=$(addprefix $(OBJ)/, $(SRC:.c=.sym))
PROGS=ping.hex
PCDB=$(addprefix $(OBJ)/, $(PROGS:.hex=.cdb))
PLNK=$(addprefix $(OBJ)/, $(PROGS:.hex=.lnk))
PMAP=$(addprefix $(OBJ)/, $(PROGS:.hex=.map))
PMEM=$(addprefix $(OBJ)/, $(PROGS:.hex=.mem))
PAOM=$(addprefix $(OBJ)/, $(PROGS:.hex=))

vpath %.c .
vpath %.c ../lib
vpath %.c ../libradio

all: $(OBJ)/ping.hex

$(OBJ):
	mkdir -p $@

$(OBJ)/%.rel : %.c
	$(CC) -c $(CFLAGS) -o$@ $<

$(OBJ)/ping.hex: $(OBJ) $(REL) Makefile a.h
	$(CC) $(LDFLAGS_FLASH) $(CFLAGS) -o $@ $(REL)

flash: $(OBJ)/ping.hex
	cc-tool -v -e -w $<

clean:
	rm -rf $(OBJ)
