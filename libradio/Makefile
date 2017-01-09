all: test
test: testradio

S=../
include $(S)/tiny9/build.mk
include $(S)/tiny9/tiny9.mk
include $(S)/pingrf.mk

OBJECTS+=\
	$(TINY9OBJECTS)\
	$(LIBRADIOOBJECTS)

$(O)/testradio: $(O)/testradio.o $(OFILES) $(HFILES)
	$(CC) -o $(O)/testradio $^

testradio: $(O)/testradio
	$(O)/testradio
