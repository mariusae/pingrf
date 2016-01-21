
TARG ?= unix

THISFILE = $(CURDIR)/$(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))
ROOT := $(dir $(abspath $(call THISFILE)))

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

$(O)/%.o : %.c
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
