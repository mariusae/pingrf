                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 21:19:18 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module calltxrx
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _calltxrx
                                     13 	.globl _panic
                                     14 	.globl _alarm
                                     15 	.globl _rftxpreamble
                                     16 	.globl _rftx
                                     17 	.globl _rfidle
                                     18 	.globl _memcpy
                                     19 	.globl _MODE
                                     20 	.globl _RE
                                     21 	.globl _SLAVE
                                     22 	.globl _FE
                                     23 	.globl _ERR
                                     24 	.globl _RX_BYTE
                                     25 	.globl _TX_BYTE
                                     26 	.globl _ACTIVE
                                     27 	.globl _B_7
                                     28 	.globl _B_6
                                     29 	.globl _B_5
                                     30 	.globl _B_4
                                     31 	.globl _B_3
                                     32 	.globl _B_2
                                     33 	.globl _B_1
                                     34 	.globl _B_0
                                     35 	.globl _WDTIF
                                     36 	.globl _P1IF
                                     37 	.globl _UTX1IF
                                     38 	.globl _UTX0IF
                                     39 	.globl _P2IF
                                     40 	.globl _ACC_7
                                     41 	.globl _ACC_6
                                     42 	.globl _ACC_5
                                     43 	.globl _ACC_4
                                     44 	.globl _ACC_3
                                     45 	.globl _ACC_2
                                     46 	.globl _ACC_1
                                     47 	.globl _ACC_0
                                     48 	.globl _OVFIM
                                     49 	.globl _T4CH1IF
                                     50 	.globl _T4CH0IF
                                     51 	.globl _T4OVFIF
                                     52 	.globl _T3CH1IF
                                     53 	.globl _T3CH0IF
                                     54 	.globl _T3OVFIF
                                     55 	.globl _CY
                                     56 	.globl _AC
                                     57 	.globl _F0
                                     58 	.globl _RS1
                                     59 	.globl _RS0
                                     60 	.globl _OV
                                     61 	.globl _F1
                                     62 	.globl _P
                                     63 	.globl _STIF
                                     64 	.globl _P0IF
                                     65 	.globl _T4IF
                                     66 	.globl _T3IF
                                     67 	.globl _T2IF
                                     68 	.globl _T1IF
                                     69 	.globl _DMAIF
                                     70 	.globl _P0IE
                                     71 	.globl _T4IE
                                     72 	.globl _T3IE
                                     73 	.globl _T2IE
                                     74 	.globl _T1IE
                                     75 	.globl _DMAIE
                                     76 	.globl _EA
                                     77 	.globl _STIE
                                     78 	.globl _ENCIE
                                     79 	.globl _URX1IE
                                     80 	.globl _URX0IE
                                     81 	.globl _ADCIE
                                     82 	.globl _RFTXRXIE
                                     83 	.globl _P2_7
                                     84 	.globl _P2_6
                                     85 	.globl _P2_5
                                     86 	.globl _P2_4
                                     87 	.globl _P2_3
                                     88 	.globl _P2_2
                                     89 	.globl _P2_1
                                     90 	.globl _P2_0
                                     91 	.globl _ENCIF_1
                                     92 	.globl _ENCIF_0
                                     93 	.globl _P1_7
                                     94 	.globl _P1_6
                                     95 	.globl _P1_5
                                     96 	.globl _P1_4
                                     97 	.globl _P1_3
                                     98 	.globl _P1_2
                                     99 	.globl _P1_1
                                    100 	.globl _P1_0
                                    101 	.globl _URX1IF
                                    102 	.globl _ADCIF
                                    103 	.globl _URX0IF
                                    104 	.globl _IT1
                                    105 	.globl _RFTXRXIF
                                    106 	.globl _IT0
                                    107 	.globl _P0_7
                                    108 	.globl _P0_6
                                    109 	.globl _P0_5
                                    110 	.globl _P0_4
                                    111 	.globl _P0_3
                                    112 	.globl _P0_2
                                    113 	.globl _P0_1
                                    114 	.globl _P0_0
                                    115 	.globl _P2DIR
                                    116 	.globl _P1DIR
                                    117 	.globl _P0DIR
                                    118 	.globl _U1GCR
                                    119 	.globl _U1UCR
                                    120 	.globl _U1BAUD
                                    121 	.globl _U1DBUF
                                    122 	.globl _U1CSR
                                    123 	.globl _P2INP
                                    124 	.globl _P1INP
                                    125 	.globl _P2SEL
                                    126 	.globl _P1SEL
                                    127 	.globl _P0SEL
                                    128 	.globl _ADCCFG
                                    129 	.globl _PERCFG
                                    130 	.globl _B
                                    131 	.globl _T4CC1
                                    132 	.globl _T4CCTL1
                                    133 	.globl _T4CC0
                                    134 	.globl _T4CCTL0
                                    135 	.globl _T4CTL
                                    136 	.globl _T4CNT
                                    137 	.globl _RFIF
                                    138 	.globl _IRCON2
                                    139 	.globl _T1CCTL2
                                    140 	.globl _T1CCTL1
                                    141 	.globl _T1CCTL0
                                    142 	.globl _T1CTL
                                    143 	.globl _T1CNTH
                                    144 	.globl _T1CNTL
                                    145 	.globl _RFST
                                    146 	.globl _ACC
                                    147 	.globl _T1CC2H
                                    148 	.globl _T1CC2L
                                    149 	.globl _T1CC1H
                                    150 	.globl _T1CC1L
                                    151 	.globl _T1CC0H
                                    152 	.globl _T1CC0L
                                    153 	.globl _RFD
                                    154 	.globl _TIMIF
                                    155 	.globl _DMAREQ
                                    156 	.globl _DMAARM
                                    157 	.globl _DMA0CFGH
                                    158 	.globl _DMA0CFGL
                                    159 	.globl _DMA1CFGH
                                    160 	.globl _DMA1CFGL
                                    161 	.globl _DMAIRQ
                                    162 	.globl _PSW
                                    163 	.globl _T3CC1
                                    164 	.globl _T3CCTL1
                                    165 	.globl _T3CC0
                                    166 	.globl _T3CCTL0
                                    167 	.globl _T3CTL
                                    168 	.globl _T3CNT
                                    169 	.globl _WDCTL
                                    170 	.globl __SFRC8
                                    171 	.globl _MEMCTR
                                    172 	.globl _CLKCON
                                    173 	.globl _U0GCR
                                    174 	.globl _U0UCR
                                    175 	.globl __SFRC3
                                    176 	.globl _U0BAUD
                                    177 	.globl _U0DBUF
                                    178 	.globl _IRCON
                                    179 	.globl __SFRBF
                                    180 	.globl _SLEEP
                                    181 	.globl _RNDH
                                    182 	.globl _RNDL
                                    183 	.globl _ADCH
                                    184 	.globl _ADCL
                                    185 	.globl _IP1
                                    186 	.globl _IEN1
                                    187 	.globl __SFRB7
                                    188 	.globl _ADCCON3
                                    189 	.globl _ADCCON2
                                    190 	.globl _ADCCON1
                                    191 	.globl _ENCCS
                                    192 	.globl _ENCDO
                                    193 	.globl _ENCDI
                                    194 	.globl __SFRB0
                                    195 	.globl _FWDATA
                                    196 	.globl _FCTL
                                    197 	.globl _FADDRH
                                    198 	.globl _FADDRL
                                    199 	.globl _FWT
                                    200 	.globl __SFRAA
                                    201 	.globl _IP0
                                    202 	.globl _IEN0
                                    203 	.globl __SFRA7
                                    204 	.globl _WORTIME1
                                    205 	.globl _WORTIME0
                                    206 	.globl _WOREVT1
                                    207 	.globl _WOREVT0
                                    208 	.globl _WORCTRL
                                    209 	.globl _WORIRQ
                                    210 	.globl _P2
                                    211 	.globl __SFR9F
                                    212 	.globl _T2CTL
                                    213 	.globl _T2PR
                                    214 	.globl _T2CT
                                    215 	.globl _S1CON
                                    216 	.globl _IEN2
                                    217 	.globl __SFR99
                                    218 	.globl _S0CON
                                    219 	.globl __SFR97
                                    220 	.globl __SFR96
                                    221 	.globl __SFR95
                                    222 	.globl __SFR94
                                    223 	.globl __XPAGE
                                    224 	.globl _MPAGE
                                    225 	.globl _DPS
                                    226 	.globl _RFIM
                                    227 	.globl _P1
                                    228 	.globl _P0INP
                                    229 	.globl __SFR8E
                                    230 	.globl _P1IEN
                                    231 	.globl _PICTL
                                    232 	.globl _P2IFG
                                    233 	.globl _P1IFG
                                    234 	.globl _P0IFG
                                    235 	.globl _TCON
                                    236 	.globl _PCON
                                    237 	.globl _U0CSR
                                    238 	.globl _DPH1
                                    239 	.globl _DPL1
                                    240 	.globl _DPH0
                                    241 	.globl _DPL0
                                    242 	.globl _SP
                                    243 	.globl _P0
                                    244 	.globl _calltxrx_PARM_4
                                    245 	.globl _calltxrx_PARM_3
                                    246 	.globl _calltxrx_PARM_2
                                    247 	.globl _X_P2DIR
                                    248 	.globl _X_P1DIR
                                    249 	.globl _X_P0DIR
                                    250 	.globl _X_U1GCR
                                    251 	.globl _X_U1UCR
                                    252 	.globl _X_U1BAUD
                                    253 	.globl _X_U1DBUF
                                    254 	.globl _X_U1CSR
                                    255 	.globl _X_P2INP
                                    256 	.globl _X_P1INP
                                    257 	.globl _X_P2SEL
                                    258 	.globl _X_P1SEL
                                    259 	.globl _X_P0SEL
                                    260 	.globl _X_ADCCFG
                                    261 	.globl _X_PERCFG
                                    262 	.globl __NA_B
                                    263 	.globl _X_T4CC1
                                    264 	.globl _X_T4CCTL1
                                    265 	.globl _X_T4CC0
                                    266 	.globl _X_T4CCTL0
                                    267 	.globl _X_T4CTL
                                    268 	.globl _X_T4CNT
                                    269 	.globl _X_RFIF
                                    270 	.globl __NA_IRCON2
                                    271 	.globl _X_T1CCTL2
                                    272 	.globl _X_T1CCTL1
                                    273 	.globl _X_T1CCTL0
                                    274 	.globl _X_T1CTL
                                    275 	.globl _X_T1CNTH
                                    276 	.globl _X_T1CNTL
                                    277 	.globl _X_RFST
                                    278 	.globl __NA_ACC
                                    279 	.globl _X_T1CC2H
                                    280 	.globl _X_T1CC2L
                                    281 	.globl _X_T1CC1H
                                    282 	.globl _X_T1CC1L
                                    283 	.globl _X_T1CC0H
                                    284 	.globl _X_T1CC0L
                                    285 	.globl _X_RFD
                                    286 	.globl _X_TIMIF
                                    287 	.globl _X_DMAREQ
                                    288 	.globl _X_DMAARM
                                    289 	.globl _X_DMA0CFGH
                                    290 	.globl _X_DMA0CFGL
                                    291 	.globl _X_DMA1CFGH
                                    292 	.globl _X_DMA1CFGL
                                    293 	.globl _X_DMAIRQ
                                    294 	.globl __NA_PSW
                                    295 	.globl _X_T3CC1
                                    296 	.globl _X_T3CCTL1
                                    297 	.globl _X_T3CC0
                                    298 	.globl _X_T3CCTL0
                                    299 	.globl _X_T3CTL
                                    300 	.globl _X_T3CNT
                                    301 	.globl _X_WDCTL
                                    302 	.globl __X_SFRC8
                                    303 	.globl _X_MEMCTR
                                    304 	.globl _X_CLKCON
                                    305 	.globl _X_U0GCR
                                    306 	.globl _X_U0UCR
                                    307 	.globl __X_SFRC3
                                    308 	.globl _X_U0BAUD
                                    309 	.globl _X_U0DBUF
                                    310 	.globl __NA_IRCON
                                    311 	.globl __X_SFRBF
                                    312 	.globl _X_SLEEP
                                    313 	.globl _X_RNDH
                                    314 	.globl _X_RNDL
                                    315 	.globl _X_ADCH
                                    316 	.globl _X_ADCL
                                    317 	.globl __NA_IP1
                                    318 	.globl __NA_IEN1
                                    319 	.globl __X_SFRB7
                                    320 	.globl _X_ADCCON3
                                    321 	.globl _X_ADCCON2
                                    322 	.globl _X_ADCCON1
                                    323 	.globl _X_ENCCS
                                    324 	.globl _X_ENCDO
                                    325 	.globl _X_ENCDI
                                    326 	.globl __X_SFRB0
                                    327 	.globl _X_FWDATA
                                    328 	.globl _X_FCTL
                                    329 	.globl _X_FADDRH
                                    330 	.globl _X_FADDRL
                                    331 	.globl _X_FWT
                                    332 	.globl __X_SFRAA
                                    333 	.globl __NA_IP0
                                    334 	.globl __NA_IEN0
                                    335 	.globl __X_SFRA7
                                    336 	.globl _X_WORTIME1
                                    337 	.globl _X_WORTIME0
                                    338 	.globl _X_WOREVT1
                                    339 	.globl _X_WOREVT0
                                    340 	.globl _X_WORCTRL
                                    341 	.globl _X_WORIRQ
                                    342 	.globl __NA_P2
                                    343 	.globl __X_SFR9F
                                    344 	.globl _X_T2CTL
                                    345 	.globl _X_T2PR
                                    346 	.globl _X_T2CT
                                    347 	.globl __NA_S1CON
                                    348 	.globl __NA_IEN2
                                    349 	.globl __X_SFR99
                                    350 	.globl __NA_S0CON
                                    351 	.globl __X_SFR97
                                    352 	.globl __X_SFR96
                                    353 	.globl __X_SFR95
                                    354 	.globl __X_SFR94
                                    355 	.globl _X_MPAGE
                                    356 	.globl __NA_DPS
                                    357 	.globl _X_RFIM
                                    358 	.globl __NA_P1
                                    359 	.globl _X_P0INP
                                    360 	.globl __X_SFR8E
                                    361 	.globl _X_P1IEN
                                    362 	.globl _X_PICTL
                                    363 	.globl _X_P2IFG
                                    364 	.globl _X_P1IFG
                                    365 	.globl _X_P0IFG
                                    366 	.globl __NA_TCON
                                    367 	.globl __NA_PCON
                                    368 	.globl _X_U0CSR
                                    369 	.globl __NA_DPH1
                                    370 	.globl __NA_DPL1
                                    371 	.globl __NA_DPH0
                                    372 	.globl __NA_DPL0
                                    373 	.globl __NA_SP
                                    374 	.globl __NA_P0
                                    375 	.globl _I2SCLKF2
                                    376 	.globl _I2SCLKF1
                                    377 	.globl _I2SCLKF0
                                    378 	.globl _I2SSTAT
                                    379 	.globl _I2SWCNT
                                    380 	.globl _I2SDATH
                                    381 	.globl _I2SDATL
                                    382 	.globl _I2SCFG1
                                    383 	.globl _I2SCFG0
                                    384 	.globl _VCO_VC_DAC
                                    385 	.globl _PKTSTATUS
                                    386 	.globl _MARCSTATE
                                    387 	.globl _RSSI
                                    388 	.globl _LQI
                                    389 	.globl _FREQEST
                                    390 	.globl _VERSION
                                    391 	.globl _PARTNUM
                                    392 	.globl __XREGDF35
                                    393 	.globl __XREGDF34
                                    394 	.globl __XREGDF33
                                    395 	.globl __XREGDF32
                                    396 	.globl _IOCFG0
                                    397 	.globl _IOCFG1
                                    398 	.globl _IOCFG2
                                    399 	.globl _PA_TABLE0
                                    400 	.globl _PA_TABLE1
                                    401 	.globl _PA_TABLE2
                                    402 	.globl _PA_TABLE3
                                    403 	.globl _PA_TABLE4
                                    404 	.globl _PA_TABLE5
                                    405 	.globl _PA_TABLE6
                                    406 	.globl _PA_TABLE7
                                    407 	.globl __XREGDF26
                                    408 	.globl _TEST0
                                    409 	.globl _TEST1
                                    410 	.globl _TEST2
                                    411 	.globl __XREGDF22
                                    412 	.globl __XREGDF21
                                    413 	.globl __XREGDF20
                                    414 	.globl _FSCAL0
                                    415 	.globl _FSCAL1
                                    416 	.globl _FSCAL2
                                    417 	.globl _FSCAL3
                                    418 	.globl _FREND0
                                    419 	.globl _FREND1
                                    420 	.globl _AGCCTRL0
                                    421 	.globl _AGCCTRL1
                                    422 	.globl _AGCCTRL2
                                    423 	.globl _BSCFG
                                    424 	.globl _FOCCFG
                                    425 	.globl _MCSM0
                                    426 	.globl _MCSM1
                                    427 	.globl _MCSM2
                                    428 	.globl _DEVIATN
                                    429 	.globl _MDMCFG0
                                    430 	.globl _MDMCFG1
                                    431 	.globl _MDMCFG2
                                    432 	.globl _MDMCFG3
                                    433 	.globl _MDMCFG4
                                    434 	.globl _FREQ0
                                    435 	.globl _FREQ1
                                    436 	.globl _FREQ2
                                    437 	.globl _FSCTRL0
                                    438 	.globl _FSCTRL1
                                    439 	.globl _CHANNR
                                    440 	.globl _ADDR
                                    441 	.globl _PKTCTRL0
                                    442 	.globl _PKTCTRL1
                                    443 	.globl _PKTLEN
                                    444 	.globl _SYNC0
                                    445 	.globl _SYNC1
                                    446 	.globl _MDMCTRL0H
                                    447 ;--------------------------------------------------------
                                    448 ; special function registers
                                    449 ;--------------------------------------------------------
                                    450 	.area RSEG    (ABS,DATA)
      000000                        451 	.org 0x0000
                           000080   452 _P0	=	0x0080
                           000081   453 _SP	=	0x0081
                           000082   454 _DPL0	=	0x0082
                           000083   455 _DPH0	=	0x0083
                           000084   456 _DPL1	=	0x0084
                           000085   457 _DPH1	=	0x0085
                           000086   458 _U0CSR	=	0x0086
                           000087   459 _PCON	=	0x0087
                           000088   460 _TCON	=	0x0088
                           000089   461 _P0IFG	=	0x0089
                           00008A   462 _P1IFG	=	0x008a
                           00008B   463 _P2IFG	=	0x008b
                           00008C   464 _PICTL	=	0x008c
                           00008D   465 _P1IEN	=	0x008d
                           00008E   466 __SFR8E	=	0x008e
                           00008F   467 _P0INP	=	0x008f
                           000090   468 _P1	=	0x0090
                           000091   469 _RFIM	=	0x0091
                           000092   470 _DPS	=	0x0092
                           000093   471 _MPAGE	=	0x0093
                           000093   472 __XPAGE	=	0x0093
                           000094   473 __SFR94	=	0x0094
                           000095   474 __SFR95	=	0x0095
                           000096   475 __SFR96	=	0x0096
                           000097   476 __SFR97	=	0x0097
                           000098   477 _S0CON	=	0x0098
                           000099   478 __SFR99	=	0x0099
                           00009A   479 _IEN2	=	0x009a
                           00009B   480 _S1CON	=	0x009b
                           00009C   481 _T2CT	=	0x009c
                           00009D   482 _T2PR	=	0x009d
                           00009E   483 _T2CTL	=	0x009e
                           00009F   484 __SFR9F	=	0x009f
                           0000A0   485 _P2	=	0x00a0
                           0000A1   486 _WORIRQ	=	0x00a1
                           0000A2   487 _WORCTRL	=	0x00a2
                           0000A3   488 _WOREVT0	=	0x00a3
                           0000A4   489 _WOREVT1	=	0x00a4
                           0000A5   490 _WORTIME0	=	0x00a5
                           0000A6   491 _WORTIME1	=	0x00a6
                           0000A7   492 __SFRA7	=	0x00a7
                           0000A8   493 _IEN0	=	0x00a8
                           0000A9   494 _IP0	=	0x00a9
                           0000AA   495 __SFRAA	=	0x00aa
                           0000AB   496 _FWT	=	0x00ab
                           0000AC   497 _FADDRL	=	0x00ac
                           0000AD   498 _FADDRH	=	0x00ad
                           0000AE   499 _FCTL	=	0x00ae
                           0000AF   500 _FWDATA	=	0x00af
                           0000B0   501 __SFRB0	=	0x00b0
                           0000B1   502 _ENCDI	=	0x00b1
                           0000B2   503 _ENCDO	=	0x00b2
                           0000B3   504 _ENCCS	=	0x00b3
                           0000B4   505 _ADCCON1	=	0x00b4
                           0000B5   506 _ADCCON2	=	0x00b5
                           0000B6   507 _ADCCON3	=	0x00b6
                           0000B7   508 __SFRB7	=	0x00b7
                           0000B8   509 _IEN1	=	0x00b8
                           0000B9   510 _IP1	=	0x00b9
                           0000BA   511 _ADCL	=	0x00ba
                           0000BB   512 _ADCH	=	0x00bb
                           0000BC   513 _RNDL	=	0x00bc
                           0000BD   514 _RNDH	=	0x00bd
                           0000BE   515 _SLEEP	=	0x00be
                           0000BF   516 __SFRBF	=	0x00bf
                           0000C0   517 _IRCON	=	0x00c0
                           0000C1   518 _U0DBUF	=	0x00c1
                           0000C2   519 _U0BAUD	=	0x00c2
                           0000C3   520 __SFRC3	=	0x00c3
                           0000C4   521 _U0UCR	=	0x00c4
                           0000C5   522 _U0GCR	=	0x00c5
                           0000C6   523 _CLKCON	=	0x00c6
                           0000C7   524 _MEMCTR	=	0x00c7
                           0000C8   525 __SFRC8	=	0x00c8
                           0000C9   526 _WDCTL	=	0x00c9
                           0000CA   527 _T3CNT	=	0x00ca
                           0000CB   528 _T3CTL	=	0x00cb
                           0000CC   529 _T3CCTL0	=	0x00cc
                           0000CD   530 _T3CC0	=	0x00cd
                           0000CE   531 _T3CCTL1	=	0x00ce
                           0000CF   532 _T3CC1	=	0x00cf
                           0000D0   533 _PSW	=	0x00d0
                           0000D1   534 _DMAIRQ	=	0x00d1
                           0000D2   535 _DMA1CFGL	=	0x00d2
                           0000D3   536 _DMA1CFGH	=	0x00d3
                           0000D4   537 _DMA0CFGL	=	0x00d4
                           0000D5   538 _DMA0CFGH	=	0x00d5
                           0000D6   539 _DMAARM	=	0x00d6
                           0000D7   540 _DMAREQ	=	0x00d7
                           0000D8   541 _TIMIF	=	0x00d8
                           0000D9   542 _RFD	=	0x00d9
                           0000DA   543 _T1CC0L	=	0x00da
                           0000DB   544 _T1CC0H	=	0x00db
                           0000DC   545 _T1CC1L	=	0x00dc
                           0000DD   546 _T1CC1H	=	0x00dd
                           0000DE   547 _T1CC2L	=	0x00de
                           0000DF   548 _T1CC2H	=	0x00df
                           0000E0   549 _ACC	=	0x00e0
                           0000E1   550 _RFST	=	0x00e1
                           0000E2   551 _T1CNTL	=	0x00e2
                           0000E3   552 _T1CNTH	=	0x00e3
                           0000E4   553 _T1CTL	=	0x00e4
                           0000E5   554 _T1CCTL0	=	0x00e5
                           0000E6   555 _T1CCTL1	=	0x00e6
                           0000E7   556 _T1CCTL2	=	0x00e7
                           0000E8   557 _IRCON2	=	0x00e8
                           0000E9   558 _RFIF	=	0x00e9
                           0000EA   559 _T4CNT	=	0x00ea
                           0000EB   560 _T4CTL	=	0x00eb
                           0000EC   561 _T4CCTL0	=	0x00ec
                           0000ED   562 _T4CC0	=	0x00ed
                           0000EE   563 _T4CCTL1	=	0x00ee
                           0000EF   564 _T4CC1	=	0x00ef
                           0000F0   565 _B	=	0x00f0
                           0000F1   566 _PERCFG	=	0x00f1
                           0000F2   567 _ADCCFG	=	0x00f2
                           0000F3   568 _P0SEL	=	0x00f3
                           0000F4   569 _P1SEL	=	0x00f4
                           0000F5   570 _P2SEL	=	0x00f5
                           0000F6   571 _P1INP	=	0x00f6
                           0000F7   572 _P2INP	=	0x00f7
                           0000F8   573 _U1CSR	=	0x00f8
                           0000F9   574 _U1DBUF	=	0x00f9
                           0000FA   575 _U1BAUD	=	0x00fa
                           0000FB   576 _U1UCR	=	0x00fb
                           0000FC   577 _U1GCR	=	0x00fc
                           0000FD   578 _P0DIR	=	0x00fd
                           0000FE   579 _P1DIR	=	0x00fe
                           0000FF   580 _P2DIR	=	0x00ff
                                    581 ;--------------------------------------------------------
                                    582 ; special function bits
                                    583 ;--------------------------------------------------------
                                    584 	.area RSEG    (ABS,DATA)
      000000                        585 	.org 0x0000
                           000080   586 _P0_0	=	0x0080
                           000081   587 _P0_1	=	0x0081
                           000082   588 _P0_2	=	0x0082
                           000083   589 _P0_3	=	0x0083
                           000084   590 _P0_4	=	0x0084
                           000085   591 _P0_5	=	0x0085
                           000086   592 _P0_6	=	0x0086
                           000087   593 _P0_7	=	0x0087
                           000088   594 _IT0	=	0x0088
                           000089   595 _RFTXRXIF	=	0x0089
                           00008A   596 _IT1	=	0x008a
                           00008B   597 _URX0IF	=	0x008b
                           00008D   598 _ADCIF	=	0x008d
                           00008F   599 _URX1IF	=	0x008f
                           000090   600 _P1_0	=	0x0090
                           000091   601 _P1_1	=	0x0091
                           000092   602 _P1_2	=	0x0092
                           000093   603 _P1_3	=	0x0093
                           000094   604 _P1_4	=	0x0094
                           000095   605 _P1_5	=	0x0095
                           000096   606 _P1_6	=	0x0096
                           000097   607 _P1_7	=	0x0097
                           000098   608 _ENCIF_0	=	0x0098
                           000099   609 _ENCIF_1	=	0x0099
                           0000A0   610 _P2_0	=	0x00a0
                           0000A1   611 _P2_1	=	0x00a1
                           0000A2   612 _P2_2	=	0x00a2
                           0000A3   613 _P2_3	=	0x00a3
                           0000A4   614 _P2_4	=	0x00a4
                           0000A5   615 _P2_5	=	0x00a5
                           0000A6   616 _P2_6	=	0x00a6
                           0000A7   617 _P2_7	=	0x00a7
                           0000A8   618 _RFTXRXIE	=	0x00a8
                           0000A9   619 _ADCIE	=	0x00a9
                           0000AA   620 _URX0IE	=	0x00aa
                           0000AB   621 _URX1IE	=	0x00ab
                           0000AC   622 _ENCIE	=	0x00ac
                           0000AD   623 _STIE	=	0x00ad
                           0000AF   624 _EA	=	0x00af
                           0000B8   625 _DMAIE	=	0x00b8
                           0000B9   626 _T1IE	=	0x00b9
                           0000BA   627 _T2IE	=	0x00ba
                           0000BB   628 _T3IE	=	0x00bb
                           0000BC   629 _T4IE	=	0x00bc
                           0000BD   630 _P0IE	=	0x00bd
                           0000C0   631 _DMAIF	=	0x00c0
                           0000C1   632 _T1IF	=	0x00c1
                           0000C2   633 _T2IF	=	0x00c2
                           0000C3   634 _T3IF	=	0x00c3
                           0000C4   635 _T4IF	=	0x00c4
                           0000C5   636 _P0IF	=	0x00c5
                           0000C7   637 _STIF	=	0x00c7
                           0000D0   638 _P	=	0x00d0
                           0000D1   639 _F1	=	0x00d1
                           0000D2   640 _OV	=	0x00d2
                           0000D3   641 _RS0	=	0x00d3
                           0000D4   642 _RS1	=	0x00d4
                           0000D5   643 _F0	=	0x00d5
                           0000D6   644 _AC	=	0x00d6
                           0000D7   645 _CY	=	0x00d7
                           0000D8   646 _T3OVFIF	=	0x00d8
                           0000D9   647 _T3CH0IF	=	0x00d9
                           0000DA   648 _T3CH1IF	=	0x00da
                           0000DB   649 _T4OVFIF	=	0x00db
                           0000DC   650 _T4CH0IF	=	0x00dc
                           0000DD   651 _T4CH1IF	=	0x00dd
                           0000DE   652 _OVFIM	=	0x00de
                           0000E0   653 _ACC_0	=	0x00e0
                           0000E1   654 _ACC_1	=	0x00e1
                           0000E2   655 _ACC_2	=	0x00e2
                           0000E3   656 _ACC_3	=	0x00e3
                           0000E4   657 _ACC_4	=	0x00e4
                           0000E5   658 _ACC_5	=	0x00e5
                           0000E6   659 _ACC_6	=	0x00e6
                           0000E7   660 _ACC_7	=	0x00e7
                           0000E8   661 _P2IF	=	0x00e8
                           0000E9   662 _UTX0IF	=	0x00e9
                           0000EA   663 _UTX1IF	=	0x00ea
                           0000EB   664 _P1IF	=	0x00eb
                           0000EC   665 _WDTIF	=	0x00ec
                           0000F0   666 _B_0	=	0x00f0
                           0000F1   667 _B_1	=	0x00f1
                           0000F2   668 _B_2	=	0x00f2
                           0000F3   669 _B_3	=	0x00f3
                           0000F4   670 _B_4	=	0x00f4
                           0000F5   671 _B_5	=	0x00f5
                           0000F6   672 _B_6	=	0x00f6
                           0000F7   673 _B_7	=	0x00f7
                           0000F8   674 _ACTIVE	=	0x00f8
                           0000F9   675 _TX_BYTE	=	0x00f9
                           0000FA   676 _RX_BYTE	=	0x00fa
                           0000FB   677 _ERR	=	0x00fb
                           0000FC   678 _FE	=	0x00fc
                           0000FD   679 _SLAVE	=	0x00fd
                           0000FE   680 _RE	=	0x00fe
                           0000FF   681 _MODE	=	0x00ff
                                    682 ;--------------------------------------------------------
                                    683 ; overlayable register banks
                                    684 ;--------------------------------------------------------
                                    685 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        686 	.ds 8
                                    687 ;--------------------------------------------------------
                                    688 ; internal ram data
                                    689 ;--------------------------------------------------------
                                    690 	.area DSEG    (DATA)
      000013                        691 _calltxrx_sloc0_1_0:
      000013                        692 	.ds 2
      000015                        693 _calltxrx_sloc1_1_0:
      000015                        694 	.ds 3
                                    695 ;--------------------------------------------------------
                                    696 ; overlayable items in internal ram 
                                    697 ;--------------------------------------------------------
                                    698 ;--------------------------------------------------------
                                    699 ; indirectly addressable internal ram data
                                    700 ;--------------------------------------------------------
                                    701 	.area ISEG    (DATA)
                                    702 ;--------------------------------------------------------
                                    703 ; absolute internal ram data
                                    704 ;--------------------------------------------------------
                                    705 	.area IABS    (ABS,DATA)
                                    706 	.area IABS    (ABS,DATA)
                                    707 ;--------------------------------------------------------
                                    708 ; bit data
                                    709 ;--------------------------------------------------------
                                    710 	.area BSEG    (BIT)
                                    711 ;--------------------------------------------------------
                                    712 ; paged external ram data
                                    713 ;--------------------------------------------------------
                                    714 	.area PSEG    (PAG,XDATA)
                                    715 ;--------------------------------------------------------
                                    716 ; external ram data
                                    717 ;--------------------------------------------------------
                                    718 	.area XSEG    (XDATA)
                           00DF02   719 _MDMCTRL0H	=	0xdf02
                           00DF00   720 _SYNC1	=	0xdf00
                           00DF01   721 _SYNC0	=	0xdf01
                           00DF02   722 _PKTLEN	=	0xdf02
                           00DF03   723 _PKTCTRL1	=	0xdf03
                           00DF04   724 _PKTCTRL0	=	0xdf04
                           00DF05   725 _ADDR	=	0xdf05
                           00DF06   726 _CHANNR	=	0xdf06
                           00DF07   727 _FSCTRL1	=	0xdf07
                           00DF08   728 _FSCTRL0	=	0xdf08
                           00DF09   729 _FREQ2	=	0xdf09
                           00DF0A   730 _FREQ1	=	0xdf0a
                           00DF0B   731 _FREQ0	=	0xdf0b
                           00DF0C   732 _MDMCFG4	=	0xdf0c
                           00DF0D   733 _MDMCFG3	=	0xdf0d
                           00DF0E   734 _MDMCFG2	=	0xdf0e
                           00DF0F   735 _MDMCFG1	=	0xdf0f
                           00DF10   736 _MDMCFG0	=	0xdf10
                           00DF11   737 _DEVIATN	=	0xdf11
                           00DF12   738 _MCSM2	=	0xdf12
                           00DF13   739 _MCSM1	=	0xdf13
                           00DF14   740 _MCSM0	=	0xdf14
                           00DF15   741 _FOCCFG	=	0xdf15
                           00DF16   742 _BSCFG	=	0xdf16
                           00DF17   743 _AGCCTRL2	=	0xdf17
                           00DF18   744 _AGCCTRL1	=	0xdf18
                           00DF19   745 _AGCCTRL0	=	0xdf19
                           00DF1A   746 _FREND1	=	0xdf1a
                           00DF1B   747 _FREND0	=	0xdf1b
                           00DF1C   748 _FSCAL3	=	0xdf1c
                           00DF1D   749 _FSCAL2	=	0xdf1d
                           00DF1E   750 _FSCAL1	=	0xdf1e
                           00DF1F   751 _FSCAL0	=	0xdf1f
                           00DF20   752 __XREGDF20	=	0xdf20
                           00DF21   753 __XREGDF21	=	0xdf21
                           00DF22   754 __XREGDF22	=	0xdf22
                           00DF23   755 _TEST2	=	0xdf23
                           00DF24   756 _TEST1	=	0xdf24
                           00DF25   757 _TEST0	=	0xdf25
                           00DF26   758 __XREGDF26	=	0xdf26
                           00DF27   759 _PA_TABLE7	=	0xdf27
                           00DF28   760 _PA_TABLE6	=	0xdf28
                           00DF29   761 _PA_TABLE5	=	0xdf29
                           00DF2A   762 _PA_TABLE4	=	0xdf2a
                           00DF2B   763 _PA_TABLE3	=	0xdf2b
                           00DF2C   764 _PA_TABLE2	=	0xdf2c
                           00DF2D   765 _PA_TABLE1	=	0xdf2d
                           00DF2E   766 _PA_TABLE0	=	0xdf2e
                           00DF2F   767 _IOCFG2	=	0xdf2f
                           00DF30   768 _IOCFG1	=	0xdf30
                           00DF31   769 _IOCFG0	=	0xdf31
                           00DF32   770 __XREGDF32	=	0xdf32
                           00DF33   771 __XREGDF33	=	0xdf33
                           00DF34   772 __XREGDF34	=	0xdf34
                           00DF35   773 __XREGDF35	=	0xdf35
                           00DF36   774 _PARTNUM	=	0xdf36
                           00DF37   775 _VERSION	=	0xdf37
                           00DF38   776 _FREQEST	=	0xdf38
                           00DF39   777 _LQI	=	0xdf39
                           00DF3A   778 _RSSI	=	0xdf3a
                           00DF3B   779 _MARCSTATE	=	0xdf3b
                           00DF3C   780 _PKTSTATUS	=	0xdf3c
                           00DF3D   781 _VCO_VC_DAC	=	0xdf3d
                           00DF40   782 _I2SCFG0	=	0xdf40
                           00DF41   783 _I2SCFG1	=	0xdf41
                           00DF42   784 _I2SDATL	=	0xdf42
                           00DF43   785 _I2SDATH	=	0xdf43
                           00DF44   786 _I2SWCNT	=	0xdf44
                           00DF45   787 _I2SSTAT	=	0xdf45
                           00DF46   788 _I2SCLKF0	=	0xdf46
                           00DF47   789 _I2SCLKF1	=	0xdf47
                           00DF48   790 _I2SCLKF2	=	0xdf48
                           00DF80   791 __NA_P0	=	0xdf80
                           00DF81   792 __NA_SP	=	0xdf81
                           00DF82   793 __NA_DPL0	=	0xdf82
                           00DF83   794 __NA_DPH0	=	0xdf83
                           00DF84   795 __NA_DPL1	=	0xdf84
                           00DF85   796 __NA_DPH1	=	0xdf85
                           00DF86   797 _X_U0CSR	=	0xdf86
                           00DF87   798 __NA_PCON	=	0xdf87
                           00DF88   799 __NA_TCON	=	0xdf88
                           00DF89   800 _X_P0IFG	=	0xdf89
                           00DF8A   801 _X_P1IFG	=	0xdf8a
                           00DF8B   802 _X_P2IFG	=	0xdf8b
                           00DF8C   803 _X_PICTL	=	0xdf8c
                           00DF8D   804 _X_P1IEN	=	0xdf8d
                           00DF8E   805 __X_SFR8E	=	0xdf8e
                           00DF8F   806 _X_P0INP	=	0xdf8f
                           00DF90   807 __NA_P1	=	0xdf90
                           00DF91   808 _X_RFIM	=	0xdf91
                           00DF92   809 __NA_DPS	=	0xdf92
                           00DF93   810 _X_MPAGE	=	0xdf93
                           00DF94   811 __X_SFR94	=	0xdf94
                           00DF95   812 __X_SFR95	=	0xdf95
                           00DF96   813 __X_SFR96	=	0xdf96
                           00DF97   814 __X_SFR97	=	0xdf97
                           00DF98   815 __NA_S0CON	=	0xdf98
                           00DF99   816 __X_SFR99	=	0xdf99
                           00DF9A   817 __NA_IEN2	=	0xdf9a
                           00DF9B   818 __NA_S1CON	=	0xdf9b
                           00DF9C   819 _X_T2CT	=	0xdf9c
                           00DF9D   820 _X_T2PR	=	0xdf9d
                           00DF9E   821 _X_T2CTL	=	0xdf9e
                           00DF9F   822 __X_SFR9F	=	0xdf9f
                           00DFA0   823 __NA_P2	=	0xdfa0
                           00DFA1   824 _X_WORIRQ	=	0xdfa1
                           00DFA2   825 _X_WORCTRL	=	0xdfa2
                           00DFA3   826 _X_WOREVT0	=	0xdfa3
                           00DFA4   827 _X_WOREVT1	=	0xdfa4
                           00DFA5   828 _X_WORTIME0	=	0xdfa5
                           00DFA6   829 _X_WORTIME1	=	0xdfa6
                           00DFA7   830 __X_SFRA7	=	0xdfa7
                           00DFA8   831 __NA_IEN0	=	0xdfa8
                           00DFA9   832 __NA_IP0	=	0xdfa9
                           00DFAA   833 __X_SFRAA	=	0xdfaa
                           00DFAB   834 _X_FWT	=	0xdfab
                           00DFAC   835 _X_FADDRL	=	0xdfac
                           00DFAD   836 _X_FADDRH	=	0xdfad
                           00DFAE   837 _X_FCTL	=	0xdfae
                           00DFAF   838 _X_FWDATA	=	0xdfaf
                           00DFB0   839 __X_SFRB0	=	0xdfb0
                           00DFB1   840 _X_ENCDI	=	0xdfb1
                           00DFB2   841 _X_ENCDO	=	0xdfb2
                           00DFB3   842 _X_ENCCS	=	0xdfb3
                           00DFB4   843 _X_ADCCON1	=	0xdfb4
                           00DFB5   844 _X_ADCCON2	=	0xdfb5
                           00DFB6   845 _X_ADCCON3	=	0xdfb6
                           00DFB7   846 __X_SFRB7	=	0xdfb7
                           00DFB8   847 __NA_IEN1	=	0xdfb8
                           00DFB9   848 __NA_IP1	=	0xdfb9
                           00DFBA   849 _X_ADCL	=	0xdfba
                           00DFBB   850 _X_ADCH	=	0xdfbb
                           00DFBC   851 _X_RNDL	=	0xdfbc
                           00DFBD   852 _X_RNDH	=	0xdfbd
                           00DFBE   853 _X_SLEEP	=	0xdfbe
                           00DFBF   854 __X_SFRBF	=	0xdfbf
                           00DFC0   855 __NA_IRCON	=	0xdfc0
                           00DFC1   856 _X_U0DBUF	=	0xdfc1
                           00DFC2   857 _X_U0BAUD	=	0xdfc2
                           00DFC3   858 __X_SFRC3	=	0xdfc3
                           00DFC4   859 _X_U0UCR	=	0xdfc4
                           00DFC5   860 _X_U0GCR	=	0xdfc5
                           00DFC6   861 _X_CLKCON	=	0xdfc6
                           00DFC7   862 _X_MEMCTR	=	0xdfc7
                           00DFC8   863 __X_SFRC8	=	0xdfc8
                           00DFC9   864 _X_WDCTL	=	0xdfc9
                           00DFCA   865 _X_T3CNT	=	0xdfca
                           00DFCB   866 _X_T3CTL	=	0xdfcb
                           00DFCC   867 _X_T3CCTL0	=	0xdfcc
                           00DFCD   868 _X_T3CC0	=	0xdfcd
                           00DFCE   869 _X_T3CCTL1	=	0xdfce
                           00DFCF   870 _X_T3CC1	=	0xdfcf
                           00DFD0   871 __NA_PSW	=	0xdfd0
                           00DFD1   872 _X_DMAIRQ	=	0xdfd1
                           00DFD2   873 _X_DMA1CFGL	=	0xdfd2
                           00DFD3   874 _X_DMA1CFGH	=	0xdfd3
                           00DFD4   875 _X_DMA0CFGL	=	0xdfd4
                           00DFD5   876 _X_DMA0CFGH	=	0xdfd5
                           00DFD6   877 _X_DMAARM	=	0xdfd6
                           00DFD7   878 _X_DMAREQ	=	0xdfd7
                           00DFD8   879 _X_TIMIF	=	0xdfd8
                           00DFD9   880 _X_RFD	=	0xdfd9
                           00DFDA   881 _X_T1CC0L	=	0xdfda
                           00DFDB   882 _X_T1CC0H	=	0xdfdb
                           00DFDC   883 _X_T1CC1L	=	0xdfdc
                           00DFDD   884 _X_T1CC1H	=	0xdfdd
                           00DFDE   885 _X_T1CC2L	=	0xdfde
                           00DFDF   886 _X_T1CC2H	=	0xdfdf
                           00DFE0   887 __NA_ACC	=	0xdfe0
                           00DFE1   888 _X_RFST	=	0xdfe1
                           00DFE2   889 _X_T1CNTL	=	0xdfe2
                           00DFE3   890 _X_T1CNTH	=	0xdfe3
                           00DFE4   891 _X_T1CTL	=	0xdfe4
                           00DFE5   892 _X_T1CCTL0	=	0xdfe5
                           00DFE6   893 _X_T1CCTL1	=	0xdfe6
                           00DFE7   894 _X_T1CCTL2	=	0xdfe7
                           00DFE8   895 __NA_IRCON2	=	0xdfe8
                           00DFE9   896 _X_RFIF	=	0xdfe9
                           00DFEA   897 _X_T4CNT	=	0xdfea
                           00DFEB   898 _X_T4CTL	=	0xdfeb
                           00DFEC   899 _X_T4CCTL0	=	0xdfec
                           00DFED   900 _X_T4CC0	=	0xdfed
                           00DFEE   901 _X_T4CCTL1	=	0xdfee
                           00DFEF   902 _X_T4CC1	=	0xdfef
                           00DFF0   903 __NA_B	=	0xdff0
                           00DFF1   904 _X_PERCFG	=	0xdff1
                           00DFF2   905 _X_ADCCFG	=	0xdff2
                           00DFF3   906 _X_P0SEL	=	0xdff3
                           00DFF4   907 _X_P1SEL	=	0xdff4
                           00DFF5   908 _X_P2SEL	=	0xdff5
                           00DFF6   909 _X_P1INP	=	0xdff6
                           00DFF7   910 _X_P2INP	=	0xdff7
                           00DFF8   911 _X_U1CSR	=	0xdff8
                           00DFF9   912 _X_U1DBUF	=	0xdff9
                           00DFFA   913 _X_U1BAUD	=	0xdffa
                           00DFFB   914 _X_U1UCR	=	0xdffb
                           00DFFC   915 _X_U1GCR	=	0xdffc
                           00DFFD   916 _X_P0DIR	=	0xdffd
                           00DFFE   917 _X_P1DIR	=	0xdffe
                           00DFFF   918 _X_P2DIR	=	0xdfff
      00F23D                        919 _calltxrx_PARM_2:
      00F23D                        920 	.ds 3
      00F240                        921 _calltxrx_PARM_3:
      00F240                        922 	.ds 3
      00F243                        923 _calltxrx_PARM_4:
      00F243                        924 	.ds 3
      00F246                        925 _calltxrx_c_1_45:
      00F246                        926 	.ds 3
                                    927 ;--------------------------------------------------------
                                    928 ; absolute external ram data
                                    929 ;--------------------------------------------------------
                                    930 	.area XABS    (ABS,XDATA)
                                    931 ;--------------------------------------------------------
                                    932 ; external initialized ram data
                                    933 ;--------------------------------------------------------
                                    934 	.area XISEG   (XDATA)
                                    935 	.area HOME    (CODE)
                                    936 	.area GSINIT0 (CODE)
                                    937 	.area GSINIT1 (CODE)
                                    938 	.area GSINIT2 (CODE)
                                    939 	.area GSINIT3 (CODE)
                                    940 	.area GSINIT4 (CODE)
                                    941 	.area GSINIT5 (CODE)
                                    942 	.area GSINIT  (CODE)
                                    943 	.area GSFINAL (CODE)
                                    944 	.area CSEG    (CODE)
                                    945 ;--------------------------------------------------------
                                    946 ; global & static initialisations
                                    947 ;--------------------------------------------------------
                                    948 	.area HOME    (CODE)
                                    949 	.area GSINIT  (CODE)
                                    950 	.area GSFINAL (CODE)
                                    951 	.area GSINIT  (CODE)
                                    952 ;--------------------------------------------------------
                                    953 ; Home
                                    954 ;--------------------------------------------------------
                                    955 	.area HOME    (CODE)
                                    956 	.area HOME    (CODE)
                                    957 ;--------------------------------------------------------
                                    958 ; code
                                    959 ;--------------------------------------------------------
                                    960 	.area CSEG    (CODE)
                                    961 ;------------------------------------------------------------
                                    962 ;Allocation info for local variables in function 'calltxrx'
                                    963 ;------------------------------------------------------------
                                    964 ;sloc0                     Allocated with name '_calltxrx_sloc0_1_0'
                                    965 ;sloc1                     Allocated with name '_calltxrx_sloc1_1_0'
                                    966 ;state                     Allocated with name '_calltxrx_PARM_2'
                                    967 ;waitflag                  Allocated with name '_calltxrx_PARM_3'
                                    968 ;clearflag                 Allocated with name '_calltxrx_PARM_4'
                                    969 ;c                         Allocated with name '_calltxrx_c_1_45'
                                    970 ;------------------------------------------------------------
                                    971 ;	calltxrx.c:10: calltxrx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
                                    972 ;	-----------------------------------------
                                    973 ;	 function calltxrx
                                    974 ;	-----------------------------------------
      000EB1                        975 _calltxrx:
                           000007   976 	ar7 = 0x07
                           000006   977 	ar6 = 0x06
                           000005   978 	ar5 = 0x05
                           000004   979 	ar4 = 0x04
                           000003   980 	ar3 = 0x03
                           000002   981 	ar2 = 0x02
                           000001   982 	ar1 = 0x01
                           000000   983 	ar0 = 0x00
      000EB1 AF F0            [24]  984 	mov	r7,b
      000EB3 AE 83            [24]  985 	mov	r6,dph
      000EB5 E5 82            [12]  986 	mov	a,dpl
      000EB7 90 F2 46         [24]  987 	mov	dptr,#_calltxrx_c_1_45
      000EBA F0               [24]  988 	movx	@dptr,a
      000EBB EE               [12]  989 	mov	a,r6
      000EBC A3               [24]  990 	inc	dptr
      000EBD F0               [24]  991 	movx	@dptr,a
      000EBE EF               [12]  992 	mov	a,r7
      000EBF A3               [24]  993 	inc	dptr
      000EC0 F0               [24]  994 	movx	@dptr,a
                                    995 ;	calltxrx.c:12: switch(*state){
      000EC1 90 F2 3D         [24]  996 	mov	dptr,#_calltxrx_PARM_2
      000EC4 E0               [24]  997 	movx	a,@dptr
      000EC5 FD               [12]  998 	mov	r5,a
      000EC6 A3               [24]  999 	inc	dptr
      000EC7 E0               [24] 1000 	movx	a,@dptr
      000EC8 FE               [12] 1001 	mov	r6,a
      000EC9 A3               [24] 1002 	inc	dptr
      000ECA E0               [24] 1003 	movx	a,@dptr
      000ECB FF               [12] 1004 	mov	r7,a
      000ECC 8D 82            [24] 1005 	mov	dpl,r5
      000ECE 8E 83            [24] 1006 	mov	dph,r6
      000ED0 8F F0            [24] 1007 	mov	b,r7
      000ED2 12 1F 77         [24] 1008 	lcall	__gptrget
      000ED5 FC               [12] 1009 	mov	r4,a
      000ED6 60 0F            [24] 1010 	jz	00101$
      000ED8 BC 03 03         [24] 1011 	cjne	r4,#0x03,00136$
      000EDB 02 10 3F         [24] 1012 	ljmp	00109$
      000EDE                       1013 00136$:
      000EDE BC 04 03         [24] 1014 	cjne	r4,#0x04,00137$
      000EE1 02 0F A7         [24] 1015 	ljmp	00105$
      000EE4                       1016 00137$:
      000EE4 02 11 2F         [24] 1017 	ljmp	00113$
                                   1018 ;	calltxrx.c:13: case Idle:
      000EE7                       1019 00101$:
                                   1020 ;	calltxrx.c:14: memcpy(rftxbuf, c->pkt, sizeof rftxbuf);
      000EE7 C0 05            [24] 1021 	push	ar5
      000EE9 C0 06            [24] 1022 	push	ar6
      000EEB C0 07            [24] 1023 	push	ar7
      000EED 90 F2 46         [24] 1024 	mov	dptr,#_calltxrx_c_1_45
      000EF0 E0               [24] 1025 	movx	a,@dptr
      000EF1 F9               [12] 1026 	mov	r1,a
      000EF2 A3               [24] 1027 	inc	dptr
      000EF3 E0               [24] 1028 	movx	a,@dptr
      000EF4 FA               [12] 1029 	mov	r2,a
      000EF5 A3               [24] 1030 	inc	dptr
      000EF6 E0               [24] 1031 	movx	a,@dptr
      000EF7 FB               [12] 1032 	mov	r3,a
      000EF8 74 08            [12] 1033 	mov	a,#0x08
      000EFA 29               [12] 1034 	add	a,r1
      000EFB F8               [12] 1035 	mov	r0,a
      000EFC E4               [12] 1036 	clr	a
      000EFD 3A               [12] 1037 	addc	a,r2
      000EFE FE               [12] 1038 	mov	r6,a
      000EFF 8B 07            [24] 1039 	mov	ar7,r3
      000F01 90 F2 7F         [24] 1040 	mov	dptr,#_memcpy_PARM_2
      000F04 E8               [12] 1041 	mov	a,r0
      000F05 F0               [24] 1042 	movx	@dptr,a
      000F06 EE               [12] 1043 	mov	a,r6
      000F07 A3               [24] 1044 	inc	dptr
      000F08 F0               [24] 1045 	movx	@dptr,a
      000F09 EF               [12] 1046 	mov	a,r7
      000F0A A3               [24] 1047 	inc	dptr
      000F0B F0               [24] 1048 	movx	@dptr,a
      000F0C 90 F2 82         [24] 1049 	mov	dptr,#_memcpy_PARM_3
      000F0F 74 4E            [12] 1050 	mov	a,#0x4E
      000F11 F0               [24] 1051 	movx	@dptr,a
      000F12 E4               [12] 1052 	clr	a
      000F13 A3               [24] 1053 	inc	dptr
      000F14 F0               [24] 1054 	movx	@dptr,a
      000F15 90 F1 B7         [24] 1055 	mov	dptr,#_rftxbuf
      000F18 75 F0 00         [24] 1056 	mov	b,#0x00
      000F1B C0 07            [24] 1057 	push	ar7
      000F1D C0 06            [24] 1058 	push	ar6
      000F1F C0 05            [24] 1059 	push	ar5
      000F21 C0 03            [24] 1060 	push	ar3
      000F23 C0 02            [24] 1061 	push	ar2
      000F25 C0 01            [24] 1062 	push	ar1
      000F27 12 1C DD         [24] 1063 	lcall	_memcpy
      000F2A D0 01            [24] 1064 	pop	ar1
      000F2C D0 02            [24] 1065 	pop	ar2
      000F2E D0 03            [24] 1066 	pop	ar3
      000F30 D0 05            [24] 1067 	pop	ar5
      000F32 D0 06            [24] 1068 	pop	ar6
      000F34 D0 07            [24] 1069 	pop	ar7
                                   1070 ;	calltxrx.c:16: if(c->preamblems > 0){
      000F36 74 05            [12] 1071 	mov	a,#0x05
      000F38 29               [12] 1072 	add	a,r1
      000F39 F9               [12] 1073 	mov	r1,a
      000F3A E4               [12] 1074 	clr	a
      000F3B 3A               [12] 1075 	addc	a,r2
      000F3C FA               [12] 1076 	mov	r2,a
      000F3D 89 82            [24] 1077 	mov	dpl,r1
      000F3F 8A 83            [24] 1078 	mov	dph,r2
      000F41 8B F0            [24] 1079 	mov	b,r3
      000F43 12 1F 77         [24] 1080 	lcall	__gptrget
      000F46 F5 13            [12] 1081 	mov	_calltxrx_sloc0_1_0,a
      000F48 A3               [24] 1082 	inc	dptr
      000F49 12 1F 77         [24] 1083 	lcall	__gptrget
      000F4C F5 14            [12] 1084 	mov	(_calltxrx_sloc0_1_0 + 1),a
      000F4E D0 07            [24] 1085 	pop	ar7
      000F50 D0 06            [24] 1086 	pop	ar6
      000F52 D0 05            [24] 1087 	pop	ar5
      000F54 E5 13            [12] 1088 	mov	a,_calltxrx_sloc0_1_0
      000F56 45 14            [12] 1089 	orl	a,(_calltxrx_sloc0_1_0 + 1)
      000F58 60 39            [24] 1090 	jz	00103$
                                   1091 ;	calltxrx.c:17: alarm(c->preamblems);
      000F5A 85 13 82         [24] 1092 	mov	dpl,_calltxrx_sloc0_1_0
      000F5D 85 14 83         [24] 1093 	mov	dph,(_calltxrx_sloc0_1_0 + 1)
      000F60 C0 07            [24] 1094 	push	ar7
      000F62 C0 06            [24] 1095 	push	ar6
      000F64 C0 05            [24] 1096 	push	ar5
      000F66 12 08 19         [24] 1097 	lcall	_alarm
                                   1098 ;	calltxrx.c:18: rftxpreamble();
      000F69 12 04 E7         [24] 1099 	lcall	_rftxpreamble
      000F6C D0 05            [24] 1100 	pop	ar5
      000F6E D0 06            [24] 1101 	pop	ar6
      000F70 D0 07            [24] 1102 	pop	ar7
                                   1103 ;	calltxrx.c:19: *state = Preambling;
      000F72 8D 82            [24] 1104 	mov	dpl,r5
      000F74 8E 83            [24] 1105 	mov	dph,r6
      000F76 8F F0            [24] 1106 	mov	b,r7
      000F78 74 04            [12] 1107 	mov	a,#0x04
      000F7A 12 1D 9D         [24] 1108 	lcall	__gptrput
                                   1109 ;	calltxrx.c:20: *waitflag = Falarm;
      000F7D 90 F2 40         [24] 1110 	mov	dptr,#_calltxrx_PARM_3
      000F80 E0               [24] 1111 	movx	a,@dptr
      000F81 F9               [12] 1112 	mov	r1,a
      000F82 A3               [24] 1113 	inc	dptr
      000F83 E0               [24] 1114 	movx	a,@dptr
      000F84 FA               [12] 1115 	mov	r2,a
      000F85 A3               [24] 1116 	inc	dptr
      000F86 E0               [24] 1117 	movx	a,@dptr
      000F87 FB               [12] 1118 	mov	r3,a
      000F88 89 82            [24] 1119 	mov	dpl,r1
      000F8A 8A 83            [24] 1120 	mov	dph,r2
      000F8C 8B F0            [24] 1121 	mov	b,r3
      000F8E 74 20            [12] 1122 	mov	a,#0x20
      000F90 02 1D 9D         [24] 1123 	ljmp	__gptrput
      000F93                       1124 00103$:
                                   1125 ;	calltxrx.c:22: rftx(Txrx);
      000F93 75 82 02         [24] 1126 	mov	dpl,#0x02
      000F96 C0 07            [24] 1127 	push	ar7
      000F98 C0 06            [24] 1128 	push	ar6
      000F9A C0 05            [24] 1129 	push	ar5
      000F9C 12 04 F6         [24] 1130 	lcall	_rftx
      000F9F D0 05            [24] 1131 	pop	ar5
      000FA1 D0 06            [24] 1132 	pop	ar6
      000FA3 D0 07            [24] 1133 	pop	ar7
                                   1134 ;	calltxrx.c:23: goto txrxing;
                                   1135 ;	calltxrx.c:28: case Preambling:
      000FA5 80 12            [24] 1136 	sjmp	00106$
      000FA7                       1137 00105$:
                                   1138 ;	calltxrx.c:29: rftx(Txrx|Txcontinue);
      000FA7 75 82 03         [24] 1139 	mov	dpl,#0x03
      000FAA C0 07            [24] 1140 	push	ar7
      000FAC C0 06            [24] 1141 	push	ar6
      000FAE C0 05            [24] 1142 	push	ar5
      000FB0 12 04 F6         [24] 1143 	lcall	_rftx
      000FB3 D0 05            [24] 1144 	pop	ar5
      000FB5 D0 06            [24] 1145 	pop	ar6
      000FB7 D0 07            [24] 1146 	pop	ar7
                                   1147 ;	calltxrx.c:31: txrxing:
      000FB9                       1148 00106$:
                                   1149 ;	calltxrx.c:32: *state = Txrxing;
      000FB9 8D 82            [24] 1150 	mov	dpl,r5
      000FBB 8E 83            [24] 1151 	mov	dph,r6
      000FBD 8F F0            [24] 1152 	mov	b,r7
      000FBF 74 03            [12] 1153 	mov	a,#0x03
      000FC1 12 1D 9D         [24] 1154 	lcall	__gptrput
                                   1155 ;	calltxrx.c:33: *waitflag = Frfrx;
      000FC4 90 F2 40         [24] 1156 	mov	dptr,#_calltxrx_PARM_3
      000FC7 E0               [24] 1157 	movx	a,@dptr
      000FC8 F5 15            [12] 1158 	mov	_calltxrx_sloc1_1_0,a
      000FCA A3               [24] 1159 	inc	dptr
      000FCB E0               [24] 1160 	movx	a,@dptr
      000FCC F5 16            [12] 1161 	mov	(_calltxrx_sloc1_1_0 + 1),a
      000FCE A3               [24] 1162 	inc	dptr
      000FCF E0               [24] 1163 	movx	a,@dptr
      000FD0 F5 17            [12] 1164 	mov	(_calltxrx_sloc1_1_0 + 2),a
      000FD2 85 15 82         [24] 1165 	mov	dpl,_calltxrx_sloc1_1_0
      000FD5 85 16 83         [24] 1166 	mov	dph,(_calltxrx_sloc1_1_0 + 1)
      000FD8 85 17 F0         [24] 1167 	mov	b,(_calltxrx_sloc1_1_0 + 2)
      000FDB 74 04            [12] 1168 	mov	a,#0x04
      000FDD 12 1D 9D         [24] 1169 	lcall	__gptrput
                                   1170 ;	calltxrx.c:34: *clearflag = Frftx;
      000FE0 90 F2 43         [24] 1171 	mov	dptr,#_calltxrx_PARM_4
      000FE3 E0               [24] 1172 	movx	a,@dptr
      000FE4 F8               [12] 1173 	mov	r0,a
      000FE5 A3               [24] 1174 	inc	dptr
      000FE6 E0               [24] 1175 	movx	a,@dptr
      000FE7 FA               [12] 1176 	mov	r2,a
      000FE8 A3               [24] 1177 	inc	dptr
      000FE9 E0               [24] 1178 	movx	a,@dptr
      000FEA FB               [12] 1179 	mov	r3,a
      000FEB 88 82            [24] 1180 	mov	dpl,r0
      000FED 8A 83            [24] 1181 	mov	dph,r2
      000FEF 8B F0            [24] 1182 	mov	b,r3
      000FF1 74 08            [12] 1183 	mov	a,#0x08
      000FF3 12 1D 9D         [24] 1184 	lcall	__gptrput
                                   1185 ;	calltxrx.c:35: if(c->timeoutms > 0){
      000FF6 90 F2 46         [24] 1186 	mov	dptr,#_calltxrx_c_1_45
      000FF9 E0               [24] 1187 	movx	a,@dptr
      000FFA F9               [12] 1188 	mov	r1,a
      000FFB A3               [24] 1189 	inc	dptr
      000FFC E0               [24] 1190 	movx	a,@dptr
      000FFD FA               [12] 1191 	mov	r2,a
      000FFE A3               [24] 1192 	inc	dptr
      000FFF E0               [24] 1193 	movx	a,@dptr
      001000 FB               [12] 1194 	mov	r3,a
      001001 74 03            [12] 1195 	mov	a,#0x03
      001003 29               [12] 1196 	add	a,r1
      001004 F9               [12] 1197 	mov	r1,a
      001005 E4               [12] 1198 	clr	a
      001006 3A               [12] 1199 	addc	a,r2
      001007 FA               [12] 1200 	mov	r2,a
      001008 89 82            [24] 1201 	mov	dpl,r1
      00100A 8A 83            [24] 1202 	mov	dph,r2
      00100C 8B F0            [24] 1203 	mov	b,r3
      00100E 12 1F 77         [24] 1204 	lcall	__gptrget
      001011 FA               [12] 1205 	mov	r2,a
      001012 A3               [24] 1206 	inc	dptr
      001013 12 1F 77         [24] 1207 	lcall	__gptrget
      001016 FB               [12] 1208 	mov	r3,a
      001017 4A               [12] 1209 	orl	a,r2
      001018 70 01            [24] 1210 	jnz	00139$
      00101A 22               [24] 1211 	ret
      00101B                       1212 00139$:
                                   1213 ;	calltxrx.c:36: alarm(c->timeoutms);
      00101B 8A 82            [24] 1214 	mov	dpl,r2
      00101D 8B 83            [24] 1215 	mov	dph,r3
      00101F 12 08 19         [24] 1216 	lcall	_alarm
                                   1217 ;	calltxrx.c:37: *waitflag |= Falarm;
      001022 85 15 82         [24] 1218 	mov	dpl,_calltxrx_sloc1_1_0
      001025 85 16 83         [24] 1219 	mov	dph,(_calltxrx_sloc1_1_0 + 1)
      001028 85 17 F0         [24] 1220 	mov	b,(_calltxrx_sloc1_1_0 + 2)
      00102B 12 1F 77         [24] 1221 	lcall	__gptrget
      00102E FB               [12] 1222 	mov	r3,a
      00102F 43 03 20         [24] 1223 	orl	ar3,#0x20
      001032 85 15 82         [24] 1224 	mov	dpl,_calltxrx_sloc1_1_0
      001035 85 16 83         [24] 1225 	mov	dph,(_calltxrx_sloc1_1_0 + 1)
      001038 85 17 F0         [24] 1226 	mov	b,(_calltxrx_sloc1_1_0 + 2)
      00103B EB               [12] 1227 	mov	a,r3
                                   1228 ;	calltxrx.c:39: break;
      00103C 02 1D 9D         [24] 1229 	ljmp	__gptrput
                                   1230 ;	calltxrx.c:41: case Txrxing:
      00103F                       1231 00109$:
                                   1232 ;	calltxrx.c:42: rfidle();
      00103F C0 07            [24] 1233 	push	ar7
      001041 C0 06            [24] 1234 	push	ar6
      001043 C0 05            [24] 1235 	push	ar5
      001045 12 04 BF         [24] 1236 	lcall	_rfidle
      001048 D0 05            [24] 1237 	pop	ar5
      00104A D0 06            [24] 1238 	pop	ar6
      00104C D0 07            [24] 1239 	pop	ar7
                                   1240 ;	calltxrx.c:43: if(*waitflag&Falarm){
      00104E 90 F2 40         [24] 1241 	mov	dptr,#_calltxrx_PARM_3
      001051 E0               [24] 1242 	movx	a,@dptr
      001052 F9               [12] 1243 	mov	r1,a
      001053 A3               [24] 1244 	inc	dptr
      001054 E0               [24] 1245 	movx	a,@dptr
      001055 FA               [12] 1246 	mov	r2,a
      001056 A3               [24] 1247 	inc	dptr
      001057 E0               [24] 1248 	movx	a,@dptr
      001058 FB               [12] 1249 	mov	r3,a
      001059 89 82            [24] 1250 	mov	dpl,r1
      00105B 8A 83            [24] 1251 	mov	dph,r2
      00105D 8B F0            [24] 1252 	mov	b,r3
      00105F 12 1F 77         [24] 1253 	lcall	__gptrget
      001062 F8               [12] 1254 	mov	r0,a
      001063 30 E5 36         [24] 1255 	jnb	acc.5,00111$
                                   1256 ;	calltxrx.c:44: c->type = Rerr;
      001066 C0 01            [24] 1257 	push	ar1
      001068 C0 02            [24] 1258 	push	ar2
      00106A C0 03            [24] 1259 	push	ar3
      00106C 90 F2 46         [24] 1260 	mov	dptr,#_calltxrx_c_1_45
      00106F E0               [24] 1261 	movx	a,@dptr
      001070 F8               [12] 1262 	mov	r0,a
      001071 A3               [24] 1263 	inc	dptr
      001072 E0               [24] 1264 	movx	a,@dptr
      001073 FA               [12] 1265 	mov	r2,a
      001074 A3               [24] 1266 	inc	dptr
      001075 E0               [24] 1267 	movx	a,@dptr
      001076 FB               [12] 1268 	mov	r3,a
      001077 88 82            [24] 1269 	mov	dpl,r0
      001079 8A 83            [24] 1270 	mov	dph,r2
      00107B 8B F0            [24] 1271 	mov	b,r3
      00107D 74 80            [12] 1272 	mov	a,#0x80
      00107F 12 1D 9D         [24] 1273 	lcall	__gptrput
                                   1274 ;	calltxrx.c:45: c->err = Etimeout;
      001082 74 02            [12] 1275 	mov	a,#0x02
      001084 28               [12] 1276 	add	a,r0
      001085 F8               [12] 1277 	mov	r0,a
      001086 E4               [12] 1278 	clr	a
      001087 3A               [12] 1279 	addc	a,r2
      001088 FA               [12] 1280 	mov	r2,a
      001089 88 82            [24] 1281 	mov	dpl,r0
      00108B 8A 83            [24] 1282 	mov	dph,r2
      00108D 8B F0            [24] 1283 	mov	b,r3
      00108F 74 03            [12] 1284 	mov	a,#0x03
      001091 12 1D 9D         [24] 1285 	lcall	__gptrput
      001094 D0 03            [24] 1286 	pop	ar3
      001096 D0 02            [24] 1287 	pop	ar2
      001098 D0 01            [24] 1288 	pop	ar1
      00109A 80 60            [24] 1289 	sjmp	00112$
      00109C                       1290 00111$:
                                   1291 ;	calltxrx.c:47: c->type = Rtxrx;
      00109C C0 01            [24] 1292 	push	ar1
      00109E C0 02            [24] 1293 	push	ar2
      0010A0 C0 03            [24] 1294 	push	ar3
      0010A2 90 F2 46         [24] 1295 	mov	dptr,#_calltxrx_c_1_45
      0010A5 E0               [24] 1296 	movx	a,@dptr
      0010A6 F8               [12] 1297 	mov	r0,a
      0010A7 A3               [24] 1298 	inc	dptr
      0010A8 E0               [24] 1299 	movx	a,@dptr
      0010A9 FA               [12] 1300 	mov	r2,a
      0010AA A3               [24] 1301 	inc	dptr
      0010AB E0               [24] 1302 	movx	a,@dptr
      0010AC FB               [12] 1303 	mov	r3,a
      0010AD 88 82            [24] 1304 	mov	dpl,r0
      0010AF 8A 83            [24] 1305 	mov	dph,r2
      0010B1 8B F0            [24] 1306 	mov	b,r3
      0010B3 74 06            [12] 1307 	mov	a,#0x06
      0010B5 12 1D 9D         [24] 1308 	lcall	__gptrput
                                   1309 ;	calltxrx.c:48: memcpy(&c->pkt, rfrxbuf, sizeof c->pkt);
      0010B8 74 08            [12] 1310 	mov	a,#0x08
      0010BA 28               [12] 1311 	add	a,r0
      0010BB F8               [12] 1312 	mov	r0,a
      0010BC E4               [12] 1313 	clr	a
      0010BD 3A               [12] 1314 	addc	a,r2
      0010BE FA               [12] 1315 	mov	r2,a
      0010BF 90 F2 7F         [24] 1316 	mov	dptr,#_memcpy_PARM_2
      0010C2 74 68            [12] 1317 	mov	a,#_rfrxbuf
      0010C4 F0               [24] 1318 	movx	@dptr,a
      0010C5 74 F1            [12] 1319 	mov	a,#(_rfrxbuf >> 8)
      0010C7 A3               [24] 1320 	inc	dptr
      0010C8 F0               [24] 1321 	movx	@dptr,a
      0010C9 E4               [12] 1322 	clr	a
      0010CA A3               [24] 1323 	inc	dptr
      0010CB F0               [24] 1324 	movx	@dptr,a
      0010CC 90 F2 82         [24] 1325 	mov	dptr,#_memcpy_PARM_3
      0010CF 74 4E            [12] 1326 	mov	a,#0x4E
      0010D1 F0               [24] 1327 	movx	@dptr,a
      0010D2 E4               [12] 1328 	clr	a
      0010D3 A3               [24] 1329 	inc	dptr
      0010D4 F0               [24] 1330 	movx	@dptr,a
      0010D5 88 82            [24] 1331 	mov	dpl,r0
      0010D7 8A 83            [24] 1332 	mov	dph,r2
      0010D9 8B F0            [24] 1333 	mov	b,r3
      0010DB C0 07            [24] 1334 	push	ar7
      0010DD C0 06            [24] 1335 	push	ar6
      0010DF C0 05            [24] 1336 	push	ar5
      0010E1 C0 03            [24] 1337 	push	ar3
      0010E3 C0 02            [24] 1338 	push	ar2
      0010E5 C0 01            [24] 1339 	push	ar1
      0010E7 12 1C DD         [24] 1340 	lcall	_memcpy
      0010EA D0 01            [24] 1341 	pop	ar1
      0010EC D0 02            [24] 1342 	pop	ar2
      0010EE D0 03            [24] 1343 	pop	ar3
      0010F0 D0 05            [24] 1344 	pop	ar5
      0010F2 D0 06            [24] 1345 	pop	ar6
      0010F4 D0 07            [24] 1346 	pop	ar7
                                   1347 ;	calltxrx.c:57: }
      0010F6 D0 03            [24] 1348 	pop	ar3
      0010F8 D0 02            [24] 1349 	pop	ar2
      0010FA D0 01            [24] 1350 	pop	ar1
                                   1351 ;	calltxrx.c:48: memcpy(&c->pkt, rfrxbuf, sizeof c->pkt);
      0010FC                       1352 00112$:
                                   1353 ;	calltxrx.c:50: alarm(0);
      0010FC 90 00 00         [24] 1354 	mov	dptr,#0x0000
      0010FF C0 07            [24] 1355 	push	ar7
      001101 C0 06            [24] 1356 	push	ar6
      001103 C0 05            [24] 1357 	push	ar5
      001105 C0 03            [24] 1358 	push	ar3
      001107 C0 02            [24] 1359 	push	ar2
      001109 C0 01            [24] 1360 	push	ar1
      00110B 12 08 19         [24] 1361 	lcall	_alarm
      00110E D0 01            [24] 1362 	pop	ar1
      001110 D0 02            [24] 1363 	pop	ar2
      001112 D0 03            [24] 1364 	pop	ar3
      001114 D0 05            [24] 1365 	pop	ar5
      001116 D0 06            [24] 1366 	pop	ar6
      001118 D0 07            [24] 1367 	pop	ar7
                                   1368 ;	calltxrx.c:51: *state = Reply;
      00111A 8D 82            [24] 1369 	mov	dpl,r5
      00111C 8E 83            [24] 1370 	mov	dph,r6
      00111E 8F F0            [24] 1371 	mov	b,r7
      001120 74 01            [12] 1372 	mov	a,#0x01
      001122 12 1D 9D         [24] 1373 	lcall	__gptrput
                                   1374 ;	calltxrx.c:52: *waitflag = 0;
      001125 89 82            [24] 1375 	mov	dpl,r1
      001127 8A 83            [24] 1376 	mov	dph,r2
      001129 8B F0            [24] 1377 	mov	b,r3
      00112B E4               [12] 1378 	clr	a
                                   1379 ;	calltxrx.c:53: break;
                                   1380 ;	calltxrx.c:55: default:
      00112C 02 1D 9D         [24] 1381 	ljmp	__gptrput
      00112F                       1382 00113$:
                                   1383 ;	calltxrx.c:56: panic("Unknown state %d", *state);
      00112F 7F 00            [12] 1384 	mov	r7,#0x00
      001131 C0 04            [24] 1385 	push	ar4
      001133 C0 07            [24] 1386 	push	ar7
      001135 74 4A            [12] 1387 	mov	a,#___str_0
      001137 C0 E0            [24] 1388 	push	acc
      001139 74 20            [12] 1389 	mov	a,#(___str_0 >> 8)
      00113B C0 E0            [24] 1390 	push	acc
      00113D 74 80            [12] 1391 	mov	a,#0x80
      00113F C0 E0            [24] 1392 	push	acc
      001141 12 1B A6         [24] 1393 	lcall	_panic
      001144 E5 81            [12] 1394 	mov	a,sp
      001146 24 FB            [12] 1395 	add	a,#0xfb
      001148 F5 81            [12] 1396 	mov	sp,a
                                   1397 ;	calltxrx.c:57: }
      00114A 22               [24] 1398 	ret
                                   1399 	.area CSEG    (CODE)
                                   1400 	.area CONST   (CODE)
      00204A                       1401 ___str_0:
      00204A 55 6E 6B 6E 6F 77 6E  1402 	.ascii "Unknown state %d"
             20 73 74 61 74 65 20
             25 64
      00205A 00                    1403 	.db 0x00
                                   1404 	.area XINIT   (CODE)
                                   1405 	.area CABS    (ABS,CODE)
