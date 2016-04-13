all: test
test: testradio

S=$(GOPATH)/src
include $(S)/tinyap.org/tiny9/build.mk
include $(S)/tinyap.org/tiny9/tiny9.mk
include $(S)/tinyap.org/pingrf/pingrf.mk

OBJECTS+=\
	$(TINY9OBJECTS)\
	$(LIBRADIOOBJECTS)

$(O)/testradio: $(O)/testradio.o $(OFILES) $(HFILES)
	$(CC) -o $(O)/testradio $^

testradio: $(O)/testradio
	$(O)/testradio
