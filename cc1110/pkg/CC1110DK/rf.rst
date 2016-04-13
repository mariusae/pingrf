                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 21:19:18 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module rf
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _rfrfintr
                                     13 	.globl _rftxrxintr
                                     14 	.globl _panic
                                     15 	.globl _MODE
                                     16 	.globl _RE
                                     17 	.globl _SLAVE
                                     18 	.globl _FE
                                     19 	.globl _ERR
                                     20 	.globl _RX_BYTE
                                     21 	.globl _TX_BYTE
                                     22 	.globl _ACTIVE
                                     23 	.globl _B_7
                                     24 	.globl _B_6
                                     25 	.globl _B_5
                                     26 	.globl _B_4
                                     27 	.globl _B_3
                                     28 	.globl _B_2
                                     29 	.globl _B_1
                                     30 	.globl _B_0
                                     31 	.globl _WDTIF
                                     32 	.globl _P1IF
                                     33 	.globl _UTX1IF
                                     34 	.globl _UTX0IF
                                     35 	.globl _P2IF
                                     36 	.globl _ACC_7
                                     37 	.globl _ACC_6
                                     38 	.globl _ACC_5
                                     39 	.globl _ACC_4
                                     40 	.globl _ACC_3
                                     41 	.globl _ACC_2
                                     42 	.globl _ACC_1
                                     43 	.globl _ACC_0
                                     44 	.globl _OVFIM
                                     45 	.globl _T4CH1IF
                                     46 	.globl _T4CH0IF
                                     47 	.globl _T4OVFIF
                                     48 	.globl _T3CH1IF
                                     49 	.globl _T3CH0IF
                                     50 	.globl _T3OVFIF
                                     51 	.globl _CY
                                     52 	.globl _AC
                                     53 	.globl _F0
                                     54 	.globl _RS1
                                     55 	.globl _RS0
                                     56 	.globl _OV
                                     57 	.globl _F1
                                     58 	.globl _P
                                     59 	.globl _STIF
                                     60 	.globl _P0IF
                                     61 	.globl _T4IF
                                     62 	.globl _T3IF
                                     63 	.globl _T2IF
                                     64 	.globl _T1IF
                                     65 	.globl _DMAIF
                                     66 	.globl _P0IE
                                     67 	.globl _T4IE
                                     68 	.globl _T3IE
                                     69 	.globl _T2IE
                                     70 	.globl _T1IE
                                     71 	.globl _DMAIE
                                     72 	.globl _EA
                                     73 	.globl _STIE
                                     74 	.globl _ENCIE
                                     75 	.globl _URX1IE
                                     76 	.globl _URX0IE
                                     77 	.globl _ADCIE
                                     78 	.globl _RFTXRXIE
                                     79 	.globl _P2_7
                                     80 	.globl _P2_6
                                     81 	.globl _P2_5
                                     82 	.globl _P2_4
                                     83 	.globl _P2_3
                                     84 	.globl _P2_2
                                     85 	.globl _P2_1
                                     86 	.globl _P2_0
                                     87 	.globl _ENCIF_1
                                     88 	.globl _ENCIF_0
                                     89 	.globl _P1_7
                                     90 	.globl _P1_6
                                     91 	.globl _P1_5
                                     92 	.globl _P1_4
                                     93 	.globl _P1_3
                                     94 	.globl _P1_2
                                     95 	.globl _P1_1
                                     96 	.globl _P1_0
                                     97 	.globl _URX1IF
                                     98 	.globl _ADCIF
                                     99 	.globl _URX0IF
                                    100 	.globl _IT1
                                    101 	.globl _RFTXRXIF
                                    102 	.globl _IT0
                                    103 	.globl _P0_7
                                    104 	.globl _P0_6
                                    105 	.globl _P0_5
                                    106 	.globl _P0_4
                                    107 	.globl _P0_3
                                    108 	.globl _P0_2
                                    109 	.globl _P0_1
                                    110 	.globl _P0_0
                                    111 	.globl _P2DIR
                                    112 	.globl _P1DIR
                                    113 	.globl _P0DIR
                                    114 	.globl _U1GCR
                                    115 	.globl _U1UCR
                                    116 	.globl _U1BAUD
                                    117 	.globl _U1DBUF
                                    118 	.globl _U1CSR
                                    119 	.globl _P2INP
                                    120 	.globl _P1INP
                                    121 	.globl _P2SEL
                                    122 	.globl _P1SEL
                                    123 	.globl _P0SEL
                                    124 	.globl _ADCCFG
                                    125 	.globl _PERCFG
                                    126 	.globl _B
                                    127 	.globl _T4CC1
                                    128 	.globl _T4CCTL1
                                    129 	.globl _T4CC0
                                    130 	.globl _T4CCTL0
                                    131 	.globl _T4CTL
                                    132 	.globl _T4CNT
                                    133 	.globl _RFIF
                                    134 	.globl _IRCON2
                                    135 	.globl _T1CCTL2
                                    136 	.globl _T1CCTL1
                                    137 	.globl _T1CCTL0
                                    138 	.globl _T1CTL
                                    139 	.globl _T1CNTH
                                    140 	.globl _T1CNTL
                                    141 	.globl _RFST
                                    142 	.globl _ACC
                                    143 	.globl _T1CC2H
                                    144 	.globl _T1CC2L
                                    145 	.globl _T1CC1H
                                    146 	.globl _T1CC1L
                                    147 	.globl _T1CC0H
                                    148 	.globl _T1CC0L
                                    149 	.globl _RFD
                                    150 	.globl _TIMIF
                                    151 	.globl _DMAREQ
                                    152 	.globl _DMAARM
                                    153 	.globl _DMA0CFGH
                                    154 	.globl _DMA0CFGL
                                    155 	.globl _DMA1CFGH
                                    156 	.globl _DMA1CFGL
                                    157 	.globl _DMAIRQ
                                    158 	.globl _PSW
                                    159 	.globl _T3CC1
                                    160 	.globl _T3CCTL1
                                    161 	.globl _T3CC0
                                    162 	.globl _T3CCTL0
                                    163 	.globl _T3CTL
                                    164 	.globl _T3CNT
                                    165 	.globl _WDCTL
                                    166 	.globl __SFRC8
                                    167 	.globl _MEMCTR
                                    168 	.globl _CLKCON
                                    169 	.globl _U0GCR
                                    170 	.globl _U0UCR
                                    171 	.globl __SFRC3
                                    172 	.globl _U0BAUD
                                    173 	.globl _U0DBUF
                                    174 	.globl _IRCON
                                    175 	.globl __SFRBF
                                    176 	.globl _SLEEP
                                    177 	.globl _RNDH
                                    178 	.globl _RNDL
                                    179 	.globl _ADCH
                                    180 	.globl _ADCL
                                    181 	.globl _IP1
                                    182 	.globl _IEN1
                                    183 	.globl __SFRB7
                                    184 	.globl _ADCCON3
                                    185 	.globl _ADCCON2
                                    186 	.globl _ADCCON1
                                    187 	.globl _ENCCS
                                    188 	.globl _ENCDO
                                    189 	.globl _ENCDI
                                    190 	.globl __SFRB0
                                    191 	.globl _FWDATA
                                    192 	.globl _FCTL
                                    193 	.globl _FADDRH
                                    194 	.globl _FADDRL
                                    195 	.globl _FWT
                                    196 	.globl __SFRAA
                                    197 	.globl _IP0
                                    198 	.globl _IEN0
                                    199 	.globl __SFRA7
                                    200 	.globl _WORTIME1
                                    201 	.globl _WORTIME0
                                    202 	.globl _WOREVT1
                                    203 	.globl _WOREVT0
                                    204 	.globl _WORCTRL
                                    205 	.globl _WORIRQ
                                    206 	.globl _P2
                                    207 	.globl __SFR9F
                                    208 	.globl _T2CTL
                                    209 	.globl _T2PR
                                    210 	.globl _T2CT
                                    211 	.globl _S1CON
                                    212 	.globl _IEN2
                                    213 	.globl __SFR99
                                    214 	.globl _S0CON
                                    215 	.globl __SFR97
                                    216 	.globl __SFR96
                                    217 	.globl __SFR95
                                    218 	.globl __SFR94
                                    219 	.globl __XPAGE
                                    220 	.globl _MPAGE
                                    221 	.globl _DPS
                                    222 	.globl _RFIM
                                    223 	.globl _P1
                                    224 	.globl _P0INP
                                    225 	.globl __SFR8E
                                    226 	.globl _P1IEN
                                    227 	.globl _PICTL
                                    228 	.globl _P2IFG
                                    229 	.globl _P1IFG
                                    230 	.globl _P0IFG
                                    231 	.globl _TCON
                                    232 	.globl _PCON
                                    233 	.globl _U0CSR
                                    234 	.globl _DPH1
                                    235 	.globl _DPL1
                                    236 	.globl _DPH0
                                    237 	.globl _DPL0
                                    238 	.globl _SP
                                    239 	.globl _P0
                                    240 	.globl _rftxbuf
                                    241 	.globl _rfrxbuf
                                    242 	.globl _X_P2DIR
                                    243 	.globl _X_P1DIR
                                    244 	.globl _X_P0DIR
                                    245 	.globl _X_U1GCR
                                    246 	.globl _X_U1UCR
                                    247 	.globl _X_U1BAUD
                                    248 	.globl _X_U1DBUF
                                    249 	.globl _X_U1CSR
                                    250 	.globl _X_P2INP
                                    251 	.globl _X_P1INP
                                    252 	.globl _X_P2SEL
                                    253 	.globl _X_P1SEL
                                    254 	.globl _X_P0SEL
                                    255 	.globl _X_ADCCFG
                                    256 	.globl _X_PERCFG
                                    257 	.globl __NA_B
                                    258 	.globl _X_T4CC1
                                    259 	.globl _X_T4CCTL1
                                    260 	.globl _X_T4CC0
                                    261 	.globl _X_T4CCTL0
                                    262 	.globl _X_T4CTL
                                    263 	.globl _X_T4CNT
                                    264 	.globl _X_RFIF
                                    265 	.globl __NA_IRCON2
                                    266 	.globl _X_T1CCTL2
                                    267 	.globl _X_T1CCTL1
                                    268 	.globl _X_T1CCTL0
                                    269 	.globl _X_T1CTL
                                    270 	.globl _X_T1CNTH
                                    271 	.globl _X_T1CNTL
                                    272 	.globl _X_RFST
                                    273 	.globl __NA_ACC
                                    274 	.globl _X_T1CC2H
                                    275 	.globl _X_T1CC2L
                                    276 	.globl _X_T1CC1H
                                    277 	.globl _X_T1CC1L
                                    278 	.globl _X_T1CC0H
                                    279 	.globl _X_T1CC0L
                                    280 	.globl _X_RFD
                                    281 	.globl _X_TIMIF
                                    282 	.globl _X_DMAREQ
                                    283 	.globl _X_DMAARM
                                    284 	.globl _X_DMA0CFGH
                                    285 	.globl _X_DMA0CFGL
                                    286 	.globl _X_DMA1CFGH
                                    287 	.globl _X_DMA1CFGL
                                    288 	.globl _X_DMAIRQ
                                    289 	.globl __NA_PSW
                                    290 	.globl _X_T3CC1
                                    291 	.globl _X_T3CCTL1
                                    292 	.globl _X_T3CC0
                                    293 	.globl _X_T3CCTL0
                                    294 	.globl _X_T3CTL
                                    295 	.globl _X_T3CNT
                                    296 	.globl _X_WDCTL
                                    297 	.globl __X_SFRC8
                                    298 	.globl _X_MEMCTR
                                    299 	.globl _X_CLKCON
                                    300 	.globl _X_U0GCR
                                    301 	.globl _X_U0UCR
                                    302 	.globl __X_SFRC3
                                    303 	.globl _X_U0BAUD
                                    304 	.globl _X_U0DBUF
                                    305 	.globl __NA_IRCON
                                    306 	.globl __X_SFRBF
                                    307 	.globl _X_SLEEP
                                    308 	.globl _X_RNDH
                                    309 	.globl _X_RNDL
                                    310 	.globl _X_ADCH
                                    311 	.globl _X_ADCL
                                    312 	.globl __NA_IP1
                                    313 	.globl __NA_IEN1
                                    314 	.globl __X_SFRB7
                                    315 	.globl _X_ADCCON3
                                    316 	.globl _X_ADCCON2
                                    317 	.globl _X_ADCCON1
                                    318 	.globl _X_ENCCS
                                    319 	.globl _X_ENCDO
                                    320 	.globl _X_ENCDI
                                    321 	.globl __X_SFRB0
                                    322 	.globl _X_FWDATA
                                    323 	.globl _X_FCTL
                                    324 	.globl _X_FADDRH
                                    325 	.globl _X_FADDRL
                                    326 	.globl _X_FWT
                                    327 	.globl __X_SFRAA
                                    328 	.globl __NA_IP0
                                    329 	.globl __NA_IEN0
                                    330 	.globl __X_SFRA7
                                    331 	.globl _X_WORTIME1
                                    332 	.globl _X_WORTIME0
                                    333 	.globl _X_WOREVT1
                                    334 	.globl _X_WOREVT0
                                    335 	.globl _X_WORCTRL
                                    336 	.globl _X_WORIRQ
                                    337 	.globl __NA_P2
                                    338 	.globl __X_SFR9F
                                    339 	.globl _X_T2CTL
                                    340 	.globl _X_T2PR
                                    341 	.globl _X_T2CT
                                    342 	.globl __NA_S1CON
                                    343 	.globl __NA_IEN2
                                    344 	.globl __X_SFR99
                                    345 	.globl __NA_S0CON
                                    346 	.globl __X_SFR97
                                    347 	.globl __X_SFR96
                                    348 	.globl __X_SFR95
                                    349 	.globl __X_SFR94
                                    350 	.globl _X_MPAGE
                                    351 	.globl __NA_DPS
                                    352 	.globl _X_RFIM
                                    353 	.globl __NA_P1
                                    354 	.globl _X_P0INP
                                    355 	.globl __X_SFR8E
                                    356 	.globl _X_P1IEN
                                    357 	.globl _X_PICTL
                                    358 	.globl _X_P2IFG
                                    359 	.globl _X_P1IFG
                                    360 	.globl _X_P0IFG
                                    361 	.globl __NA_TCON
                                    362 	.globl __NA_PCON
                                    363 	.globl _X_U0CSR
                                    364 	.globl __NA_DPH1
                                    365 	.globl __NA_DPL1
                                    366 	.globl __NA_DPH0
                                    367 	.globl __NA_DPL0
                                    368 	.globl __NA_SP
                                    369 	.globl __NA_P0
                                    370 	.globl _I2SCLKF2
                                    371 	.globl _I2SCLKF1
                                    372 	.globl _I2SCLKF0
                                    373 	.globl _I2SSTAT
                                    374 	.globl _I2SWCNT
                                    375 	.globl _I2SDATH
                                    376 	.globl _I2SDATL
                                    377 	.globl _I2SCFG1
                                    378 	.globl _I2SCFG0
                                    379 	.globl _VCO_VC_DAC
                                    380 	.globl _PKTSTATUS
                                    381 	.globl _MARCSTATE
                                    382 	.globl _RSSI
                                    383 	.globl _LQI
                                    384 	.globl _FREQEST
                                    385 	.globl _VERSION
                                    386 	.globl _PARTNUM
                                    387 	.globl __XREGDF35
                                    388 	.globl __XREGDF34
                                    389 	.globl __XREGDF33
                                    390 	.globl __XREGDF32
                                    391 	.globl _IOCFG0
                                    392 	.globl _IOCFG1
                                    393 	.globl _IOCFG2
                                    394 	.globl _PA_TABLE0
                                    395 	.globl _PA_TABLE1
                                    396 	.globl _PA_TABLE2
                                    397 	.globl _PA_TABLE3
                                    398 	.globl _PA_TABLE4
                                    399 	.globl _PA_TABLE5
                                    400 	.globl _PA_TABLE6
                                    401 	.globl _PA_TABLE7
                                    402 	.globl __XREGDF26
                                    403 	.globl _TEST0
                                    404 	.globl _TEST1
                                    405 	.globl _TEST2
                                    406 	.globl __XREGDF22
                                    407 	.globl __XREGDF21
                                    408 	.globl __XREGDF20
                                    409 	.globl _FSCAL0
                                    410 	.globl _FSCAL1
                                    411 	.globl _FSCAL2
                                    412 	.globl _FSCAL3
                                    413 	.globl _FREND0
                                    414 	.globl _FREND1
                                    415 	.globl _AGCCTRL0
                                    416 	.globl _AGCCTRL1
                                    417 	.globl _AGCCTRL2
                                    418 	.globl _BSCFG
                                    419 	.globl _FOCCFG
                                    420 	.globl _MCSM0
                                    421 	.globl _MCSM1
                                    422 	.globl _MCSM2
                                    423 	.globl _DEVIATN
                                    424 	.globl _MDMCFG0
                                    425 	.globl _MDMCFG1
                                    426 	.globl _MDMCFG2
                                    427 	.globl _MDMCFG3
                                    428 	.globl _MDMCFG4
                                    429 	.globl _FREQ0
                                    430 	.globl _FREQ1
                                    431 	.globl _FREQ2
                                    432 	.globl _FSCTRL0
                                    433 	.globl _FSCTRL1
                                    434 	.globl _CHANNR
                                    435 	.globl _ADDR
                                    436 	.globl _PKTCTRL0
                                    437 	.globl _PKTCTRL1
                                    438 	.globl _PKTLEN
                                    439 	.globl _SYNC0
                                    440 	.globl _SYNC1
                                    441 	.globl _MDMCTRL0H
                                    442 	.globl _rfinit
                                    443 	.globl _rfidle
                                    444 	.globl _rfrx
                                    445 	.globl _rftxpreamble
                                    446 	.globl _rftx
                                    447 	.globl _rfwakeup
                                    448 ;--------------------------------------------------------
                                    449 ; special function registers
                                    450 ;--------------------------------------------------------
                                    451 	.area RSEG    (ABS,DATA)
      000000                        452 	.org 0x0000
                           000080   453 _P0	=	0x0080
                           000081   454 _SP	=	0x0081
                           000082   455 _DPL0	=	0x0082
                           000083   456 _DPH0	=	0x0083
                           000084   457 _DPL1	=	0x0084
                           000085   458 _DPH1	=	0x0085
                           000086   459 _U0CSR	=	0x0086
                           000087   460 _PCON	=	0x0087
                           000088   461 _TCON	=	0x0088
                           000089   462 _P0IFG	=	0x0089
                           00008A   463 _P1IFG	=	0x008a
                           00008B   464 _P2IFG	=	0x008b
                           00008C   465 _PICTL	=	0x008c
                           00008D   466 _P1IEN	=	0x008d
                           00008E   467 __SFR8E	=	0x008e
                           00008F   468 _P0INP	=	0x008f
                           000090   469 _P1	=	0x0090
                           000091   470 _RFIM	=	0x0091
                           000092   471 _DPS	=	0x0092
                           000093   472 _MPAGE	=	0x0093
                           000093   473 __XPAGE	=	0x0093
                           000094   474 __SFR94	=	0x0094
                           000095   475 __SFR95	=	0x0095
                           000096   476 __SFR96	=	0x0096
                           000097   477 __SFR97	=	0x0097
                           000098   478 _S0CON	=	0x0098
                           000099   479 __SFR99	=	0x0099
                           00009A   480 _IEN2	=	0x009a
                           00009B   481 _S1CON	=	0x009b
                           00009C   482 _T2CT	=	0x009c
                           00009D   483 _T2PR	=	0x009d
                           00009E   484 _T2CTL	=	0x009e
                           00009F   485 __SFR9F	=	0x009f
                           0000A0   486 _P2	=	0x00a0
                           0000A1   487 _WORIRQ	=	0x00a1
                           0000A2   488 _WORCTRL	=	0x00a2
                           0000A3   489 _WOREVT0	=	0x00a3
                           0000A4   490 _WOREVT1	=	0x00a4
                           0000A5   491 _WORTIME0	=	0x00a5
                           0000A6   492 _WORTIME1	=	0x00a6
                           0000A7   493 __SFRA7	=	0x00a7
                           0000A8   494 _IEN0	=	0x00a8
                           0000A9   495 _IP0	=	0x00a9
                           0000AA   496 __SFRAA	=	0x00aa
                           0000AB   497 _FWT	=	0x00ab
                           0000AC   498 _FADDRL	=	0x00ac
                           0000AD   499 _FADDRH	=	0x00ad
                           0000AE   500 _FCTL	=	0x00ae
                           0000AF   501 _FWDATA	=	0x00af
                           0000B0   502 __SFRB0	=	0x00b0
                           0000B1   503 _ENCDI	=	0x00b1
                           0000B2   504 _ENCDO	=	0x00b2
                           0000B3   505 _ENCCS	=	0x00b3
                           0000B4   506 _ADCCON1	=	0x00b4
                           0000B5   507 _ADCCON2	=	0x00b5
                           0000B6   508 _ADCCON3	=	0x00b6
                           0000B7   509 __SFRB7	=	0x00b7
                           0000B8   510 _IEN1	=	0x00b8
                           0000B9   511 _IP1	=	0x00b9
                           0000BA   512 _ADCL	=	0x00ba
                           0000BB   513 _ADCH	=	0x00bb
                           0000BC   514 _RNDL	=	0x00bc
                           0000BD   515 _RNDH	=	0x00bd
                           0000BE   516 _SLEEP	=	0x00be
                           0000BF   517 __SFRBF	=	0x00bf
                           0000C0   518 _IRCON	=	0x00c0
                           0000C1   519 _U0DBUF	=	0x00c1
                           0000C2   520 _U0BAUD	=	0x00c2
                           0000C3   521 __SFRC3	=	0x00c3
                           0000C4   522 _U0UCR	=	0x00c4
                           0000C5   523 _U0GCR	=	0x00c5
                           0000C6   524 _CLKCON	=	0x00c6
                           0000C7   525 _MEMCTR	=	0x00c7
                           0000C8   526 __SFRC8	=	0x00c8
                           0000C9   527 _WDCTL	=	0x00c9
                           0000CA   528 _T3CNT	=	0x00ca
                           0000CB   529 _T3CTL	=	0x00cb
                           0000CC   530 _T3CCTL0	=	0x00cc
                           0000CD   531 _T3CC0	=	0x00cd
                           0000CE   532 _T3CCTL1	=	0x00ce
                           0000CF   533 _T3CC1	=	0x00cf
                           0000D0   534 _PSW	=	0x00d0
                           0000D1   535 _DMAIRQ	=	0x00d1
                           0000D2   536 _DMA1CFGL	=	0x00d2
                           0000D3   537 _DMA1CFGH	=	0x00d3
                           0000D4   538 _DMA0CFGL	=	0x00d4
                           0000D5   539 _DMA0CFGH	=	0x00d5
                           0000D6   540 _DMAARM	=	0x00d6
                           0000D7   541 _DMAREQ	=	0x00d7
                           0000D8   542 _TIMIF	=	0x00d8
                           0000D9   543 _RFD	=	0x00d9
                           0000DA   544 _T1CC0L	=	0x00da
                           0000DB   545 _T1CC0H	=	0x00db
                           0000DC   546 _T1CC1L	=	0x00dc
                           0000DD   547 _T1CC1H	=	0x00dd
                           0000DE   548 _T1CC2L	=	0x00de
                           0000DF   549 _T1CC2H	=	0x00df
                           0000E0   550 _ACC	=	0x00e0
                           0000E1   551 _RFST	=	0x00e1
                           0000E2   552 _T1CNTL	=	0x00e2
                           0000E3   553 _T1CNTH	=	0x00e3
                           0000E4   554 _T1CTL	=	0x00e4
                           0000E5   555 _T1CCTL0	=	0x00e5
                           0000E6   556 _T1CCTL1	=	0x00e6
                           0000E7   557 _T1CCTL2	=	0x00e7
                           0000E8   558 _IRCON2	=	0x00e8
                           0000E9   559 _RFIF	=	0x00e9
                           0000EA   560 _T4CNT	=	0x00ea
                           0000EB   561 _T4CTL	=	0x00eb
                           0000EC   562 _T4CCTL0	=	0x00ec
                           0000ED   563 _T4CC0	=	0x00ed
                           0000EE   564 _T4CCTL1	=	0x00ee
                           0000EF   565 _T4CC1	=	0x00ef
                           0000F0   566 _B	=	0x00f0
                           0000F1   567 _PERCFG	=	0x00f1
                           0000F2   568 _ADCCFG	=	0x00f2
                           0000F3   569 _P0SEL	=	0x00f3
                           0000F4   570 _P1SEL	=	0x00f4
                           0000F5   571 _P2SEL	=	0x00f5
                           0000F6   572 _P1INP	=	0x00f6
                           0000F7   573 _P2INP	=	0x00f7
                           0000F8   574 _U1CSR	=	0x00f8
                           0000F9   575 _U1DBUF	=	0x00f9
                           0000FA   576 _U1BAUD	=	0x00fa
                           0000FB   577 _U1UCR	=	0x00fb
                           0000FC   578 _U1GCR	=	0x00fc
                           0000FD   579 _P0DIR	=	0x00fd
                           0000FE   580 _P1DIR	=	0x00fe
                           0000FF   581 _P2DIR	=	0x00ff
                                    582 ;--------------------------------------------------------
                                    583 ; special function bits
                                    584 ;--------------------------------------------------------
                                    585 	.area RSEG    (ABS,DATA)
      000000                        586 	.org 0x0000
                           000080   587 _P0_0	=	0x0080
                           000081   588 _P0_1	=	0x0081
                           000082   589 _P0_2	=	0x0082
                           000083   590 _P0_3	=	0x0083
                           000084   591 _P0_4	=	0x0084
                           000085   592 _P0_5	=	0x0085
                           000086   593 _P0_6	=	0x0086
                           000087   594 _P0_7	=	0x0087
                           000088   595 _IT0	=	0x0088
                           000089   596 _RFTXRXIF	=	0x0089
                           00008A   597 _IT1	=	0x008a
                           00008B   598 _URX0IF	=	0x008b
                           00008D   599 _ADCIF	=	0x008d
                           00008F   600 _URX1IF	=	0x008f
                           000090   601 _P1_0	=	0x0090
                           000091   602 _P1_1	=	0x0091
                           000092   603 _P1_2	=	0x0092
                           000093   604 _P1_3	=	0x0093
                           000094   605 _P1_4	=	0x0094
                           000095   606 _P1_5	=	0x0095
                           000096   607 _P1_6	=	0x0096
                           000097   608 _P1_7	=	0x0097
                           000098   609 _ENCIF_0	=	0x0098
                           000099   610 _ENCIF_1	=	0x0099
                           0000A0   611 _P2_0	=	0x00a0
                           0000A1   612 _P2_1	=	0x00a1
                           0000A2   613 _P2_2	=	0x00a2
                           0000A3   614 _P2_3	=	0x00a3
                           0000A4   615 _P2_4	=	0x00a4
                           0000A5   616 _P2_5	=	0x00a5
                           0000A6   617 _P2_6	=	0x00a6
                           0000A7   618 _P2_7	=	0x00a7
                           0000A8   619 _RFTXRXIE	=	0x00a8
                           0000A9   620 _ADCIE	=	0x00a9
                           0000AA   621 _URX0IE	=	0x00aa
                           0000AB   622 _URX1IE	=	0x00ab
                           0000AC   623 _ENCIE	=	0x00ac
                           0000AD   624 _STIE	=	0x00ad
                           0000AF   625 _EA	=	0x00af
                           0000B8   626 _DMAIE	=	0x00b8
                           0000B9   627 _T1IE	=	0x00b9
                           0000BA   628 _T2IE	=	0x00ba
                           0000BB   629 _T3IE	=	0x00bb
                           0000BC   630 _T4IE	=	0x00bc
                           0000BD   631 _P0IE	=	0x00bd
                           0000C0   632 _DMAIF	=	0x00c0
                           0000C1   633 _T1IF	=	0x00c1
                           0000C2   634 _T2IF	=	0x00c2
                           0000C3   635 _T3IF	=	0x00c3
                           0000C4   636 _T4IF	=	0x00c4
                           0000C5   637 _P0IF	=	0x00c5
                           0000C7   638 _STIF	=	0x00c7
                           0000D0   639 _P	=	0x00d0
                           0000D1   640 _F1	=	0x00d1
                           0000D2   641 _OV	=	0x00d2
                           0000D3   642 _RS0	=	0x00d3
                           0000D4   643 _RS1	=	0x00d4
                           0000D5   644 _F0	=	0x00d5
                           0000D6   645 _AC	=	0x00d6
                           0000D7   646 _CY	=	0x00d7
                           0000D8   647 _T3OVFIF	=	0x00d8
                           0000D9   648 _T3CH0IF	=	0x00d9
                           0000DA   649 _T3CH1IF	=	0x00da
                           0000DB   650 _T4OVFIF	=	0x00db
                           0000DC   651 _T4CH0IF	=	0x00dc
                           0000DD   652 _T4CH1IF	=	0x00dd
                           0000DE   653 _OVFIM	=	0x00de
                           0000E0   654 _ACC_0	=	0x00e0
                           0000E1   655 _ACC_1	=	0x00e1
                           0000E2   656 _ACC_2	=	0x00e2
                           0000E3   657 _ACC_3	=	0x00e3
                           0000E4   658 _ACC_4	=	0x00e4
                           0000E5   659 _ACC_5	=	0x00e5
                           0000E6   660 _ACC_6	=	0x00e6
                           0000E7   661 _ACC_7	=	0x00e7
                           0000E8   662 _P2IF	=	0x00e8
                           0000E9   663 _UTX0IF	=	0x00e9
                           0000EA   664 _UTX1IF	=	0x00ea
                           0000EB   665 _P1IF	=	0x00eb
                           0000EC   666 _WDTIF	=	0x00ec
                           0000F0   667 _B_0	=	0x00f0
                           0000F1   668 _B_1	=	0x00f1
                           0000F2   669 _B_2	=	0x00f2
                           0000F3   670 _B_3	=	0x00f3
                           0000F4   671 _B_4	=	0x00f4
                           0000F5   672 _B_5	=	0x00f5
                           0000F6   673 _B_6	=	0x00f6
                           0000F7   674 _B_7	=	0x00f7
                           0000F8   675 _ACTIVE	=	0x00f8
                           0000F9   676 _TX_BYTE	=	0x00f9
                           0000FA   677 _RX_BYTE	=	0x00fa
                           0000FB   678 _ERR	=	0x00fb
                           0000FC   679 _FE	=	0x00fc
                           0000FD   680 _SLAVE	=	0x00fd
                           0000FE   681 _RE	=	0x00fe
                           0000FF   682 _MODE	=	0x00ff
                                    683 ;--------------------------------------------------------
                                    684 ; overlayable register banks
                                    685 ;--------------------------------------------------------
                                    686 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        687 	.ds 8
                                    688 ;--------------------------------------------------------
                                    689 ; overlayable bit register bank
                                    690 ;--------------------------------------------------------
                                    691 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        692 bits:
      000020                        693 	.ds 1
                           008000   694 	b0 = bits[0]
                           008100   695 	b1 = bits[1]
                           008200   696 	b2 = bits[2]
                           008300   697 	b3 = bits[3]
                           008400   698 	b4 = bits[4]
                           008500   699 	b5 = bits[5]
                           008600   700 	b6 = bits[6]
                           008700   701 	b7 = bits[7]
                                    702 ;--------------------------------------------------------
                                    703 ; internal ram data
                                    704 ;--------------------------------------------------------
                                    705 	.area DSEG    (DATA)
                                    706 ;--------------------------------------------------------
                                    707 ; overlayable items in internal ram 
                                    708 ;--------------------------------------------------------
                                    709 ;--------------------------------------------------------
                                    710 ; indirectly addressable internal ram data
                                    711 ;--------------------------------------------------------
                                    712 	.area ISEG    (DATA)
                                    713 ;--------------------------------------------------------
                                    714 ; absolute internal ram data
                                    715 ;--------------------------------------------------------
                                    716 	.area IABS    (ABS,DATA)
                                    717 	.area IABS    (ABS,DATA)
                                    718 ;--------------------------------------------------------
                                    719 ; bit data
                                    720 ;--------------------------------------------------------
                                    721 	.area BSEG    (BIT)
                                    722 ;--------------------------------------------------------
                                    723 ; paged external ram data
                                    724 ;--------------------------------------------------------
                                    725 	.area PSEG    (PAG,XDATA)
                                    726 ;--------------------------------------------------------
                                    727 ; external ram data
                                    728 ;--------------------------------------------------------
                                    729 	.area XSEG    (XDATA)
                           00DF02   730 _MDMCTRL0H	=	0xdf02
                           00DF00   731 _SYNC1	=	0xdf00
                           00DF01   732 _SYNC0	=	0xdf01
                           00DF02   733 _PKTLEN	=	0xdf02
                           00DF03   734 _PKTCTRL1	=	0xdf03
                           00DF04   735 _PKTCTRL0	=	0xdf04
                           00DF05   736 _ADDR	=	0xdf05
                           00DF06   737 _CHANNR	=	0xdf06
                           00DF07   738 _FSCTRL1	=	0xdf07
                           00DF08   739 _FSCTRL0	=	0xdf08
                           00DF09   740 _FREQ2	=	0xdf09
                           00DF0A   741 _FREQ1	=	0xdf0a
                           00DF0B   742 _FREQ0	=	0xdf0b
                           00DF0C   743 _MDMCFG4	=	0xdf0c
                           00DF0D   744 _MDMCFG3	=	0xdf0d
                           00DF0E   745 _MDMCFG2	=	0xdf0e
                           00DF0F   746 _MDMCFG1	=	0xdf0f
                           00DF10   747 _MDMCFG0	=	0xdf10
                           00DF11   748 _DEVIATN	=	0xdf11
                           00DF12   749 _MCSM2	=	0xdf12
                           00DF13   750 _MCSM1	=	0xdf13
                           00DF14   751 _MCSM0	=	0xdf14
                           00DF15   752 _FOCCFG	=	0xdf15
                           00DF16   753 _BSCFG	=	0xdf16
                           00DF17   754 _AGCCTRL2	=	0xdf17
                           00DF18   755 _AGCCTRL1	=	0xdf18
                           00DF19   756 _AGCCTRL0	=	0xdf19
                           00DF1A   757 _FREND1	=	0xdf1a
                           00DF1B   758 _FREND0	=	0xdf1b
                           00DF1C   759 _FSCAL3	=	0xdf1c
                           00DF1D   760 _FSCAL2	=	0xdf1d
                           00DF1E   761 _FSCAL1	=	0xdf1e
                           00DF1F   762 _FSCAL0	=	0xdf1f
                           00DF20   763 __XREGDF20	=	0xdf20
                           00DF21   764 __XREGDF21	=	0xdf21
                           00DF22   765 __XREGDF22	=	0xdf22
                           00DF23   766 _TEST2	=	0xdf23
                           00DF24   767 _TEST1	=	0xdf24
                           00DF25   768 _TEST0	=	0xdf25
                           00DF26   769 __XREGDF26	=	0xdf26
                           00DF27   770 _PA_TABLE7	=	0xdf27
                           00DF28   771 _PA_TABLE6	=	0xdf28
                           00DF29   772 _PA_TABLE5	=	0xdf29
                           00DF2A   773 _PA_TABLE4	=	0xdf2a
                           00DF2B   774 _PA_TABLE3	=	0xdf2b
                           00DF2C   775 _PA_TABLE2	=	0xdf2c
                           00DF2D   776 _PA_TABLE1	=	0xdf2d
                           00DF2E   777 _PA_TABLE0	=	0xdf2e
                           00DF2F   778 _IOCFG2	=	0xdf2f
                           00DF30   779 _IOCFG1	=	0xdf30
                           00DF31   780 _IOCFG0	=	0xdf31
                           00DF32   781 __XREGDF32	=	0xdf32
                           00DF33   782 __XREGDF33	=	0xdf33
                           00DF34   783 __XREGDF34	=	0xdf34
                           00DF35   784 __XREGDF35	=	0xdf35
                           00DF36   785 _PARTNUM	=	0xdf36
                           00DF37   786 _VERSION	=	0xdf37
                           00DF38   787 _FREQEST	=	0xdf38
                           00DF39   788 _LQI	=	0xdf39
                           00DF3A   789 _RSSI	=	0xdf3a
                           00DF3B   790 _MARCSTATE	=	0xdf3b
                           00DF3C   791 _PKTSTATUS	=	0xdf3c
                           00DF3D   792 _VCO_VC_DAC	=	0xdf3d
                           00DF40   793 _I2SCFG0	=	0xdf40
                           00DF41   794 _I2SCFG1	=	0xdf41
                           00DF42   795 _I2SDATL	=	0xdf42
                           00DF43   796 _I2SDATH	=	0xdf43
                           00DF44   797 _I2SWCNT	=	0xdf44
                           00DF45   798 _I2SSTAT	=	0xdf45
                           00DF46   799 _I2SCLKF0	=	0xdf46
                           00DF47   800 _I2SCLKF1	=	0xdf47
                           00DF48   801 _I2SCLKF2	=	0xdf48
                           00DF80   802 __NA_P0	=	0xdf80
                           00DF81   803 __NA_SP	=	0xdf81
                           00DF82   804 __NA_DPL0	=	0xdf82
                           00DF83   805 __NA_DPH0	=	0xdf83
                           00DF84   806 __NA_DPL1	=	0xdf84
                           00DF85   807 __NA_DPH1	=	0xdf85
                           00DF86   808 _X_U0CSR	=	0xdf86
                           00DF87   809 __NA_PCON	=	0xdf87
                           00DF88   810 __NA_TCON	=	0xdf88
                           00DF89   811 _X_P0IFG	=	0xdf89
                           00DF8A   812 _X_P1IFG	=	0xdf8a
                           00DF8B   813 _X_P2IFG	=	0xdf8b
                           00DF8C   814 _X_PICTL	=	0xdf8c
                           00DF8D   815 _X_P1IEN	=	0xdf8d
                           00DF8E   816 __X_SFR8E	=	0xdf8e
                           00DF8F   817 _X_P0INP	=	0xdf8f
                           00DF90   818 __NA_P1	=	0xdf90
                           00DF91   819 _X_RFIM	=	0xdf91
                           00DF92   820 __NA_DPS	=	0xdf92
                           00DF93   821 _X_MPAGE	=	0xdf93
                           00DF94   822 __X_SFR94	=	0xdf94
                           00DF95   823 __X_SFR95	=	0xdf95
                           00DF96   824 __X_SFR96	=	0xdf96
                           00DF97   825 __X_SFR97	=	0xdf97
                           00DF98   826 __NA_S0CON	=	0xdf98
                           00DF99   827 __X_SFR99	=	0xdf99
                           00DF9A   828 __NA_IEN2	=	0xdf9a
                           00DF9B   829 __NA_S1CON	=	0xdf9b
                           00DF9C   830 _X_T2CT	=	0xdf9c
                           00DF9D   831 _X_T2PR	=	0xdf9d
                           00DF9E   832 _X_T2CTL	=	0xdf9e
                           00DF9F   833 __X_SFR9F	=	0xdf9f
                           00DFA0   834 __NA_P2	=	0xdfa0
                           00DFA1   835 _X_WORIRQ	=	0xdfa1
                           00DFA2   836 _X_WORCTRL	=	0xdfa2
                           00DFA3   837 _X_WOREVT0	=	0xdfa3
                           00DFA4   838 _X_WOREVT1	=	0xdfa4
                           00DFA5   839 _X_WORTIME0	=	0xdfa5
                           00DFA6   840 _X_WORTIME1	=	0xdfa6
                           00DFA7   841 __X_SFRA7	=	0xdfa7
                           00DFA8   842 __NA_IEN0	=	0xdfa8
                           00DFA9   843 __NA_IP0	=	0xdfa9
                           00DFAA   844 __X_SFRAA	=	0xdfaa
                           00DFAB   845 _X_FWT	=	0xdfab
                           00DFAC   846 _X_FADDRL	=	0xdfac
                           00DFAD   847 _X_FADDRH	=	0xdfad
                           00DFAE   848 _X_FCTL	=	0xdfae
                           00DFAF   849 _X_FWDATA	=	0xdfaf
                           00DFB0   850 __X_SFRB0	=	0xdfb0
                           00DFB1   851 _X_ENCDI	=	0xdfb1
                           00DFB2   852 _X_ENCDO	=	0xdfb2
                           00DFB3   853 _X_ENCCS	=	0xdfb3
                           00DFB4   854 _X_ADCCON1	=	0xdfb4
                           00DFB5   855 _X_ADCCON2	=	0xdfb5
                           00DFB6   856 _X_ADCCON3	=	0xdfb6
                           00DFB7   857 __X_SFRB7	=	0xdfb7
                           00DFB8   858 __NA_IEN1	=	0xdfb8
                           00DFB9   859 __NA_IP1	=	0xdfb9
                           00DFBA   860 _X_ADCL	=	0xdfba
                           00DFBB   861 _X_ADCH	=	0xdfbb
                           00DFBC   862 _X_RNDL	=	0xdfbc
                           00DFBD   863 _X_RNDH	=	0xdfbd
                           00DFBE   864 _X_SLEEP	=	0xdfbe
                           00DFBF   865 __X_SFRBF	=	0xdfbf
                           00DFC0   866 __NA_IRCON	=	0xdfc0
                           00DFC1   867 _X_U0DBUF	=	0xdfc1
                           00DFC2   868 _X_U0BAUD	=	0xdfc2
                           00DFC3   869 __X_SFRC3	=	0xdfc3
                           00DFC4   870 _X_U0UCR	=	0xdfc4
                           00DFC5   871 _X_U0GCR	=	0xdfc5
                           00DFC6   872 _X_CLKCON	=	0xdfc6
                           00DFC7   873 _X_MEMCTR	=	0xdfc7
                           00DFC8   874 __X_SFRC8	=	0xdfc8
                           00DFC9   875 _X_WDCTL	=	0xdfc9
                           00DFCA   876 _X_T3CNT	=	0xdfca
                           00DFCB   877 _X_T3CTL	=	0xdfcb
                           00DFCC   878 _X_T3CCTL0	=	0xdfcc
                           00DFCD   879 _X_T3CC0	=	0xdfcd
                           00DFCE   880 _X_T3CCTL1	=	0xdfce
                           00DFCF   881 _X_T3CC1	=	0xdfcf
                           00DFD0   882 __NA_PSW	=	0xdfd0
                           00DFD1   883 _X_DMAIRQ	=	0xdfd1
                           00DFD2   884 _X_DMA1CFGL	=	0xdfd2
                           00DFD3   885 _X_DMA1CFGH	=	0xdfd3
                           00DFD4   886 _X_DMA0CFGL	=	0xdfd4
                           00DFD5   887 _X_DMA0CFGH	=	0xdfd5
                           00DFD6   888 _X_DMAARM	=	0xdfd6
                           00DFD7   889 _X_DMAREQ	=	0xdfd7
                           00DFD8   890 _X_TIMIF	=	0xdfd8
                           00DFD9   891 _X_RFD	=	0xdfd9
                           00DFDA   892 _X_T1CC0L	=	0xdfda
                           00DFDB   893 _X_T1CC0H	=	0xdfdb
                           00DFDC   894 _X_T1CC1L	=	0xdfdc
                           00DFDD   895 _X_T1CC1H	=	0xdfdd
                           00DFDE   896 _X_T1CC2L	=	0xdfde
                           00DFDF   897 _X_T1CC2H	=	0xdfdf
                           00DFE0   898 __NA_ACC	=	0xdfe0
                           00DFE1   899 _X_RFST	=	0xdfe1
                           00DFE2   900 _X_T1CNTL	=	0xdfe2
                           00DFE3   901 _X_T1CNTH	=	0xdfe3
                           00DFE4   902 _X_T1CTL	=	0xdfe4
                           00DFE5   903 _X_T1CCTL0	=	0xdfe5
                           00DFE6   904 _X_T1CCTL1	=	0xdfe6
                           00DFE7   905 _X_T1CCTL2	=	0xdfe7
                           00DFE8   906 __NA_IRCON2	=	0xdfe8
                           00DFE9   907 _X_RFIF	=	0xdfe9
                           00DFEA   908 _X_T4CNT	=	0xdfea
                           00DFEB   909 _X_T4CTL	=	0xdfeb
                           00DFEC   910 _X_T4CCTL0	=	0xdfec
                           00DFED   911 _X_T4CC0	=	0xdfed
                           00DFEE   912 _X_T4CCTL1	=	0xdfee
                           00DFEF   913 _X_T4CC1	=	0xdfef
                           00DFF0   914 __NA_B	=	0xdff0
                           00DFF1   915 _X_PERCFG	=	0xdff1
                           00DFF2   916 _X_ADCCFG	=	0xdff2
                           00DFF3   917 _X_P0SEL	=	0xdff3
                           00DFF4   918 _X_P1SEL	=	0xdff4
                           00DFF5   919 _X_P2SEL	=	0xdff5
                           00DFF6   920 _X_P1INP	=	0xdff6
                           00DFF7   921 _X_P2INP	=	0xdff7
                           00DFF8   922 _X_U1CSR	=	0xdff8
                           00DFF9   923 _X_U1DBUF	=	0xdff9
                           00DFFA   924 _X_U1BAUD	=	0xdffa
                           00DFFB   925 _X_U1UCR	=	0xdffb
                           00DFFC   926 _X_U1GCR	=	0xdffc
                           00DFFD   927 _X_P0DIR	=	0xdffd
                           00DFFE   928 _X_P1DIR	=	0xdffe
                           00DFFF   929 _X_P2DIR	=	0xdfff
      00F168                        930 _rfrxbuf::
      00F168                        931 	.ds 78
      00F1B6                        932 _rxidx:
      00F1B6                        933 	.ds 1
      00F1B7                        934 _rftxbuf::
      00F1B7                        935 	.ds 78
      00F205                        936 _txidx:
      00F205                        937 	.ds 1
      00F206                        938 _nrx:
      00F206                        939 	.ds 4
      00F20A                        940 _ntx:
      00F20A                        941 	.ds 4
      00F20E                        942 _nwakeup:
      00F20E                        943 	.ds 2
      00F210                        944 _rftx_flags_1_50:
      00F210                        945 	.ds 1
      00F211                        946 _rfwakeup_n_1_56:
      00F211                        947 	.ds 2
                                    948 ;--------------------------------------------------------
                                    949 ; absolute external ram data
                                    950 ;--------------------------------------------------------
                                    951 	.area XABS    (ABS,XDATA)
                                    952 ;--------------------------------------------------------
                                    953 ; external initialized ram data
                                    954 ;--------------------------------------------------------
                                    955 	.area XISEG   (XDATA)
      00F28D                        956 _mode:
      00F28D                        957 	.ds 1
                                    958 	.area HOME    (CODE)
                                    959 	.area GSINIT0 (CODE)
                                    960 	.area GSINIT1 (CODE)
                                    961 	.area GSINIT2 (CODE)
                                    962 	.area GSINIT3 (CODE)
                                    963 	.area GSINIT4 (CODE)
                                    964 	.area GSINIT5 (CODE)
                                    965 	.area GSINIT  (CODE)
                                    966 	.area GSFINAL (CODE)
                                    967 	.area CSEG    (CODE)
                                    968 ;--------------------------------------------------------
                                    969 ; global & static initialisations
                                    970 ;--------------------------------------------------------
                                    971 	.area HOME    (CODE)
                                    972 	.area GSINIT  (CODE)
                                    973 	.area GSFINAL (CODE)
                                    974 	.area GSINIT  (CODE)
                                    975 ;--------------------------------------------------------
                                    976 ; Home
                                    977 ;--------------------------------------------------------
                                    978 	.area HOME    (CODE)
                                    979 	.area HOME    (CODE)
                                    980 ;--------------------------------------------------------
                                    981 ; code
                                    982 ;--------------------------------------------------------
                                    983 	.area CSEG    (CODE)
                                    984 ;------------------------------------------------------------
                                    985 ;Allocation info for local variables in function 'rfinit'
                                    986 ;------------------------------------------------------------
                                    987 ;	rf.c:27: rfinit()
                                    988 ;	-----------------------------------------
                                    989 ;	 function rfinit
                                    990 ;	-----------------------------------------
      0003E2                        991 _rfinit:
                           000007   992 	ar7 = 0x07
                           000006   993 	ar6 = 0x06
                           000005   994 	ar5 = 0x05
                           000004   995 	ar4 = 0x04
                           000003   996 	ar3 = 0x03
                           000002   997 	ar2 = 0x02
                           000001   998 	ar1 = 0x01
                           000000   999 	ar0 = 0x00
                                   1000 ;	rf.c:29: SYNC1 = 0xd3;
      0003E2 90 DF 00         [24] 1001 	mov	dptr,#_SYNC1
      0003E5 74 D3            [12] 1002 	mov	a,#0xD3
      0003E7 F0               [24] 1003 	movx	@dptr,a
                                   1004 ;	rf.c:30: SYNC0 = 0x91;
      0003E8 90 DF 01         [24] 1005 	mov	dptr,#_SYNC0
      0003EB 74 91            [12] 1006 	mov	a,#0x91
      0003ED F0               [24] 1007 	movx	@dptr,a
                                   1008 ;	rf.c:31: PKTCTRL1 = 0xC0; // Packet Automation Control 
      0003EE 90 DF 03         [24] 1009 	mov	dptr,#_PKTCTRL1
      0003F1 74 C0            [12] 1010 	mov	a,#0xC0
      0003F3 F0               [24] 1011 	movx	@dptr,a
                                   1012 ;	rf.c:32: PKTCTRL0 = 0x02; // Packet Automation Control 
      0003F4 90 DF 04         [24] 1013 	mov	dptr,#_PKTCTRL0
      0003F7 74 02            [12] 1014 	mov	a,#0x02
      0003F9 F0               [24] 1015 	movx	@dptr,a
                                   1016 ;	rf.c:33: FSCTRL1 = 0x06; // Frequency Synthesizer Control 
      0003FA 90 DF 07         [24] 1017 	mov	dptr,#_FSCTRL1
      0003FD 74 06            [12] 1018 	mov	a,#0x06
      0003FF F0               [24] 1019 	movx	@dptr,a
                                   1020 ;	rf.c:34: FSCTRL0 = 0x00;
      000400 90 DF 08         [24] 1021 	mov	dptr,#_FSCTRL0
      000403 E4               [12] 1022 	clr	a
      000404 F0               [24] 1023 	movx	@dptr,a
                                   1024 ;	rf.c:49: FREQ2 = 0x22; // Frequency Control Word, High Byte 
      000405 90 DF 09         [24] 1025 	mov	dptr,#_FREQ2
      000408 74 22            [12] 1026 	mov	a,#0x22
      00040A F0               [24] 1027 	movx	@dptr,a
                                   1028 ;	rf.c:50: FREQ1 = 0xBB; // Frequency Control Word, Middle Byte 
      00040B 90 DF 0A         [24] 1029 	mov	dptr,#_FREQ1
      00040E 74 BB            [12] 1030 	mov	a,#0xBB
      000410 F0               [24] 1031 	movx	@dptr,a
                                   1032 ;	rf.c:51: FREQ0 = 0x46; // Frequency Control Word, Low Byte
      000411 90 DF 0B         [24] 1033 	mov	dptr,#_FREQ0
      000414 74 46            [12] 1034 	mov	a,#0x46
      000416 F0               [24] 1035 	movx	@dptr,a
                                   1036 ;	rf.c:53: MDMCFG4 = 0xC9; // Modem configuration 
      000417 90 DF 0C         [24] 1037 	mov	dptr,#_MDMCFG4
      00041A 74 C9            [12] 1038 	mov	a,#0xC9
      00041C F0               [24] 1039 	movx	@dptr,a
                                   1040 ;	rf.c:54: MDMCFG3 = 0x83; // Modem Configuration 
      00041D 90 DF 0D         [24] 1041 	mov	dptr,#_MDMCFG3
      000420 74 83            [12] 1042 	mov	a,#0x83
      000422 F0               [24] 1043 	movx	@dptr,a
                                   1044 ;	rf.c:55: MDMCFG2 = 0x01; // Modem Configuration 
      000423 90 DF 0E         [24] 1045 	mov	dptr,#_MDMCFG2
      000426 74 01            [12] 1046 	mov	a,#0x01
      000428 F0               [24] 1047 	movx	@dptr,a
                                   1048 ;	rf.c:56: MDMCFG1 = 0x23; // Modem Configuration 
      000429 90 DF 0F         [24] 1049 	mov	dptr,#_MDMCFG1
      00042C 74 23            [12] 1050 	mov	a,#0x23
      00042E F0               [24] 1051 	movx	@dptr,a
                                   1052 ;	rf.c:57: MDMCFG0 = 0x80; // Modem Configuration 
      00042F 90 DF 10         [24] 1053 	mov	dptr,#_MDMCFG0
      000432 74 80            [12] 1054 	mov	a,#0x80
      000434 F0               [24] 1055 	movx	@dptr,a
                                   1056 ;	rf.c:59: DEVIATN = 0x32; // Modem Deviation Setting 
      000435 90 DF 11         [24] 1057 	mov	dptr,#_DEVIATN
      000438 74 32            [12] 1058 	mov	a,#0x32
      00043A F0               [24] 1059 	movx	@dptr,a
                                   1060 ;	rf.c:66: MCSM2 = 0x07;
      00043B 90 DF 12         [24] 1061 	mov	dptr,#_MCSM2
      00043E 74 07            [12] 1062 	mov	a,#0x07
      000440 F0               [24] 1063 	movx	@dptr,a
                                   1064 ;	rf.c:67: MCSM1 = 0x30;  //  0x3f: continues RX after TX, RX.
      000441 90 DF 13         [24] 1065 	mov	dptr,#_MCSM1
      000444 74 30            [12] 1066 	mov	a,#0x30
      000446 F0               [24] 1067 	movx	@dptr,a
                                   1068 ;	rf.c:68: MCSM0 = 0x18;
      000447 90 DF 14         [24] 1069 	mov	dptr,#_MCSM0
      00044A 03               [12] 1070 	rr	a
      00044B F0               [24] 1071 	movx	@dptr,a
                                   1072 ;	rf.c:70: FOCCFG = 0x16; // Frequency Offset Compensation Configuration 
      00044C 90 DF 15         [24] 1073 	mov	dptr,#_FOCCFG
      00044F 74 16            [12] 1074 	mov	a,#0x16
      000451 F0               [24] 1075 	movx	@dptr,a
                                   1076 ;	rf.c:72: FSCAL3 = 0xE9; // Frequency Synthesizer Calibration 
      000452 90 DF 1C         [24] 1077 	mov	dptr,#_FSCAL3
      000455 F4               [12] 1078 	cpl	a
      000456 F0               [24] 1079 	movx	@dptr,a
                                   1080 ;	rf.c:73: FSCAL2 = 0x2A; // Frequency Synthesizer Calibration 
      000457 90 DF 1D         [24] 1081 	mov	dptr,#_FSCAL2
      00045A 74 2A            [12] 1082 	mov	a,#0x2A
      00045C F0               [24] 1083 	movx	@dptr,a
                                   1084 ;	rf.c:74: FSCAL1 = 0x00; // Frequency Synthesizer Calibration 
      00045D 90 DF 1E         [24] 1085 	mov	dptr,#_FSCAL1
      000460 E4               [12] 1086 	clr	a
      000461 F0               [24] 1087 	movx	@dptr,a
                                   1088 ;	rf.c:75: FSCAL0 = 0x1F; // Frequency Synthesizer Calibration 
      000462 90 DF 1F         [24] 1089 	mov	dptr,#_FSCAL0
      000465 74 1F            [12] 1090 	mov	a,#0x1F
      000467 F0               [24] 1091 	movx	@dptr,a
                                   1092 ;	rf.c:77: TEST1 = 0x31; // Various Test Settings 
      000468 90 DF 24         [24] 1093 	mov	dptr,#_TEST1
      00046B 74 31            [12] 1094 	mov	a,#0x31
      00046D F0               [24] 1095 	movx	@dptr,a
                                   1096 ;	rf.c:78: TEST0 = 0x09; // Various Test Settings 
      00046E 90 DF 25         [24] 1097 	mov	dptr,#_TEST0
      000471 74 09            [12] 1098 	mov	a,#0x09
      000473 F0               [24] 1099 	movx	@dptr,a
                                   1100 ;	rf.c:80: PA_TABLE0 = 0xc0; // PA Power Setting 0 
      000474 90 DF 2E         [24] 1101 	mov	dptr,#_PA_TABLE0
      000477 74 C0            [12] 1102 	mov	a,#0xC0
      000479 F0               [24] 1103 	movx	@dptr,a
                                   1104 ;	rf.c:81: PA_TABLE1 = 0x00; // PA Power Setting 0 
      00047A 90 DF 2D         [24] 1105 	mov	dptr,#_PA_TABLE1
      00047D E4               [12] 1106 	clr	a
      00047E F0               [24] 1107 	movx	@dptr,a
                                   1108 ;	rf.c:83: PKTLEN = Npkt;
      00047F 90 DF 02         [24] 1109 	mov	dptr,#_PKTLEN
      000482 74 4E            [12] 1110 	mov	a,#0x4E
      000484 F0               [24] 1111 	movx	@dptr,a
                                   1112 ;	rf.c:84: PKTCTRL0 = (PKTCTRL0&~0x3) | 0; // 0: fixed, 1: var, 2: infinite
      000485 90 DF 04         [24] 1113 	mov	dptr,#_PKTCTRL0
      000488 E0               [24] 1114 	movx	a,@dptr
      000489 FF               [12] 1115 	mov	r7,a
      00048A 74 FC            [12] 1116 	mov	a,#0xFC
      00048C 5F               [12] 1117 	anl	a,r7
      00048D F0               [24] 1118 	movx	@dptr,a
                                   1119 ;	rf.c:85: CHANNR = 36;
      00048E 90 DF 06         [24] 1120 	mov	dptr,#_CHANNR
      000491 74 24            [12] 1121 	mov	a,#0x24
      000493 F0               [24] 1122 	movx	@dptr,a
                                   1123 ;	rf.c:88: RFIM |= RFIF_IRQ_TXUNF;
      000494 43 91 80         [24] 1124 	orl	_RFIM,#0x80
                                   1125 ;	rf.c:89: RFIM |= RFIF_IRQ_RXOVF;
      000497 43 91 40         [24] 1126 	orl	_RFIM,#0x40
                                   1127 ;	rf.c:90: RFIM |= RFIF_IRQ_SFD;
      00049A 43 91 01         [24] 1128 	orl	_RFIM,#0x01
                                   1129 ;	rf.c:94: RFIF = 0;
      00049D 75 E9 00         [24] 1130 	mov	_RFIF,#0x00
                                   1131 ;	rf.c:95: IEN2 |= IEN2_RFIE;
      0004A0 43 9A 01         [24] 1132 	orl	_IEN2,#0x01
                                   1133 ;	rf.c:96: RFTXRXIF = 0;
      0004A3 C2 89            [12] 1134 	clr	_RFTXRXIF
                                   1135 ;	rf.c:97: RFTXRXIE = 1;
      0004A5 D2 A8            [12] 1136 	setb	_RFTXRXIE
                                   1137 ;	rf.c:99: nrx = ntx = 0;
      0004A7 90 F2 0A         [24] 1138 	mov	dptr,#_ntx
      0004AA E4               [12] 1139 	clr	a
      0004AB F0               [24] 1140 	movx	@dptr,a
      0004AC A3               [24] 1141 	inc	dptr
      0004AD F0               [24] 1142 	movx	@dptr,a
      0004AE A3               [24] 1143 	inc	dptr
      0004AF F0               [24] 1144 	movx	@dptr,a
      0004B0 A3               [24] 1145 	inc	dptr
      0004B1 F0               [24] 1146 	movx	@dptr,a
      0004B2 90 F2 06         [24] 1147 	mov	dptr,#_nrx
      0004B5 F0               [24] 1148 	movx	@dptr,a
      0004B6 A3               [24] 1149 	inc	dptr
      0004B7 F0               [24] 1150 	movx	@dptr,a
      0004B8 A3               [24] 1151 	inc	dptr
      0004B9 F0               [24] 1152 	movx	@dptr,a
      0004BA A3               [24] 1153 	inc	dptr
      0004BB F0               [24] 1154 	movx	@dptr,a
                                   1155 ;	rf.c:101: rfidle();
      0004BC 02 04 BF         [24] 1156 	ljmp	_rfidle
                                   1157 ;------------------------------------------------------------
                                   1158 ;Allocation info for local variables in function 'rfidle'
                                   1159 ;------------------------------------------------------------
                                   1160 ;	rf.c:105: rfidle()
                                   1161 ;	-----------------------------------------
                                   1162 ;	 function rfidle
                                   1163 ;	-----------------------------------------
      0004BF                       1164 _rfidle:
                                   1165 ;	rf.c:107: mode = Rfidle;
      0004BF 90 F2 8D         [24] 1166 	mov	dptr,#_mode
      0004C2 E4               [12] 1167 	clr	a
      0004C3 F0               [24] 1168 	movx	@dptr,a
                                   1169 ;	rf.c:108: RFST = RFST_SIDLE;
      0004C4 75 E1 04         [24] 1170 	mov	_RFST,#0x04
                                   1171 ;	rf.c:109: await(MARCSTATE == MARC_STATE_IDLE);
      0004C7                       1172 00101$:
      0004C7 90 DF 3B         [24] 1173 	mov	dptr,#_MARCSTATE
      0004CA E0               [24] 1174 	movx	a,@dptr
      0004CB FF               [12] 1175 	mov	r7,a
      0004CC BF 01 F8         [24] 1176 	cjne	r7,#0x01,00101$
      0004CF 22               [24] 1177 	ret
                                   1178 ;------------------------------------------------------------
                                   1179 ;Allocation info for local variables in function 'rfrx'
                                   1180 ;------------------------------------------------------------
                                   1181 ;	rf.c:113: rfrx()
                                   1182 ;	-----------------------------------------
                                   1183 ;	 function rfrx
                                   1184 ;	-----------------------------------------
      0004D0                       1185 _rfrx:
                                   1186 ;	rf.c:115: rfidle();
      0004D0 12 04 BF         [24] 1187 	lcall	_rfidle
                                   1188 ;	rf.c:116: GREEN = 0;
      0004D3 C2 90            [12] 1189 	clr	_P1_0
                                   1190 ;	rf.c:117: rxidx = 0;
      0004D5 90 F1 B6         [24] 1191 	mov	dptr,#_rxidx
      0004D8 E4               [12] 1192 	clr	a
      0004D9 F0               [24] 1193 	movx	@dptr,a
                                   1194 ;	rf.c:118: mode = Rfrx;
      0004DA 90 F2 8D         [24] 1195 	mov	dptr,#_mode
      0004DD 74 03            [12] 1196 	mov	a,#0x03
      0004DF F0               [24] 1197 	movx	@dptr,a
                                   1198 ;	rf.c:119: RFIM |= RFIF_IRQ_DONE;
      0004E0 43 91 10         [24] 1199 	orl	_RFIM,#0x10
                                   1200 ;	rf.c:120: RFST = RFST_SRX;
      0004E3 75 E1 02         [24] 1201 	mov	_RFST,#0x02
      0004E6 22               [24] 1202 	ret
                                   1203 ;------------------------------------------------------------
                                   1204 ;Allocation info for local variables in function 'rftxpreamble'
                                   1205 ;------------------------------------------------------------
                                   1206 ;	rf.c:124: rftxpreamble()
                                   1207 ;	-----------------------------------------
                                   1208 ;	 function rftxpreamble
                                   1209 ;	-----------------------------------------
      0004E7                       1210 _rftxpreamble:
                                   1211 ;	rf.c:126: rfidle();
      0004E7 12 04 BF         [24] 1212 	lcall	_rfidle
                                   1213 ;	rf.c:127: RED = 1;
      0004EA D2 91            [12] 1214 	setb	_P1_1
                                   1215 ;	rf.c:128: mode = Rftxpreamble;
      0004EC 90 F2 8D         [24] 1216 	mov	dptr,#_mode
      0004EF 74 02            [12] 1217 	mov	a,#0x02
      0004F1 F0               [24] 1218 	movx	@dptr,a
                                   1219 ;	rf.c:129: RFST = RFST_STX;
      0004F2 75 E1 03         [24] 1220 	mov	_RFST,#0x03
      0004F5 22               [24] 1221 	ret
                                   1222 ;------------------------------------------------------------
                                   1223 ;Allocation info for local variables in function 'rftx'
                                   1224 ;------------------------------------------------------------
                                   1225 ;flags                     Allocated with name '_rftx_flags_1_50'
                                   1226 ;------------------------------------------------------------
                                   1227 ;	rf.c:133: rftx(uint8 flags)
                                   1228 ;	-----------------------------------------
                                   1229 ;	 function rftx
                                   1230 ;	-----------------------------------------
      0004F6                       1231 _rftx:
      0004F6 E5 82            [12] 1232 	mov	a,dpl
      0004F8 90 F2 10         [24] 1233 	mov	dptr,#_rftx_flags_1_50
      0004FB F0               [24] 1234 	movx	@dptr,a
                                   1235 ;	rf.c:135: if(flags&Txrx){
      0004FC E0               [24] 1236 	movx	a,@dptr
      0004FD FF               [12] 1237 	mov	r7,a
      0004FE 30 E1 11         [24] 1238 	jnb	acc.1,00102$
                                   1239 ;	rf.c:136: MCSM1 |= MCSM1_TXOFF_MODE_RX;
      000501 90 DF 13         [24] 1240 	mov	dptr,#_MCSM1
      000504 E0               [24] 1241 	movx	a,@dptr
      000505 FE               [12] 1242 	mov	r6,a
      000506 74 03            [12] 1243 	mov	a,#0x03
      000508 4E               [12] 1244 	orl	a,r6
      000509 F0               [24] 1245 	movx	@dptr,a
                                   1246 ;	rf.c:137: mode = Rftxrx;
      00050A 90 F2 8D         [24] 1247 	mov	dptr,#_mode
      00050D 74 04            [12] 1248 	mov	a,#0x04
      00050F F0               [24] 1249 	movx	@dptr,a
      000510 80 06            [24] 1250 	sjmp	00103$
      000512                       1251 00102$:
                                   1252 ;	rf.c:139: mode = Rftx;
      000512 90 F2 8D         [24] 1253 	mov	dptr,#_mode
      000515 74 01            [12] 1254 	mov	a,#0x01
      000517 F0               [24] 1255 	movx	@dptr,a
      000518                       1256 00103$:
                                   1257 ;	rf.c:142: RFIM |= RFIF_IRQ_DONE;
      000518 43 91 10         [24] 1258 	orl	_RFIM,#0x10
                                   1259 ;	rf.c:144: if(flags&Txcontinue){
      00051B 8F 06            [24] 1260 	mov	ar6,r7
      00051D EE               [12] 1261 	mov	a,r6
      00051E 30 E0 0D         [24] 1262 	jnb	acc.0,00108$
                                   1263 ;	rf.c:145: txidx = 1;
      000521 90 F2 05         [24] 1264 	mov	dptr,#_txidx
      000524 74 01            [12] 1265 	mov	a,#0x01
      000526 F0               [24] 1266 	movx	@dptr,a
                                   1267 ;	rf.c:146: RFD = rftxbuf[0];
      000527 90 F1 B7         [24] 1268 	mov	dptr,#_rftxbuf
      00052A E0               [24] 1269 	movx	a,@dptr
      00052B F5 D9            [12] 1270 	mov	_RFD,a
      00052D 22               [24] 1271 	ret
      00052E                       1272 00108$:
                                   1273 ;	rf.c:148: rfidle();
      00052E C0 07            [24] 1274 	push	ar7
      000530 12 04 BF         [24] 1275 	lcall	_rfidle
      000533 D0 07            [24] 1276 	pop	ar7
                                   1277 ;	rf.c:150: if(flags&Txrx) mode = Rftxrx;
      000535 EF               [12] 1278 	mov	a,r7
      000536 30 E1 08         [24] 1279 	jnb	acc.1,00105$
      000539 90 F2 8D         [24] 1280 	mov	dptr,#_mode
      00053C 74 04            [12] 1281 	mov	a,#0x04
      00053E F0               [24] 1282 	movx	@dptr,a
      00053F 80 06            [24] 1283 	sjmp	00106$
      000541                       1284 00105$:
                                   1285 ;	rf.c:151: else mode = Rftx;
      000541 90 F2 8D         [24] 1286 	mov	dptr,#_mode
      000544 74 01            [12] 1287 	mov	a,#0x01
      000546 F0               [24] 1288 	movx	@dptr,a
      000547                       1289 00106$:
                                   1290 ;	rf.c:152: RED = 1;
      000547 D2 91            [12] 1291 	setb	_P1_1
                                   1292 ;	rf.c:153: txidx = 0;
      000549 90 F2 05         [24] 1293 	mov	dptr,#_txidx
      00054C E4               [12] 1294 	clr	a
      00054D F0               [24] 1295 	movx	@dptr,a
                                   1296 ;	rf.c:154: RFST = RFST_STX;
      00054E 75 E1 03         [24] 1297 	mov	_RFST,#0x03
      000551 22               [24] 1298 	ret
                                   1299 ;------------------------------------------------------------
                                   1300 ;Allocation info for local variables in function 'rfwakeup'
                                   1301 ;------------------------------------------------------------
                                   1302 ;n                         Allocated with name '_rfwakeup_n_1_56'
                                   1303 ;------------------------------------------------------------
                                   1304 ;	rf.c:159: rfwakeup(uint16 n)
                                   1305 ;	-----------------------------------------
                                   1306 ;	 function rfwakeup
                                   1307 ;	-----------------------------------------
      000552                       1308 _rfwakeup:
      000552 AF 83            [24] 1309 	mov	r7,dph
      000554 E5 82            [12] 1310 	mov	a,dpl
      000556 90 F2 11         [24] 1311 	mov	dptr,#_rfwakeup_n_1_56
      000559 F0               [24] 1312 	movx	@dptr,a
      00055A EF               [12] 1313 	mov	a,r7
      00055B A3               [24] 1314 	inc	dptr
      00055C F0               [24] 1315 	movx	@dptr,a
                                   1316 ;	rf.c:161: rfidle();
      00055D 12 04 BF         [24] 1317 	lcall	_rfidle
                                   1318 ;	rf.c:163: RED = 1;
      000560 D2 91            [12] 1319 	setb	_P1_1
                                   1320 ;	rf.c:164: mode = Rfwakeup;
      000562 90 F2 8D         [24] 1321 	mov	dptr,#_mode
      000565 74 05            [12] 1322 	mov	a,#0x05
      000567 F0               [24] 1323 	movx	@dptr,a
                                   1324 ;	rf.c:165: nwakeup = n;
      000568 90 F2 11         [24] 1325 	mov	dptr,#_rfwakeup_n_1_56
      00056B E0               [24] 1326 	movx	a,@dptr
      00056C FE               [12] 1327 	mov	r6,a
      00056D A3               [24] 1328 	inc	dptr
      00056E E0               [24] 1329 	movx	a,@dptr
      00056F FF               [12] 1330 	mov	r7,a
      000570 90 F2 0E         [24] 1331 	mov	dptr,#_nwakeup
      000573 EE               [12] 1332 	mov	a,r6
      000574 F0               [24] 1333 	movx	@dptr,a
      000575 EF               [12] 1334 	mov	a,r7
      000576 A3               [24] 1335 	inc	dptr
      000577 F0               [24] 1336 	movx	@dptr,a
                                   1337 ;	rf.c:167: PKTLEN = n%0xff;
      000578 90 F2 88         [24] 1338 	mov	dptr,#__moduint_PARM_2
      00057B 74 FF            [12] 1339 	mov	a,#0xFF
      00057D F0               [24] 1340 	movx	@dptr,a
      00057E E4               [12] 1341 	clr	a
      00057F A3               [24] 1342 	inc	dptr
      000580 F0               [24] 1343 	movx	@dptr,a
      000581 8E 82            [24] 1344 	mov	dpl,r6
      000583 8F 83            [24] 1345 	mov	dph,r7
      000585 12 1D B8         [24] 1346 	lcall	__moduint
      000588 AE 82            [24] 1347 	mov	r6,dpl
      00058A 90 DF 02         [24] 1348 	mov	dptr,#_PKTLEN
      00058D EE               [12] 1349 	mov	a,r6
      00058E F0               [24] 1350 	movx	@dptr,a
                                   1351 ;	rf.c:168: MDMCFG2 = 0;
      00058F 90 DF 0E         [24] 1352 	mov	dptr,#_MDMCFG2
      000592 E4               [12] 1353 	clr	a
      000593 F0               [24] 1354 	movx	@dptr,a
                                   1355 ;	rf.c:171: if(nwakeup > 0xff)
      000594 90 F2 0E         [24] 1356 	mov	dptr,#_nwakeup
      000597 E0               [24] 1357 	movx	a,@dptr
      000598 FE               [12] 1358 	mov	r6,a
      000599 A3               [24] 1359 	inc	dptr
      00059A E0               [24] 1360 	movx	a,@dptr
      00059B FF               [12] 1361 	mov	r7,a
      00059C C3               [12] 1362 	clr	c
      00059D 74 FF            [12] 1363 	mov	a,#0xFF
      00059F 9E               [12] 1364 	subb	a,r6
      0005A0 E4               [12] 1365 	clr	a
      0005A1 9F               [12] 1366 	subb	a,r7
      0005A2 50 0B            [24] 1367 	jnc	00102$
                                   1368 ;	rf.c:172: PKTCTRL0 = (PKTCTRL0&~PKTCTRL0_LENGTH_CONFIG) | 0x2;
      0005A4 90 DF 04         [24] 1369 	mov	dptr,#_PKTCTRL0
      0005A7 E0               [24] 1370 	movx	a,@dptr
      0005A8 FF               [12] 1371 	mov	r7,a
      0005A9 74 FC            [12] 1372 	mov	a,#0xFC
      0005AB 5F               [12] 1373 	anl	a,r7
      0005AC 44 02            [12] 1374 	orl	a,#0x02
      0005AE F0               [24] 1375 	movx	@dptr,a
      0005AF                       1376 00102$:
                                   1377 ;	rf.c:174: RFIM |= RFIF_IRQ_DONE;
      0005AF 43 91 10         [24] 1378 	orl	_RFIM,#0x10
                                   1379 ;	rf.c:175: RFST = RFST_STX;
      0005B2 75 E1 03         [24] 1380 	mov	_RFST,#0x03
      0005B5 22               [24] 1381 	ret
                                   1382 ;------------------------------------------------------------
                                   1383 ;Allocation info for local variables in function 'rftxrxintr'
                                   1384 ;------------------------------------------------------------
                                   1385 ;	rf.c:179: rftxrxintr(void) __interrupt RFTXRX_VECTOR
                                   1386 ;	-----------------------------------------
                                   1387 ;	 function rftxrxintr
                                   1388 ;	-----------------------------------------
      0005B6                       1389 _rftxrxintr:
      0005B6 C0 20            [24] 1390 	push	bits
      0005B8 C0 E0            [24] 1391 	push	acc
      0005BA C0 F0            [24] 1392 	push	b
      0005BC C0 82            [24] 1393 	push	dpl
      0005BE C0 83            [24] 1394 	push	dph
      0005C0 C0 07            [24] 1395 	push	(0+7)
      0005C2 C0 06            [24] 1396 	push	(0+6)
      0005C4 C0 05            [24] 1397 	push	(0+5)
      0005C6 C0 04            [24] 1398 	push	(0+4)
      0005C8 C0 03            [24] 1399 	push	(0+3)
      0005CA C0 02            [24] 1400 	push	(0+2)
      0005CC C0 01            [24] 1401 	push	(0+1)
      0005CE C0 00            [24] 1402 	push	(0+0)
      0005D0 C0 D0            [24] 1403 	push	psw
      0005D2 75 D0 00         [24] 1404 	mov	psw,#0x00
                                   1405 ;	rf.c:181: RFTXRXIF = 0;
      0005D5 C2 89            [12] 1406 	clr	_RFTXRXIF
                                   1407 ;	rf.c:183: switch(MARCSTATE){
      0005D7 90 DF 3B         [24] 1408 	mov	dptr,#_MARCSTATE
      0005DA E0               [24] 1409 	movx	a,@dptr
      0005DB FF               [12] 1410 	mov	r7,a
      0005DC BF 0D 02         [24] 1411 	cjne	r7,#0x0D,00145$
      0005DF 80 08            [24] 1412 	sjmp	00101$
      0005E1                       1413 00145$:
      0005E1 BF 13 02         [24] 1414 	cjne	r7,#0x13,00146$
      0005E4 80 41            [24] 1415 	sjmp	00104$
      0005E6                       1416 00146$:
      0005E6 02 06 C3         [24] 1417 	ljmp	00116$
                                   1418 ;	rf.c:184: case MARC_STATE_RX:
      0005E9                       1419 00101$:
                                   1420 ;	rf.c:185: rfrxbuf[rxidx++] = RFD;
      0005E9 90 F1 B6         [24] 1421 	mov	dptr,#_rxidx
      0005EC E0               [24] 1422 	movx	a,@dptr
      0005ED FF               [12] 1423 	mov	r7,a
      0005EE E0               [24] 1424 	movx	a,@dptr
      0005EF 24 01            [12] 1425 	add	a,#0x01
      0005F1 F0               [24] 1426 	movx	@dptr,a
      0005F2 EF               [12] 1427 	mov	a,r7
      0005F3 24 68            [12] 1428 	add	a,#_rfrxbuf
      0005F5 F5 82            [12] 1429 	mov	dpl,a
      0005F7 E4               [12] 1430 	clr	a
      0005F8 34 F1            [12] 1431 	addc	a,#(_rfrxbuf >> 8)
      0005FA F5 83            [12] 1432 	mov	dph,a
      0005FC E5 D9            [12] 1433 	mov	a,_RFD
      0005FE F0               [24] 1434 	movx	@dptr,a
                                   1435 ;	rf.c:186: if(rxidx >= Npkt)
      0005FF 90 F1 B6         [24] 1436 	mov	dptr,#_rxidx
      000602 E0               [24] 1437 	movx	a,@dptr
      000603 FF               [12] 1438 	mov	r7,a
      000604 BF 4E 00         [24] 1439 	cjne	r7,#0x4E,00147$
      000607                       1440 00147$:
      000607 40 05            [24] 1441 	jc	00103$
                                   1442 ;	rf.c:187: rxidx = 0;
      000609 90 F1 B6         [24] 1443 	mov	dptr,#_rxidx
      00060C E4               [12] 1444 	clr	a
      00060D F0               [24] 1445 	movx	@dptr,a
      00060E                       1446 00103$:
                                   1447 ;	rf.c:188: nrx++;
      00060E 90 F2 06         [24] 1448 	mov	dptr,#_nrx
      000611 E0               [24] 1449 	movx	a,@dptr
      000612 24 01            [12] 1450 	add	a,#0x01
      000614 F0               [24] 1451 	movx	@dptr,a
      000615 A3               [24] 1452 	inc	dptr
      000616 E0               [24] 1453 	movx	a,@dptr
      000617 34 00            [12] 1454 	addc	a,#0x00
      000619 F0               [24] 1455 	movx	@dptr,a
      00061A A3               [24] 1456 	inc	dptr
      00061B E0               [24] 1457 	movx	a,@dptr
      00061C 34 00            [12] 1458 	addc	a,#0x00
      00061E F0               [24] 1459 	movx	@dptr,a
      00061F A3               [24] 1460 	inc	dptr
      000620 E0               [24] 1461 	movx	a,@dptr
      000621 34 00            [12] 1462 	addc	a,#0x00
      000623 F0               [24] 1463 	movx	@dptr,a
                                   1464 ;	rf.c:189: break;
      000624 02 06 C3         [24] 1465 	ljmp	00116$
                                   1466 ;	rf.c:190: case MARC_STATE_TX:
      000627                       1467 00104$:
                                   1468 ;	rf.c:191: switch(mode){
      000627 90 F2 8D         [24] 1469 	mov	dptr,#_mode
      00062A E0               [24] 1470 	movx	a,@dptr
      00062B FF               [12] 1471 	mov	r7,a
      00062C BF 01 02         [24] 1472 	cjne	r7,#0x01,00149$
      00062F 80 57            [24] 1473 	sjmp	00111$
      000631                       1474 00149$:
      000631 BF 02 03         [24] 1475 	cjne	r7,#0x02,00150$
      000634 02 06 C3         [24] 1476 	ljmp	00116$
      000637                       1477 00150$:
      000637 BF 04 02         [24] 1478 	cjne	r7,#0x04,00151$
      00063A 80 4C            [24] 1479 	sjmp	00111$
      00063C                       1480 00151$:
      00063C BF 05 02         [24] 1481 	cjne	r7,#0x05,00152$
      00063F 80 17            [24] 1482 	sjmp	00107$
      000641                       1483 00152$:
                                   1484 ;	rf.c:192: default: panic("unknown mode");
      000641 74 F0            [12] 1485 	mov	a,#___str_0
      000643 C0 E0            [24] 1486 	push	acc
      000645 74 1F            [12] 1487 	mov	a,#(___str_0 >> 8)
      000647 C0 E0            [24] 1488 	push	acc
      000649 74 80            [12] 1489 	mov	a,#0x80
      00064B C0 E0            [24] 1490 	push	acc
      00064D 12 1B A6         [24] 1491 	lcall	_panic
      000650 15 81            [12] 1492 	dec	sp
      000652 15 81            [12] 1493 	dec	sp
      000654 15 81            [12] 1494 	dec	sp
                                   1495 ;	rf.c:200: case Rftxpreamble: break;
                                   1496 ;	rf.c:201: case Rfwakeup:
      000656 80 6B            [24] 1497 	sjmp	00116$
      000658                       1498 00107$:
                                   1499 ;	rf.c:202: RFD = 0x55;
      000658 75 D9 55         [24] 1500 	mov	_RFD,#0x55
                                   1501 ;	rf.c:203: if(--nwakeup == 0xff)
      00065B 90 F2 0E         [24] 1502 	mov	dptr,#_nwakeup
      00065E E0               [24] 1503 	movx	a,@dptr
      00065F 24 FF            [12] 1504 	add	a,#0xFF
      000661 FE               [12] 1505 	mov	r6,a
      000662 A3               [24] 1506 	inc	dptr
      000663 E0               [24] 1507 	movx	a,@dptr
      000664 34 FF            [12] 1508 	addc	a,#0xFF
      000666 FF               [12] 1509 	mov	r7,a
      000667 90 F2 0E         [24] 1510 	mov	dptr,#_nwakeup
      00066A EE               [12] 1511 	mov	a,r6
      00066B F0               [24] 1512 	movx	@dptr,a
      00066C EF               [12] 1513 	mov	a,r7
      00066D A3               [24] 1514 	inc	dptr
      00066E F0               [24] 1515 	movx	@dptr,a
      00066F 90 F2 0E         [24] 1516 	mov	dptr,#_nwakeup
      000672 E0               [24] 1517 	movx	a,@dptr
      000673 FE               [12] 1518 	mov	r6,a
      000674 A3               [24] 1519 	inc	dptr
      000675 E0               [24] 1520 	movx	a,@dptr
      000676 FF               [12] 1521 	mov	r7,a
      000677 BE FF 49         [24] 1522 	cjne	r6,#0xFF,00116$
      00067A BF 00 46         [24] 1523 	cjne	r7,#0x00,00116$
                                   1524 ;	rf.c:204: PKTCTRL0 &= ~PKTCTRL0_LENGTH_CONFIG;
      00067D 90 DF 04         [24] 1525 	mov	dptr,#_PKTCTRL0
      000680 E0               [24] 1526 	movx	a,@dptr
      000681 FF               [12] 1527 	mov	r7,a
      000682 74 FC            [12] 1528 	mov	a,#0xFC
      000684 5F               [12] 1529 	anl	a,r7
      000685 F0               [24] 1530 	movx	@dptr,a
                                   1531 ;	rf.c:205: break;
                                   1532 ;	rf.c:207: case Rftxrx:
      000686 80 3B            [24] 1533 	sjmp	00116$
      000688                       1534 00111$:
                                   1535 ;	rf.c:208: RFD = rftxbuf[txidx++];
      000688 90 F2 05         [24] 1536 	mov	dptr,#_txidx
      00068B E0               [24] 1537 	movx	a,@dptr
      00068C FF               [12] 1538 	mov	r7,a
      00068D E0               [24] 1539 	movx	a,@dptr
      00068E 24 01            [12] 1540 	add	a,#0x01
      000690 F0               [24] 1541 	movx	@dptr,a
      000691 EF               [12] 1542 	mov	a,r7
      000692 24 B7            [12] 1543 	add	a,#_rftxbuf
      000694 F5 82            [12] 1544 	mov	dpl,a
      000696 E4               [12] 1545 	clr	a
      000697 34 F1            [12] 1546 	addc	a,#(_rftxbuf >> 8)
      000699 F5 83            [12] 1547 	mov	dph,a
      00069B E0               [24] 1548 	movx	a,@dptr
      00069C F5 D9            [12] 1549 	mov	_RFD,a
                                   1550 ;	rf.c:209: if(txidx >= Npkt)
      00069E 90 F2 05         [24] 1551 	mov	dptr,#_txidx
      0006A1 E0               [24] 1552 	movx	a,@dptr
      0006A2 FF               [12] 1553 	mov	r7,a
      0006A3 BF 4E 00         [24] 1554 	cjne	r7,#0x4E,00155$
      0006A6                       1555 00155$:
      0006A6 40 05            [24] 1556 	jc	00113$
                                   1557 ;	rf.c:210: txidx = 0;
      0006A8 90 F2 05         [24] 1558 	mov	dptr,#_txidx
      0006AB E4               [12] 1559 	clr	a
      0006AC F0               [24] 1560 	movx	@dptr,a
      0006AD                       1561 00113$:
                                   1562 ;	rf.c:211: ntx++;
      0006AD 90 F2 0A         [24] 1563 	mov	dptr,#_ntx
      0006B0 E0               [24] 1564 	movx	a,@dptr
      0006B1 24 01            [12] 1565 	add	a,#0x01
      0006B3 F0               [24] 1566 	movx	@dptr,a
      0006B4 A3               [24] 1567 	inc	dptr
      0006B5 E0               [24] 1568 	movx	a,@dptr
      0006B6 34 00            [12] 1569 	addc	a,#0x00
      0006B8 F0               [24] 1570 	movx	@dptr,a
      0006B9 A3               [24] 1571 	inc	dptr
      0006BA E0               [24] 1572 	movx	a,@dptr
      0006BB 34 00            [12] 1573 	addc	a,#0x00
      0006BD F0               [24] 1574 	movx	@dptr,a
      0006BE A3               [24] 1575 	inc	dptr
      0006BF E0               [24] 1576 	movx	a,@dptr
      0006C0 34 00            [12] 1577 	addc	a,#0x00
      0006C2 F0               [24] 1578 	movx	@dptr,a
                                   1579 ;	rf.c:215: }
      0006C3                       1580 00116$:
      0006C3 D0 D0            [24] 1581 	pop	psw
      0006C5 D0 00            [24] 1582 	pop	(0+0)
      0006C7 D0 01            [24] 1583 	pop	(0+1)
      0006C9 D0 02            [24] 1584 	pop	(0+2)
      0006CB D0 03            [24] 1585 	pop	(0+3)
      0006CD D0 04            [24] 1586 	pop	(0+4)
      0006CF D0 05            [24] 1587 	pop	(0+5)
      0006D1 D0 06            [24] 1588 	pop	(0+6)
      0006D3 D0 07            [24] 1589 	pop	(0+7)
      0006D5 D0 83            [24] 1590 	pop	dph
      0006D7 D0 82            [24] 1591 	pop	dpl
      0006D9 D0 F0            [24] 1592 	pop	b
      0006DB D0 E0            [24] 1593 	pop	acc
      0006DD D0 20            [24] 1594 	pop	bits
      0006DF 32               [24] 1595 	reti
                                   1596 ;------------------------------------------------------------
                                   1597 ;Allocation info for local variables in function 'rfrfintr'
                                   1598 ;------------------------------------------------------------
                                   1599 ;	rf.c:219: rfrfintr(void) __interrupt RF_VECTOR
                                   1600 ;	-----------------------------------------
                                   1601 ;	 function rfrfintr
                                   1602 ;	-----------------------------------------
      0006E0                       1603 _rfrfintr:
      0006E0 C0 20            [24] 1604 	push	bits
      0006E2 C0 E0            [24] 1605 	push	acc
      0006E4 C0 F0            [24] 1606 	push	b
      0006E6 C0 82            [24] 1607 	push	dpl
      0006E8 C0 83            [24] 1608 	push	dph
      0006EA C0 07            [24] 1609 	push	(0+7)
      0006EC C0 06            [24] 1610 	push	(0+6)
      0006EE C0 05            [24] 1611 	push	(0+5)
      0006F0 C0 04            [24] 1612 	push	(0+4)
      0006F2 C0 03            [24] 1613 	push	(0+3)
      0006F4 C0 02            [24] 1614 	push	(0+2)
      0006F6 C0 01            [24] 1615 	push	(0+1)
      0006F8 C0 00            [24] 1616 	push	(0+0)
      0006FA C0 D0            [24] 1617 	push	psw
      0006FC 75 D0 00         [24] 1618 	mov	psw,#0x00
                                   1619 ;	rf.c:222: S1CON &= ~(S1CON_RFIF_0|S1CON_RFIF_1);
      0006FF AF 9B            [24] 1620 	mov	r7,_S1CON
      000701 74 FC            [12] 1621 	mov	a,#0xFC
      000703 5F               [12] 1622 	anl	a,r7
      000704 F5 9B            [12] 1623 	mov	_S1CON,a
                                   1624 ;	rf.c:224: if(RFIF & RFIF_IRQ_SFD){
      000706 E5 E9            [12] 1625 	mov	a,_RFIF
      000708 30 E0 0C         [24] 1626 	jnb	acc.0,00120$
                                   1627 ;	rf.c:225: GREEN = 1;
      00070B D2 90            [12] 1628 	setb	_P1_0
                                   1629 ;	rf.c:226: RFIF &= ~RFIF_IRQ_SFD;
      00070D AF E9            [24] 1630 	mov	r7,_RFIF
      00070F 74 FE            [12] 1631 	mov	a,#0xFE
      000711 5F               [12] 1632 	anl	a,r7
      000712 F5 E9            [12] 1633 	mov	_RFIF,a
      000714 02 07 F1         [24] 1634 	ljmp	00122$
      000717                       1635 00120$:
                                   1636 ;	rf.c:227: }else if(RFIF & RFIF_IRQ_RXOVF){
      000717 E5 E9            [12] 1637 	mov	a,_RFIF
      000719 30 E6 1F         [24] 1638 	jnb	acc.6,00117$
                                   1639 ;	rf.c:228: RFIF &= ~RFIF_IRQ_RXOVF;
      00071C AF E9            [24] 1640 	mov	r7,_RFIF
      00071E 74 BF            [12] 1641 	mov	a,#0xBF
      000720 5F               [12] 1642 	anl	a,r7
      000721 F5 E9            [12] 1643 	mov	_RFIF,a
                                   1644 ;	rf.c:229: panic("rx overflow");
      000723 74 FD            [12] 1645 	mov	a,#___str_1
      000725 C0 E0            [24] 1646 	push	acc
      000727 74 1F            [12] 1647 	mov	a,#(___str_1 >> 8)
      000729 C0 E0            [24] 1648 	push	acc
      00072B 74 80            [12] 1649 	mov	a,#0x80
      00072D C0 E0            [24] 1650 	push	acc
      00072F 12 1B A6         [24] 1651 	lcall	_panic
      000732 15 81            [12] 1652 	dec	sp
      000734 15 81            [12] 1653 	dec	sp
      000736 15 81            [12] 1654 	dec	sp
      000738 02 07 F1         [24] 1655 	ljmp	00122$
      00073B                       1656 00117$:
                                   1657 ;	rf.c:230: }else if(RFIF & RFIF_IRQ_TXUNF){
      00073B E5 E9            [12] 1658 	mov	a,_RFIF
      00073D 30 E7 22         [24] 1659 	jnb	acc.7,00114$
                                   1660 ;	rf.c:231: panic("tx underflow");
      000740 74 09            [12] 1661 	mov	a,#___str_2
      000742 C0 E0            [24] 1662 	push	acc
      000744 74 20            [12] 1663 	mov	a,#(___str_2 >> 8)
      000746 C0 E0            [24] 1664 	push	acc
      000748 74 80            [12] 1665 	mov	a,#0x80
      00074A C0 E0            [24] 1666 	push	acc
      00074C 12 1B A6         [24] 1667 	lcall	_panic
      00074F 15 81            [12] 1668 	dec	sp
      000751 15 81            [12] 1669 	dec	sp
      000753 15 81            [12] 1670 	dec	sp
                                   1671 ;	rf.c:232: RFIF &= ~RFIF_IRQ_TXUNF;
      000755 AF E9            [24] 1672 	mov	r7,_RFIF
      000757 74 7F            [12] 1673 	mov	a,#0x7F
      000759 5F               [12] 1674 	anl	a,r7
      00075A F5 E9            [12] 1675 	mov	_RFIF,a
                                   1676 ;	rf.c:233: RFST = RFST_SIDLE;
      00075C 75 E1 04         [24] 1677 	mov	_RFST,#0x04
      00075F 02 07 F1         [24] 1678 	ljmp	00122$
      000762                       1679 00114$:
                                   1680 ;	rf.c:234: }else if(RFIF & RFIF_IRQ_DONE){
      000762 E5 E9            [12] 1681 	mov	a,_RFIF
      000764 20 E4 03         [24] 1682 	jb	acc.4,00145$
      000767 02 07 DC         [24] 1683 	ljmp	00111$
      00076A                       1684 00145$:
                                   1685 ;	rf.c:235: switch(mode){
      00076A 90 F2 8D         [24] 1686 	mov	dptr,#_mode
      00076D E0               [24] 1687 	movx	a,@dptr
      00076E FF               [12] 1688 	mov  r7,a
      00076F 24 FA            [12] 1689 	add	a,#0xff - 0x05
      000771 40 3F            [24] 1690 	jc	00106$
      000773 EF               [12] 1691 	mov	a,r7
      000774 2F               [12] 1692 	add	a,r7
      000775 2F               [12] 1693 	add	a,r7
      000776 90 07 7A         [24] 1694 	mov	dptr,#00147$
      000779 73               [24] 1695 	jmp	@a+dptr
      00077A                       1696 00147$:
      00077A 02 07 8C         [24] 1697 	ljmp	00101$
      00077D 02 07 9A         [24] 1698 	ljmp	00103$
      000780 02 07 B2         [24] 1699 	ljmp	00106$
      000783 02 07 A7         [24] 1700 	ljmp	00105$
      000786 02 07 9A         [24] 1701 	ljmp	00104$
      000789 02 07 8E         [24] 1702 	ljmp	00102$
                                   1703 ;	rf.c:236: case Rfidle: 
      00078C                       1704 00101$:
                                   1705 ;	rf.c:237: break;
                                   1706 ;	rf.c:238: case Rfwakeup:
      00078C 80 24            [24] 1707 	sjmp	00106$
      00078E                       1708 00102$:
                                   1709 ;	rf.c:239: PKTLEN = Npkt;
      00078E 90 DF 02         [24] 1710 	mov	dptr,#_PKTLEN
      000791 74 4E            [12] 1711 	mov	a,#0x4E
      000793 F0               [24] 1712 	movx	@dptr,a
                                   1713 ;	rf.c:240: MDMCFG2 = 0x01;
      000794 90 DF 0E         [24] 1714 	mov	dptr,#_MDMCFG2
      000797 74 01            [12] 1715 	mov	a,#0x01
      000799 F0               [24] 1716 	movx	@dptr,a
                                   1717 ;	rf.c:241: case Rftx:
      00079A                       1718 00103$:
                                   1719 ;	rf.c:242: case Rftxrx:
      00079A                       1720 00104$:
                                   1721 ;	rf.c:243: flag |= Frftx;
      00079A 90 F0 00         [24] 1722 	mov	dptr,#_flag
      00079D E0               [24] 1723 	movx	a,@dptr
      00079E FF               [12] 1724 	mov	r7,a
      00079F 74 08            [12] 1725 	mov	a,#0x08
      0007A1 4F               [12] 1726 	orl	a,r7
      0007A2 F0               [24] 1727 	movx	@dptr,a
                                   1728 ;	rf.c:244: RED = 0;
      0007A3 C2 91            [12] 1729 	clr	_P1_1
                                   1730 ;	rf.c:245: break;
                                   1731 ;	rf.c:246: case Rfrx:
      0007A5 80 0B            [24] 1732 	sjmp	00106$
      0007A7                       1733 00105$:
                                   1734 ;	rf.c:247: flag |= Frfrx;
      0007A7 90 F0 00         [24] 1735 	mov	dptr,#_flag
      0007AA E0               [24] 1736 	movx	a,@dptr
      0007AB FF               [12] 1737 	mov	r7,a
      0007AC 74 04            [12] 1738 	mov	a,#0x04
      0007AE 4F               [12] 1739 	orl	a,r7
      0007AF F0               [24] 1740 	movx	@dptr,a
                                   1741 ;	rf.c:248: GREEN = 0;
      0007B0 C2 90            [12] 1742 	clr	_P1_0
                                   1743 ;	rf.c:250: }
      0007B2                       1744 00106$:
                                   1745 ;	rf.c:252: if(mode == Rftxrx){
      0007B2 90 F2 8D         [24] 1746 	mov	dptr,#_mode
      0007B5 E0               [24] 1747 	movx	a,@dptr
      0007B6 FF               [12] 1748 	mov	r7,a
      0007B7 BF 04 11         [24] 1749 	cjne	r7,#0x04,00108$
                                   1750 ;	rf.c:253: mode = Rfrx;
      0007BA 90 F2 8D         [24] 1751 	mov	dptr,#_mode
      0007BD 74 03            [12] 1752 	mov	a,#0x03
      0007BF F0               [24] 1753 	movx	@dptr,a
                                   1754 ;	rf.c:254: MCSM1 = (MCSM1&~MCSM1_TXOFF_MODE) | MCSM1_TXOFF_MODE_IDLE;
      0007C0 90 DF 13         [24] 1755 	mov	dptr,#_MCSM1
      0007C3 E0               [24] 1756 	movx	a,@dptr
      0007C4 FF               [12] 1757 	mov	r7,a
      0007C5 74 FC            [12] 1758 	mov	a,#0xFC
      0007C7 5F               [12] 1759 	anl	a,r7
      0007C8 F0               [24] 1760 	movx	@dptr,a
      0007C9 80 08            [24] 1761 	sjmp	00109$
      0007CB                       1762 00108$:
                                   1763 ;	rf.c:256: mode = Rfidle;
      0007CB 90 F2 8D         [24] 1764 	mov	dptr,#_mode
      0007CE E4               [12] 1765 	clr	a
      0007CF F0               [24] 1766 	movx	@dptr,a
                                   1767 ;	rf.c:257: RFST = RFST_SIDLE;
      0007D0 75 E1 04         [24] 1768 	mov	_RFST,#0x04
      0007D3                       1769 00109$:
                                   1770 ;	rf.c:260: RFIF &= ~RFIF_IRQ_DONE;
      0007D3 AF E9            [24] 1771 	mov	r7,_RFIF
      0007D5 74 EF            [12] 1772 	mov	a,#0xEF
      0007D7 5F               [12] 1773 	anl	a,r7
      0007D8 F5 E9            [12] 1774 	mov	_RFIF,a
      0007DA 80 15            [24] 1775 	sjmp	00122$
      0007DC                       1776 00111$:
                                   1777 ;	rf.c:262: panic("unknown rfrfintr!");
      0007DC 74 16            [12] 1778 	mov	a,#___str_3
      0007DE C0 E0            [24] 1779 	push	acc
      0007E0 74 20            [12] 1780 	mov	a,#(___str_3 >> 8)
      0007E2 C0 E0            [24] 1781 	push	acc
      0007E4 74 80            [12] 1782 	mov	a,#0x80
      0007E6 C0 E0            [24] 1783 	push	acc
      0007E8 12 1B A6         [24] 1784 	lcall	_panic
      0007EB 15 81            [12] 1785 	dec	sp
      0007ED 15 81            [12] 1786 	dec	sp
      0007EF 15 81            [12] 1787 	dec	sp
      0007F1                       1788 00122$:
      0007F1 D0 D0            [24] 1789 	pop	psw
      0007F3 D0 00            [24] 1790 	pop	(0+0)
      0007F5 D0 01            [24] 1791 	pop	(0+1)
      0007F7 D0 02            [24] 1792 	pop	(0+2)
      0007F9 D0 03            [24] 1793 	pop	(0+3)
      0007FB D0 04            [24] 1794 	pop	(0+4)
      0007FD D0 05            [24] 1795 	pop	(0+5)
      0007FF D0 06            [24] 1796 	pop	(0+6)
      000801 D0 07            [24] 1797 	pop	(0+7)
      000803 D0 83            [24] 1798 	pop	dph
      000805 D0 82            [24] 1799 	pop	dpl
      000807 D0 F0            [24] 1800 	pop	b
      000809 D0 E0            [24] 1801 	pop	acc
      00080B D0 20            [24] 1802 	pop	bits
      00080D 32               [24] 1803 	reti
                                   1804 	.area CSEG    (CODE)
                                   1805 	.area CONST   (CODE)
      001FF0                       1806 ___str_0:
      001FF0 75 6E 6B 6E 6F 77 6E  1807 	.ascii "unknown mode"
             20 6D 6F 64 65
      001FFC 00                    1808 	.db 0x00
      001FFD                       1809 ___str_1:
      001FFD 72 78 20 6F 76 65 72  1810 	.ascii "rx overflow"
             66 6C 6F 77
      002008 00                    1811 	.db 0x00
      002009                       1812 ___str_2:
      002009 74 78 20 75 6E 64 65  1813 	.ascii "tx underflow"
             72 66 6C 6F 77
      002015 00                    1814 	.db 0x00
      002016                       1815 ___str_3:
      002016 75 6E 6B 6E 6F 77 6E  1816 	.ascii "unknown rfrfintr!"
             20 72 66 72 66 69 6E
             74 72 21
      002027 00                    1817 	.db 0x00
                                   1818 	.area XINIT   (CODE)
      00205B                       1819 __xinit__mode:
      00205B 00                    1820 	.db #0x00	; 0
                                   1821 	.area CABS    (ABS,CODE)
