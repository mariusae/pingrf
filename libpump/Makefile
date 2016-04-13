all: test
test: testpump

S=$(GOPATH)/src
include $(S)/tinyap.org/tiny9/build.mk
include $(S)/tinyap.org/tiny9/tiny9.mk
include $(S)/tinyap.org/pingrf/pingrf.mk

OBJECTS+=\
	$(TINY9OBJECTS)\
	$(PINGRFOBJECTS)\
	$(LIBPUMPOBJECTS)\
	$(LIBRADIOOBJECTS)


$(O)/testpump: $(O)/testpump.o $(OFILES) $(HFILES)
	$(CC) -o $(O)/testpump $^

testpump: $(O)/testpump
	$(O)/testpump
