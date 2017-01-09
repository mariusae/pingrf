all: test
test: testpump

S=../
include $(S)/tiny9/build.mk
include $(S)/tiny9/tiny9.mk
include $(S)/pingrf.mk

OBJECTS+=\
	$(TINY9OBJECTS)\
	$(PINGRFOBJECTS)\
	$(LIBPUMPOBJECTS)\
	$(LIBRADIOOBJECTS)


$(O)/testpump: $(O)/testpump.o $(OFILES) $(HFILES)
	$(CC) -o $(O)/testpump $^

testpump: $(O)/testpump
	$(O)/testpump
