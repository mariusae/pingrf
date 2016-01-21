all: test

include ../lib.mk
include ../libradio.mk
include ../libpump.mk

test: testpump

$(O)/testpump: $(O)/testpump.o $(OFILES) $(HFILES)
	$(CC) -o $(O)/testpump $(O)/testpump.o $(OFILES)

testpump: $(O)/testpump
	$(O)/testpump
