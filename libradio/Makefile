all: test

include ../lib.mk
include ../libradio.mk

test: testradio

$(O)/testradio: $(O)/testradio.o $(OFILES) $(HFILES)
	$(CC) -o $(O)/testradio $(O)/testradio.o $(OFILES)

testradio: $(O)/testradio
	$(O)/testradio
