all: pingrf
HASLIBTASK := 1

include ../../root.mk


OBJECTS+=\
	$(TINY9OBJECTS)\
	$(LIBPUMPOBJECTS)\
	$(LIBRADIOOBJECTS)\
	$(PINGRFOBJECTS)\
	$(LIBTASKOBJECTS)\
	$(RADIODRIVEROBJECTS)

OBJECTS+=\
	u.o\
	rpigpio.o\
	tty.o

CLEANFILES+=pingrf

pingrf: $(O)/pingrf.o $(OFILES) $(HFILES)
	$(CC) -o pingrf $^
