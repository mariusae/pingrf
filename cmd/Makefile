all: pingrf

S=$(GOPATH)/src

include $(S)/tinyap.org/tiny9/build.mk
include $(S)/tinyap.org/tiny9/tiny9.mk
include $(S)/tinyap.org/pingrf/pingrf.mk

OBJECTS+=\
	$(TINY9OBJECTS)\
	$(LIBPUMPOBJECTS)\
	$(LIBRADIOOBJECTS)\
	$(PINGRFOBJECTS)

OBJECTS+=\
	u.o\
	rpigpio.o\
	tty.o

CLEANFILES+=pingrf

pingrf: $(O)/pingrf.o $(OFILES) $(HFILES)
	$(CC) -o pingrf $^
