all: pingrf
HASLIBTASK := 1

include ../root.mk


OBJECTS+=\
	$(TINY9OBJECTS)\
	$(LIBPUMPOBJECTS)\
	$(LIBRADIOOBJECTS)\
	$(PINGRFOBJECTS)\
	$(LIBTASKOBJECTS)\
	$(RADIODRIVEROBJECTS)

OBJECTS+=\
	u.o

CLEANFILES+=pingrf

pingrf: $(O)/pingrf.o $(OFILES) $(HFILES)
	$(CC) -o pingrf $^
