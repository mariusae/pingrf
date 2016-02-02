TARG ?= unix

ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

vpath %.c $(ROOT)
vpath %.h $(ROOT)

CFLAGS += -I$(ROOT)/lib/$(TARG)
CFLAGS += -I$(ROOT)/lib
CFLAGS += -I$(ROOT)

HEADERS += $(ROOT)/lib/$(TARG)/u.h

OFILES = $(addprefix $(O)/, $(OBJECTS))
HFILES = $(HEADERS)

ifdef DEBUG
CFLAGS += -DDEBUG -g
endif

O = _build

$(OFILES): $(HFILES)

$(O)/%.o : %.c 
	@mkdir -p $(dir $@)
	@echo "cc	-o$@	$<"
	@$(CC) -c $(CFLAGS) -o$@ $<

$(O)/%.o : %.s 
	@mkdir -p $(dir $@)
	@echo "cc	-o$@	$<"
	@$(CC) -c $(CFLAGS) -o$@ $<


config:
	@echo $(O)
	@echo $(OFILES)
	@echo $(HFILES)

clean:
	/bin/rm -rf $(O) $(CLEANFILES)

OBJECTS += lib/print.o lib/errstr.o lib/$(TARG)/table.o
HEADERS += lib/lib.h lib/table.h
