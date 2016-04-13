from __future__ import print_function

import sys
from rflib import *

registers = [
  "SYNC1",
  "SYNC0",
  "PKTLEN",
  "PKTCTRL1",
  "PKTCTRL0",
  "ADDR",
  "CHANNR",
  "FSCTRL1",
  "FSCTRL0",
  "FREQ2",
  "FREQ1",
  "FREQ0",
  "MDMCFG4",
  "MDMCFG3",
  "MDMCFG2",
  "MDMCFG1",
  "MDMCFG0",
  "DEVIATN",
  "MCSM2",
  "MCSM1",
  "MCSM0",
  "FOCCFG",
  "BSCFG",
  "FREND1",
  "FREND0",
  "FSCAL3",
  "FSCAL2",
  "FSCAL1",
  "FSCAL0",
  "TEST1",
  "TEST0",
  "PA_TABLE0",
  "PA_TABLE1"
]

def p(d):
  d.setFreq(913979004, mhz=26)
  d.setMdmModulation(MOD_2FSK)
  d.setMdmSyncWord(0xd391)
  d.setMdmDeviatn(24414, mhz=26)
  d.setMdmDRate(19191.7, mhz=26)
  d.makePktFLEN(78)


#  d.setEnablePktAppendStatus(True)

def main(args):
  d = RfCat()
  p(d)
  
  d.getRadioConfig()
  c = d.radiocfg
  
  for r in registers:
    print("%s = 0x%02x;" % (r, getattr(c, r.lower())))

if __name__ == '__main__':
  main(sys.argv)
