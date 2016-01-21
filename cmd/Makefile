
all: pingrf

include ../lib.mk
include ../libradio.mk
include ../libpump.mk

OBJECTS += u.o
HEADERS += arg.h impl.h
CLEANFILES += pingrf

pingrf: $(O)/pingrf.o $(OFILES) $(HFILES)
	$(CC) -o pingrf $(O)/pingrf.o $(OFILES)
