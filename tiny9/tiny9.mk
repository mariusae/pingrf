TINY9 := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

vpath %.c $(TINY9)
vpath %.S $(TINY9)
vpath %.h $(TINY9)

LIBTASKOBJECTS =\
	libtask/asm.o\
	libtask/channel.o\
	libtask/context.o\
	libtask/qlock.o\
	libtask/print.o\
	libtask/rendez.o\
	libtask/task.o\
	libtask/fd.o\
	libtask/net.o

LIBTASKOFILES = $(addprefix $(O)/, $(LIBTASKOBJECTS))

LIBCOBJECTS =\
	libc/ctime.o\
	libc/time.o\
	libc/tm2sec.o\
	libc/zoneinfo.o\
	libc/errstr.o\
	libc/strecpy.o\
	libc/printhex.o\
	libc/debug.o

LIBCOFILES = $(addprefix $(O)/, $(LIBCOBJECTS))

LIBBIOOBJECTS =\
	libbio/bbuffered.o\
	libbio/bfildes.o\
	libbio/bflush.o\
	libbio/bgetc.o\
	libbio/bgetd.o\
	libbio/bgetrune.o\
	libbio/binit.o\
	libbio/boffset.o\
	libbio/bputc.o\
	libbio/bprint.o\
	libbio/brdline.o\
	libbio/brdstr.o\
	libbio/bread.o\
	libbio/bseek.o\
	libbio/bwrite.o

LIBBIOOFILES = $(addprefix $(O)/, $(LIBBIOOBJECTS))

LIBUTFOBJECTS =\
	libutf/rune.o\
	libutf/runetype.o\
	libutf/utfecpy.o\
	libutf/utflen.o\
	libutf/utfnlen.o\
	libutf/utfrrune.o\
	libutf/utfrune.o\
	libutf/utfutf.o

LIBUTFOFILES = $(addprefix $(O)/, $(LIBUTFOBJECTS))

LIBFMTOBJECTS =\
	libfmt/charstod.o\
	libfmt/dofmt.o\
	libfmt/dorfmt.o\
	libfmt/fltfmt.o\
	libfmt/fmt.o\
	libfmt/fmtfd.o\
	libfmt/fmtfdflush.o\
	libfmt/fmtfix.o\
	libfmt/fmthex.o\
	libfmt/fmtlocale.o\
	libfmt/fmtlock.o\
	libfmt/fmtnull.o\
	libfmt/fmtprint.o\
	libfmt/fmtquote.o\
	libfmt/fmtrune.o\
	libfmt/fmtstr.o\
	libfmt/fmtvprint.o\
	libfmt/fprint.o\
	libfmt/nan64.o\
	libfmt/panic.o\
	libfmt/pow10.o\
	libfmt/print.o\
	libfmt/seprint.o\
	libfmt/smprint.o\
	libfmt/snprint.o\
	libfmt/sprint.o\
	libfmt/strtod.o\
	libfmt/vfprint.o\
	libfmt/vseprint.o\
	libfmt/vsmprint.o\
	libfmt/vsnprint.o

LIBFMTOFILES = $(addprefix $(O)/, $(LIBFMTOBJECTS))

TINY9OBJECTS=\
	$(LIBCOBJECTS)\
	$(LIBUTFOBJECTS)\
	$(LIBFMTOBJECTS)

TINY9OFILES = $(addprefix $(O)/, $(TINY9OBJECTS))

CFLAGS+=\
	-I$(TINY9)/include\
	-I$(TINY9)/$(TARG)/include
