ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

include $(ROOT)/tiny9/build.mk
include $(ROOT)/tiny9/tiny9.mk
include $(ROOT)/pingrf.mk
