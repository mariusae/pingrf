ROOT := ../../

S=$(GOPATH)/src

OBJ = pkg

CODE_LOC :=
CC = sdcc
CFLAGS = --model-large --opt-code-size --std-c99
LDFLAGS_FLASH = \
	 --std-c99  \
	--out-fmt-ihx \
	--code-size 0x8000 \
	--xram-loc 0xf000  \
	--iram-size 0x100 \
	--xram-size 0x0f00

CFLAGS += -I$(ROOT)/tiny9/8051/include
CFLAGS += -I$(ROOT)/tiny9/include
CFLAGS += -I../lib
CFLAGS += -I../include
CFLAGS += -I.

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
	libradio/conv.c

REL=$(SRC:.c=.rel)

vpath %.c .
vpath %.c ..

all:	$(OBJ)/cc1110dk.hex\
	$(OBJ)/cc1110dk+debug.hex\
	$(OBJ)/cc1111.hex\
	$(OBJ)/cc1111+debug.hex\
	$(OBJ)/cc1111+ccloader.hex\
	$(OBJ)/erf.hex

$(OBJ):
	mkdir -p $@

cc1110dkrel =\
	$(REL)\
	uartsrv.rel\
	cc1110dk/board.rel

$(OBJ)/cc1110dk/%.rel : %.c
	@mkdir -p $(@D)
	$(CC) -c $(CFLAGS) -DCC1110 -Icc1110dk -o$@ $<

$(OBJ)/cc1110dk.hex: $(addprefix $(OBJ)/cc1110dk/,$(cc1110dkrel) noprint.rel)
	$(CC) $(LDFLAGS_FLASH) --code-loc  0x0000 $(CFLAGS) -o $@ $^

$(OBJ)/cc1110dk+debug/%.rel : %.c
	@mkdir -p $(@D)
	$(CC) -c $(CFLAGS) -DCC1110 -DDEBUG -Icc1110dk -o$@ $<

$(OBJ)/cc1110dk+debug.hex: $(addprefix $(OBJ)/cc1110dk+debug/,$(cc1110dkrel) print.rel)
	$(CC) $(LDFLAGS_FLASH) --code-loc  0x0000 $(CFLAGS) -o $@ $^

cc1111rel =\
	$(REL)\
	usbsrv.rel\
	cc1111/board.rel\
	cc1111/usb.rel\
	cc1111/hal.rel\
	cc1111/usb_descriptors.rel\
	lib/intel_hex.rel

$(OBJ)/cc1111/%.rel : %.c
	mkdir -p $(@D)
	$(CC) -c $(CFLAGS) -DCC1111 -Icc1111 -o$@ $<

$(OBJ)/cc1111.hex: $(addprefix $(OBJ)/cc1111/,$(cc1111rel) noprint.rel)
	$(CC) $(LDFLAGS_FLASH) --code-loc 0x0000 $(CFLAGS) -o $@ $^

$(OBJ)/cc1111+debug/%.rel : %.c
	mkdir -p $(@D)
	$(CC) -c $(CFLAGS) -DDEBUG -DCC1111 -Icc1111 -o$@ $<

$(OBJ)/cc1111+debug.hex: $(addprefix $(OBJ)/cc1111+debug/,$(cc1111rel) print.rel)
	$(CC) $(LDFLAGS_FLASH) --code-loc  0x0000 $(CFLAGS) -o $@ $^

$(OBJ)/cc1111+debug+ccloader.hex: $(addprefix $(OBJ)/cc1111+debug/,$(cc1111rel) print.rel)
	$(CC) $(LDFLAGS_FLASH) --code-loc 0x1400  $(CFLAGS) -o $@ $^

$(OBJ)/cc1111+ccloader.hex: $(addprefix $(OBJ)/cc1111/,$(cc1111rel) noprint.rel)
	$(CC) $(LDFLAGS_FLASH) --code-loc 0x1400  $(CFLAGS) -o $@ $^

erfrel =\
	$(REL)\
	uartsrv.rel

$(OBJ)/erf/%.rel : %.c
	@mkdir -p $(@D)
	$(CC) -c $(CFLAGS) -DERF -Ierf -o$@ $<

$(OBJ)/erf.hex: $(addprefix $(OBJ)/erf/,$(erfrel) noprint.rel)
	$(CC) $(LDFLAGS_FLASH) $(CFLAGS) -o $@ $^

%.ihx: %.hex
	packihx $< > $@

%.flash: $(OBJ)/%.hex
	cc-tool -v -e -w $<
	
%.load: $(OBJ)/%.ihx
	./rfcat_bootloader /dev/tty.usbmodem000001 download $<
	./rfcat_bootloader /dev/tty.usbmodem000001 verify $<
	./rfcat_bootloader /dev/tty.usbmodem000001 run

clean:
	rm -rf $(OBJ)


.PHONY: all $(OBJ)
