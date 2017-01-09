TARG ?= unix

#HEADERS += $(ROOT)/lib/$(TARG)/u.h

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

$(O)/%.o : %.S
	@mkdir -p $(dir $@)
	@echo "cc	-o$@	$<"
	@$(CC) -c $(CFLAGS) -o$@ $<

config:
	@echo $(O)
	@echo $(OFILES)
	@echo $(HFILES)

clean:
	/bin/rm -rf $(O) $(CLEANFILES)
