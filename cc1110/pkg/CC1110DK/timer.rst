                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 21:19:18 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module timer
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _t1intr
                                     13 	.globl _MODE
                                     14 	.globl _RE
                                     15 	.globl _SLAVE
                                     16 	.globl _FE
                                     17 	.globl _ERR
                                     18 	.globl _RX_BYTE
                                     19 	.globl _TX_BYTE
                                     20 	.globl _ACTIVE
                                     21 	.globl _B_7
                                     22 	.globl _B_6
                                     23 	.globl _B_5
                                     24 	.globl _B_4
                                     25 	.globl _B_3
                                     26 	.globl _B_2
                                     27 	.globl _B_1
                                     28 	.globl _B_0
                                     29 	.globl _WDTIF
                                     30 	.globl _P1IF
                                     31 	.globl _UTX1IF
                                     32 	.globl _UTX0IF
                                     33 	.globl _P2IF
                                     34 	.globl _ACC_7
                                     35 	.globl _ACC_6
                                     36 	.globl _ACC_5
                                     37 	.globl _ACC_4
                                     38 	.globl _ACC_3
                                     39 	.globl _ACC_2
                                     40 	.globl _ACC_1
                                     41 	.globl _ACC_0
                                     42 	.globl _OVFIM
                                     43 	.globl _T4CH1IF
                                     44 	.globl _T4CH0IF
                                     45 	.globl _T4OVFIF
                                     46 	.globl _T3CH1IF
                                     47 	.globl _T3CH0IF
                                     48 	.globl _T3OVFIF
                                     49 	.globl _CY
                                     50 	.globl _AC
                                     51 	.globl _F0
                                     52 	.globl _RS1
                                     53 	.globl _RS0
                                     54 	.globl _OV
                                     55 	.globl _F1
                                     56 	.globl _P
                                     57 	.globl _STIF
                                     58 	.globl _P0IF
                                     59 	.globl _T4IF
                                     60 	.globl _T3IF
                                     61 	.globl _T2IF
                                     62 	.globl _T1IF
                                     63 	.globl _DMAIF
                                     64 	.globl _P0IE
                                     65 	.globl _T4IE
                                     66 	.globl _T3IE
                                     67 	.globl _T2IE
                                     68 	.globl _T1IE
                                     69 	.globl _DMAIE
                                     70 	.globl _EA
                                     71 	.globl _STIE
                                     72 	.globl _ENCIE
                                     73 	.globl _URX1IE
                                     74 	.globl _URX0IE
                                     75 	.globl _ADCIE
                                     76 	.globl _RFTXRXIE
                                     77 	.globl _P2_7
                                     78 	.globl _P2_6
                                     79 	.globl _P2_5
                                     80 	.globl _P2_4
                                     81 	.globl _P2_3
                                     82 	.globl _P2_2
                                     83 	.globl _P2_1
                                     84 	.globl _P2_0
                                     85 	.globl _ENCIF_1
                                     86 	.globl _ENCIF_0
                                     87 	.globl _P1_7
                                     88 	.globl _P1_6
                                     89 	.globl _P1_5
                                     90 	.globl _P1_4
                                     91 	.globl _P1_3
                                     92 	.globl _P1_2
                                     93 	.globl _P1_1
                                     94 	.globl _P1_0
                                     95 	.globl _URX1IF
                                     96 	.globl _ADCIF
                                     97 	.globl _URX0IF
                                     98 	.globl _IT1
                                     99 	.globl _RFTXRXIF
                                    100 	.globl _IT0
                                    101 	.globl _P0_7
                                    102 	.globl _P0_6
                                    103 	.globl _P0_5
                                    104 	.globl _P0_4
                                    105 	.globl _P0_3
                                    106 	.globl _P0_2
                                    107 	.globl _P0_1
                                    108 	.globl _P0_0
                                    109 	.globl _P2DIR
                                    110 	.globl _P1DIR
                                    111 	.globl _P0DIR
                                    112 	.globl _U1GCR
                                    113 	.globl _U1UCR
                                    114 	.globl _U1BAUD
                                    115 	.globl _U1DBUF
                                    116 	.globl _U1CSR
                                    117 	.globl _P2INP
                                    118 	.globl _P1INP
                                    119 	.globl _P2SEL
                                    120 	.globl _P1SEL
                                    121 	.globl _P0SEL
                                    122 	.globl _ADCCFG
                                    123 	.globl _PERCFG
                                    124 	.globl _B
                                    125 	.globl _T4CC1
                                    126 	.globl _T4CCTL1
                                    127 	.globl _T4CC0
                                    128 	.globl _T4CCTL0
                                    129 	.globl _T4CTL
                                    130 	.globl _T4CNT
                                    131 	.globl _RFIF
                                    132 	.globl _IRCON2
                                    133 	.globl _T1CCTL2
                                    134 	.globl _T1CCTL1
                                    135 	.globl _T1CCTL0
                                    136 	.globl _T1CTL
                                    137 	.globl _T1CNTH
                                    138 	.globl _T1CNTL
                                    139 	.globl _RFST
                                    140 	.globl _ACC
                                    141 	.globl _T1CC2H
                                    142 	.globl _T1CC2L
                                    143 	.globl _T1CC1H
                                    144 	.globl _T1CC1L
                                    145 	.globl _T1CC0H
                                    146 	.globl _T1CC0L
                                    147 	.globl _RFD
                                    148 	.globl _TIMIF
                                    149 	.globl _DMAREQ
                                    150 	.globl _DMAARM
                                    151 	.globl _DMA0CFGH
                                    152 	.globl _DMA0CFGL
                                    153 	.globl _DMA1CFGH
                                    154 	.globl _DMA1CFGL
                                    155 	.globl _DMAIRQ
                                    156 	.globl _PSW
                                    157 	.globl _T3CC1
                                    158 	.globl _T3CCTL1
                                    159 	.globl _T3CC0
                                    160 	.globl _T3CCTL0
                                    161 	.globl _T3CTL
                                    162 	.globl _T3CNT
                                    163 	.globl _WDCTL
                                    164 	.globl __SFRC8
                                    165 	.globl _MEMCTR
                                    166 	.globl _CLKCON
                                    167 	.globl _U0GCR
                                    168 	.globl _U0UCR
                                    169 	.globl __SFRC3
                                    170 	.globl _U0BAUD
                                    171 	.globl _U0DBUF
                                    172 	.globl _IRCON
                                    173 	.globl __SFRBF
                                    174 	.globl _SLEEP
                                    175 	.globl _RNDH
                                    176 	.globl _RNDL
                                    177 	.globl _ADCH
                                    178 	.globl _ADCL
                                    179 	.globl _IP1
                                    180 	.globl _IEN1
                                    181 	.globl __SFRB7
                                    182 	.globl _ADCCON3
                                    183 	.globl _ADCCON2
                                    184 	.globl _ADCCON1
                                    185 	.globl _ENCCS
                                    186 	.globl _ENCDO
                                    187 	.globl _ENCDI
                                    188 	.globl __SFRB0
                                    189 	.globl _FWDATA
                                    190 	.globl _FCTL
                                    191 	.globl _FADDRH
                                    192 	.globl _FADDRL
                                    193 	.globl _FWT
                                    194 	.globl __SFRAA
                                    195 	.globl _IP0
                                    196 	.globl _IEN0
                                    197 	.globl __SFRA7
                                    198 	.globl _WORTIME1
                                    199 	.globl _WORTIME0
                                    200 	.globl _WOREVT1
                                    201 	.globl _WOREVT0
                                    202 	.globl _WORCTRL
                                    203 	.globl _WORIRQ
                                    204 	.globl _P2
                                    205 	.globl __SFR9F
                                    206 	.globl _T2CTL
                                    207 	.globl _T2PR
                                    208 	.globl _T2CT
                                    209 	.globl _S1CON
                                    210 	.globl _IEN2
                                    211 	.globl __SFR99
                                    212 	.globl _S0CON
                                    213 	.globl __SFR97
                                    214 	.globl __SFR96
                                    215 	.globl __SFR95
                                    216 	.globl __SFR94
                                    217 	.globl __XPAGE
                                    218 	.globl _MPAGE
                                    219 	.globl _DPS
                                    220 	.globl _RFIM
                                    221 	.globl _P1
                                    222 	.globl _P0INP
                                    223 	.globl __SFR8E
                                    224 	.globl _P1IEN
                                    225 	.globl _PICTL
                                    226 	.globl _P2IFG
                                    227 	.globl _P1IFG
                                    228 	.globl _P0IFG
                                    229 	.globl _TCON
                                    230 	.globl _PCON
                                    231 	.globl _U0CSR
                                    232 	.globl _DPH1
                                    233 	.globl _DPL1
                                    234 	.globl _DPH0
                                    235 	.globl _DPL0
                                    236 	.globl _SP
                                    237 	.globl _P0
                                    238 	.globl _X_P2DIR
                                    239 	.globl _X_P1DIR
                                    240 	.globl _X_P0DIR
                                    241 	.globl _X_U1GCR
                                    242 	.globl _X_U1UCR
                                    243 	.globl _X_U1BAUD
                                    244 	.globl _X_U1DBUF
                                    245 	.globl _X_U1CSR
                                    246 	.globl _X_P2INP
                                    247 	.globl _X_P1INP
                                    248 	.globl _X_P2SEL
                                    249 	.globl _X_P1SEL
                                    250 	.globl _X_P0SEL
                                    251 	.globl _X_ADCCFG
                                    252 	.globl _X_PERCFG
                                    253 	.globl __NA_B
                                    254 	.globl _X_T4CC1
                                    255 	.globl _X_T4CCTL1
                                    256 	.globl _X_T4CC0
                                    257 	.globl _X_T4CCTL0
                                    258 	.globl _X_T4CTL
                                    259 	.globl _X_T4CNT
                                    260 	.globl _X_RFIF
                                    261 	.globl __NA_IRCON2
                                    262 	.globl _X_T1CCTL2
                                    263 	.globl _X_T1CCTL1
                                    264 	.globl _X_T1CCTL0
                                    265 	.globl _X_T1CTL
                                    266 	.globl _X_T1CNTH
                                    267 	.globl _X_T1CNTL
                                    268 	.globl _X_RFST
                                    269 	.globl __NA_ACC
                                    270 	.globl _X_T1CC2H
                                    271 	.globl _X_T1CC2L
                                    272 	.globl _X_T1CC1H
                                    273 	.globl _X_T1CC1L
                                    274 	.globl _X_T1CC0H
                                    275 	.globl _X_T1CC0L
                                    276 	.globl _X_RFD
                                    277 	.globl _X_TIMIF
                                    278 	.globl _X_DMAREQ
                                    279 	.globl _X_DMAARM
                                    280 	.globl _X_DMA0CFGH
                                    281 	.globl _X_DMA0CFGL
                                    282 	.globl _X_DMA1CFGH
                                    283 	.globl _X_DMA1CFGL
                                    284 	.globl _X_DMAIRQ
                                    285 	.globl __NA_PSW
                                    286 	.globl _X_T3CC1
                                    287 	.globl _X_T3CCTL1
                                    288 	.globl _X_T3CC0
                                    289 	.globl _X_T3CCTL0
                                    290 	.globl _X_T3CTL
                                    291 	.globl _X_T3CNT
                                    292 	.globl _X_WDCTL
                                    293 	.globl __X_SFRC8
                                    294 	.globl _X_MEMCTR
                                    295 	.globl _X_CLKCON
                                    296 	.globl _X_U0GCR
                                    297 	.globl _X_U0UCR
                                    298 	.globl __X_SFRC3
                                    299 	.globl _X_U0BAUD
                                    300 	.globl _X_U0DBUF
                                    301 	.globl __NA_IRCON
                                    302 	.globl __X_SFRBF
                                    303 	.globl _X_SLEEP
                                    304 	.globl _X_RNDH
                                    305 	.globl _X_RNDL
                                    306 	.globl _X_ADCH
                                    307 	.globl _X_ADCL
                                    308 	.globl __NA_IP1
                                    309 	.globl __NA_IEN1
                                    310 	.globl __X_SFRB7
                                    311 	.globl _X_ADCCON3
                                    312 	.globl _X_ADCCON2
                                    313 	.globl _X_ADCCON1
                                    314 	.globl _X_ENCCS
                                    315 	.globl _X_ENCDO
                                    316 	.globl _X_ENCDI
                                    317 	.globl __X_SFRB0
                                    318 	.globl _X_FWDATA
                                    319 	.globl _X_FCTL
                                    320 	.globl _X_FADDRH
                                    321 	.globl _X_FADDRL
                                    322 	.globl _X_FWT
                                    323 	.globl __X_SFRAA
                                    324 	.globl __NA_IP0
                                    325 	.globl __NA_IEN0
                                    326 	.globl __X_SFRA7
                                    327 	.globl _X_WORTIME1
                                    328 	.globl _X_WORTIME0
                                    329 	.globl _X_WOREVT1
                                    330 	.globl _X_WOREVT0
                                    331 	.globl _X_WORCTRL
                                    332 	.globl _X_WORIRQ
                                    333 	.globl __NA_P2
                                    334 	.globl __X_SFR9F
                                    335 	.globl _X_T2CTL
                                    336 	.globl _X_T2PR
                                    337 	.globl _X_T2CT
                                    338 	.globl __NA_S1CON
                                    339 	.globl __NA_IEN2
                                    340 	.globl __X_SFR99
                                    341 	.globl __NA_S0CON
                                    342 	.globl __X_SFR97
                                    343 	.globl __X_SFR96
                                    344 	.globl __X_SFR95
                                    345 	.globl __X_SFR94
                                    346 	.globl _X_MPAGE
                                    347 	.globl __NA_DPS
                                    348 	.globl _X_RFIM
                                    349 	.globl __NA_P1
                                    350 	.globl _X_P0INP
                                    351 	.globl __X_SFR8E
                                    352 	.globl _X_P1IEN
                                    353 	.globl _X_PICTL
                                    354 	.globl _X_P2IFG
                                    355 	.globl _X_P1IFG
                                    356 	.globl _X_P0IFG
                                    357 	.globl __NA_TCON
                                    358 	.globl __NA_PCON
                                    359 	.globl _X_U0CSR
                                    360 	.globl __NA_DPH1
                                    361 	.globl __NA_DPL1
                                    362 	.globl __NA_DPH0
                                    363 	.globl __NA_DPL0
                                    364 	.globl __NA_SP
                                    365 	.globl __NA_P0
                                    366 	.globl _I2SCLKF2
                                    367 	.globl _I2SCLKF1
                                    368 	.globl _I2SCLKF0
                                    369 	.globl _I2SSTAT
                                    370 	.globl _I2SWCNT
                                    371 	.globl _I2SDATH
                                    372 	.globl _I2SDATL
                                    373 	.globl _I2SCFG1
                                    374 	.globl _I2SCFG0
                                    375 	.globl _VCO_VC_DAC
                                    376 	.globl _PKTSTATUS
                                    377 	.globl _MARCSTATE
                                    378 	.globl _RSSI
                                    379 	.globl _LQI
                                    380 	.globl _FREQEST
                                    381 	.globl _VERSION
                                    382 	.globl _PARTNUM
                                    383 	.globl __XREGDF35
                                    384 	.globl __XREGDF34
                                    385 	.globl __XREGDF33
                                    386 	.globl __XREGDF32
                                    387 	.globl _IOCFG0
                                    388 	.globl _IOCFG1
                                    389 	.globl _IOCFG2
                                    390 	.globl _PA_TABLE0
                                    391 	.globl _PA_TABLE1
                                    392 	.globl _PA_TABLE2
                                    393 	.globl _PA_TABLE3
                                    394 	.globl _PA_TABLE4
                                    395 	.globl _PA_TABLE5
                                    396 	.globl _PA_TABLE6
                                    397 	.globl _PA_TABLE7
                                    398 	.globl __XREGDF26
                                    399 	.globl _TEST0
                                    400 	.globl _TEST1
                                    401 	.globl _TEST2
                                    402 	.globl __XREGDF22
                                    403 	.globl __XREGDF21
                                    404 	.globl __XREGDF20
                                    405 	.globl _FSCAL0
                                    406 	.globl _FSCAL1
                                    407 	.globl _FSCAL2
                                    408 	.globl _FSCAL3
                                    409 	.globl _FREND0
                                    410 	.globl _FREND1
                                    411 	.globl _AGCCTRL0
                                    412 	.globl _AGCCTRL1
                                    413 	.globl _AGCCTRL2
                                    414 	.globl _BSCFG
                                    415 	.globl _FOCCFG
                                    416 	.globl _MCSM0
                                    417 	.globl _MCSM1
                                    418 	.globl _MCSM2
                                    419 	.globl _DEVIATN
                                    420 	.globl _MDMCFG0
                                    421 	.globl _MDMCFG1
                                    422 	.globl _MDMCFG2
                                    423 	.globl _MDMCFG3
                                    424 	.globl _MDMCFG4
                                    425 	.globl _FREQ0
                                    426 	.globl _FREQ1
                                    427 	.globl _FREQ2
                                    428 	.globl _FSCTRL0
                                    429 	.globl _FSCTRL1
                                    430 	.globl _CHANNR
                                    431 	.globl _ADDR
                                    432 	.globl _PKTCTRL0
                                    433 	.globl _PKTCTRL1
                                    434 	.globl _PKTLEN
                                    435 	.globl _SYNC0
                                    436 	.globl _SYNC1
                                    437 	.globl _MDMCTRL0H
                                    438 	.globl _timerinit
                                    439 	.globl _alarm
                                    440 ;--------------------------------------------------------
                                    441 ; special function registers
                                    442 ;--------------------------------------------------------
                                    443 	.area RSEG    (ABS,DATA)
      000000                        444 	.org 0x0000
                           000080   445 _P0	=	0x0080
                           000081   446 _SP	=	0x0081
                           000082   447 _DPL0	=	0x0082
                           000083   448 _DPH0	=	0x0083
                           000084   449 _DPL1	=	0x0084
                           000085   450 _DPH1	=	0x0085
                           000086   451 _U0CSR	=	0x0086
                           000087   452 _PCON	=	0x0087
                           000088   453 _TCON	=	0x0088
                           000089   454 _P0IFG	=	0x0089
                           00008A   455 _P1IFG	=	0x008a
                           00008B   456 _P2IFG	=	0x008b
                           00008C   457 _PICTL	=	0x008c
                           00008D   458 _P1IEN	=	0x008d
                           00008E   459 __SFR8E	=	0x008e
                           00008F   460 _P0INP	=	0x008f
                           000090   461 _P1	=	0x0090
                           000091   462 _RFIM	=	0x0091
                           000092   463 _DPS	=	0x0092
                           000093   464 _MPAGE	=	0x0093
                           000093   465 __XPAGE	=	0x0093
                           000094   466 __SFR94	=	0x0094
                           000095   467 __SFR95	=	0x0095
                           000096   468 __SFR96	=	0x0096
                           000097   469 __SFR97	=	0x0097
                           000098   470 _S0CON	=	0x0098
                           000099   471 __SFR99	=	0x0099
                           00009A   472 _IEN2	=	0x009a
                           00009B   473 _S1CON	=	0x009b
                           00009C   474 _T2CT	=	0x009c
                           00009D   475 _T2PR	=	0x009d
                           00009E   476 _T2CTL	=	0x009e
                           00009F   477 __SFR9F	=	0x009f
                           0000A0   478 _P2	=	0x00a0
                           0000A1   479 _WORIRQ	=	0x00a1
                           0000A2   480 _WORCTRL	=	0x00a2
                           0000A3   481 _WOREVT0	=	0x00a3
                           0000A4   482 _WOREVT1	=	0x00a4
                           0000A5   483 _WORTIME0	=	0x00a5
                           0000A6   484 _WORTIME1	=	0x00a6
                           0000A7   485 __SFRA7	=	0x00a7
                           0000A8   486 _IEN0	=	0x00a8
                           0000A9   487 _IP0	=	0x00a9
                           0000AA   488 __SFRAA	=	0x00aa
                           0000AB   489 _FWT	=	0x00ab
                           0000AC   490 _FADDRL	=	0x00ac
                           0000AD   491 _FADDRH	=	0x00ad
                           0000AE   492 _FCTL	=	0x00ae
                           0000AF   493 _FWDATA	=	0x00af
                           0000B0   494 __SFRB0	=	0x00b0
                           0000B1   495 _ENCDI	=	0x00b1
                           0000B2   496 _ENCDO	=	0x00b2
                           0000B3   497 _ENCCS	=	0x00b3
                           0000B4   498 _ADCCON1	=	0x00b4
                           0000B5   499 _ADCCON2	=	0x00b5
                           0000B6   500 _ADCCON3	=	0x00b6
                           0000B7   501 __SFRB7	=	0x00b7
                           0000B8   502 _IEN1	=	0x00b8
                           0000B9   503 _IP1	=	0x00b9
                           0000BA   504 _ADCL	=	0x00ba
                           0000BB   505 _ADCH	=	0x00bb
                           0000BC   506 _RNDL	=	0x00bc
                           0000BD   507 _RNDH	=	0x00bd
                           0000BE   508 _SLEEP	=	0x00be
                           0000BF   509 __SFRBF	=	0x00bf
                           0000C0   510 _IRCON	=	0x00c0
                           0000C1   511 _U0DBUF	=	0x00c1
                           0000C2   512 _U0BAUD	=	0x00c2
                           0000C3   513 __SFRC3	=	0x00c3
                           0000C4   514 _U0UCR	=	0x00c4
                           0000C5   515 _U0GCR	=	0x00c5
                           0000C6   516 _CLKCON	=	0x00c6
                           0000C7   517 _MEMCTR	=	0x00c7
                           0000C8   518 __SFRC8	=	0x00c8
                           0000C9   519 _WDCTL	=	0x00c9
                           0000CA   520 _T3CNT	=	0x00ca
                           0000CB   521 _T3CTL	=	0x00cb
                           0000CC   522 _T3CCTL0	=	0x00cc
                           0000CD   523 _T3CC0	=	0x00cd
                           0000CE   524 _T3CCTL1	=	0x00ce
                           0000CF   525 _T3CC1	=	0x00cf
                           0000D0   526 _PSW	=	0x00d0
                           0000D1   527 _DMAIRQ	=	0x00d1
                           0000D2   528 _DMA1CFGL	=	0x00d2
                           0000D3   529 _DMA1CFGH	=	0x00d3
                           0000D4   530 _DMA0CFGL	=	0x00d4
                           0000D5   531 _DMA0CFGH	=	0x00d5
                           0000D6   532 _DMAARM	=	0x00d6
                           0000D7   533 _DMAREQ	=	0x00d7
                           0000D8   534 _TIMIF	=	0x00d8
                           0000D9   535 _RFD	=	0x00d9
                           0000DA   536 _T1CC0L	=	0x00da
                           0000DB   537 _T1CC0H	=	0x00db
                           0000DC   538 _T1CC1L	=	0x00dc
                           0000DD   539 _T1CC1H	=	0x00dd
                           0000DE   540 _T1CC2L	=	0x00de
                           0000DF   541 _T1CC2H	=	0x00df
                           0000E0   542 _ACC	=	0x00e0
                           0000E1   543 _RFST	=	0x00e1
                           0000E2   544 _T1CNTL	=	0x00e2
                           0000E3   545 _T1CNTH	=	0x00e3
                           0000E4   546 _T1CTL	=	0x00e4
                           0000E5   547 _T1CCTL0	=	0x00e5
                           0000E6   548 _T1CCTL1	=	0x00e6
                           0000E7   549 _T1CCTL2	=	0x00e7
                           0000E8   550 _IRCON2	=	0x00e8
                           0000E9   551 _RFIF	=	0x00e9
                           0000EA   552 _T4CNT	=	0x00ea
                           0000EB   553 _T4CTL	=	0x00eb
                           0000EC   554 _T4CCTL0	=	0x00ec
                           0000ED   555 _T4CC0	=	0x00ed
                           0000EE   556 _T4CCTL1	=	0x00ee
                           0000EF   557 _T4CC1	=	0x00ef
                           0000F0   558 _B	=	0x00f0
                           0000F1   559 _PERCFG	=	0x00f1
                           0000F2   560 _ADCCFG	=	0x00f2
                           0000F3   561 _P0SEL	=	0x00f3
                           0000F4   562 _P1SEL	=	0x00f4
                           0000F5   563 _P2SEL	=	0x00f5
                           0000F6   564 _P1INP	=	0x00f6
                           0000F7   565 _P2INP	=	0x00f7
                           0000F8   566 _U1CSR	=	0x00f8
                           0000F9   567 _U1DBUF	=	0x00f9
                           0000FA   568 _U1BAUD	=	0x00fa
                           0000FB   569 _U1UCR	=	0x00fb
                           0000FC   570 _U1GCR	=	0x00fc
                           0000FD   571 _P0DIR	=	0x00fd
                           0000FE   572 _P1DIR	=	0x00fe
                           0000FF   573 _P2DIR	=	0x00ff
                                    574 ;--------------------------------------------------------
                                    575 ; special function bits
                                    576 ;--------------------------------------------------------
                                    577 	.area RSEG    (ABS,DATA)
      000000                        578 	.org 0x0000
                           000080   579 _P0_0	=	0x0080
                           000081   580 _P0_1	=	0x0081
                           000082   581 _P0_2	=	0x0082
                           000083   582 _P0_3	=	0x0083
                           000084   583 _P0_4	=	0x0084
                           000085   584 _P0_5	=	0x0085
                           000086   585 _P0_6	=	0x0086
                           000087   586 _P0_7	=	0x0087
                           000088   587 _IT0	=	0x0088
                           000089   588 _RFTXRXIF	=	0x0089
                           00008A   589 _IT1	=	0x008a
                           00008B   590 _URX0IF	=	0x008b
                           00008D   591 _ADCIF	=	0x008d
                           00008F   592 _URX1IF	=	0x008f
                           000090   593 _P1_0	=	0x0090
                           000091   594 _P1_1	=	0x0091
                           000092   595 _P1_2	=	0x0092
                           000093   596 _P1_3	=	0x0093
                           000094   597 _P1_4	=	0x0094
                           000095   598 _P1_5	=	0x0095
                           000096   599 _P1_6	=	0x0096
                           000097   600 _P1_7	=	0x0097
                           000098   601 _ENCIF_0	=	0x0098
                           000099   602 _ENCIF_1	=	0x0099
                           0000A0   603 _P2_0	=	0x00a0
                           0000A1   604 _P2_1	=	0x00a1
                           0000A2   605 _P2_2	=	0x00a2
                           0000A3   606 _P2_3	=	0x00a3
                           0000A4   607 _P2_4	=	0x00a4
                           0000A5   608 _P2_5	=	0x00a5
                           0000A6   609 _P2_6	=	0x00a6
                           0000A7   610 _P2_7	=	0x00a7
                           0000A8   611 _RFTXRXIE	=	0x00a8
                           0000A9   612 _ADCIE	=	0x00a9
                           0000AA   613 _URX0IE	=	0x00aa
                           0000AB   614 _URX1IE	=	0x00ab
                           0000AC   615 _ENCIE	=	0x00ac
                           0000AD   616 _STIE	=	0x00ad
                           0000AF   617 _EA	=	0x00af
                           0000B8   618 _DMAIE	=	0x00b8
                           0000B9   619 _T1IE	=	0x00b9
                           0000BA   620 _T2IE	=	0x00ba
                           0000BB   621 _T3IE	=	0x00bb
                           0000BC   622 _T4IE	=	0x00bc
                           0000BD   623 _P0IE	=	0x00bd
                           0000C0   624 _DMAIF	=	0x00c0
                           0000C1   625 _T1IF	=	0x00c1
                           0000C2   626 _T2IF	=	0x00c2
                           0000C3   627 _T3IF	=	0x00c3
                           0000C4   628 _T4IF	=	0x00c4
                           0000C5   629 _P0IF	=	0x00c5
                           0000C7   630 _STIF	=	0x00c7
                           0000D0   631 _P	=	0x00d0
                           0000D1   632 _F1	=	0x00d1
                           0000D2   633 _OV	=	0x00d2
                           0000D3   634 _RS0	=	0x00d3
                           0000D4   635 _RS1	=	0x00d4
                           0000D5   636 _F0	=	0x00d5
                           0000D6   637 _AC	=	0x00d6
                           0000D7   638 _CY	=	0x00d7
                           0000D8   639 _T3OVFIF	=	0x00d8
                           0000D9   640 _T3CH0IF	=	0x00d9
                           0000DA   641 _T3CH1IF	=	0x00da
                           0000DB   642 _T4OVFIF	=	0x00db
                           0000DC   643 _T4CH0IF	=	0x00dc
                           0000DD   644 _T4CH1IF	=	0x00dd
                           0000DE   645 _OVFIM	=	0x00de
                           0000E0   646 _ACC_0	=	0x00e0
                           0000E1   647 _ACC_1	=	0x00e1
                           0000E2   648 _ACC_2	=	0x00e2
                           0000E3   649 _ACC_3	=	0x00e3
                           0000E4   650 _ACC_4	=	0x00e4
                           0000E5   651 _ACC_5	=	0x00e5
                           0000E6   652 _ACC_6	=	0x00e6
                           0000E7   653 _ACC_7	=	0x00e7
                           0000E8   654 _P2IF	=	0x00e8
                           0000E9   655 _UTX0IF	=	0x00e9
                           0000EA   656 _UTX1IF	=	0x00ea
                           0000EB   657 _P1IF	=	0x00eb
                           0000EC   658 _WDTIF	=	0x00ec
                           0000F0   659 _B_0	=	0x00f0
                           0000F1   660 _B_1	=	0x00f1
                           0000F2   661 _B_2	=	0x00f2
                           0000F3   662 _B_3	=	0x00f3
                           0000F4   663 _B_4	=	0x00f4
                           0000F5   664 _B_5	=	0x00f5
                           0000F6   665 _B_6	=	0x00f6
                           0000F7   666 _B_7	=	0x00f7
                           0000F8   667 _ACTIVE	=	0x00f8
                           0000F9   668 _TX_BYTE	=	0x00f9
                           0000FA   669 _RX_BYTE	=	0x00fa
                           0000FB   670 _ERR	=	0x00fb
                           0000FC   671 _FE	=	0x00fc
                           0000FD   672 _SLAVE	=	0x00fd
                           0000FE   673 _RE	=	0x00fe
                           0000FF   674 _MODE	=	0x00ff
                                    675 ;--------------------------------------------------------
                                    676 ; overlayable register banks
                                    677 ;--------------------------------------------------------
                                    678 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        679 	.ds 8
                                    680 ;--------------------------------------------------------
                                    681 ; internal ram data
                                    682 ;--------------------------------------------------------
                                    683 	.area DSEG    (DATA)
                                    684 ;--------------------------------------------------------
                                    685 ; overlayable items in internal ram 
                                    686 ;--------------------------------------------------------
                                    687 ;--------------------------------------------------------
                                    688 ; indirectly addressable internal ram data
                                    689 ;--------------------------------------------------------
                                    690 	.area ISEG    (DATA)
                                    691 ;--------------------------------------------------------
                                    692 ; absolute internal ram data
                                    693 ;--------------------------------------------------------
                                    694 	.area IABS    (ABS,DATA)
                                    695 	.area IABS    (ABS,DATA)
                                    696 ;--------------------------------------------------------
                                    697 ; bit data
                                    698 ;--------------------------------------------------------
                                    699 	.area BSEG    (BIT)
                                    700 ;--------------------------------------------------------
                                    701 ; paged external ram data
                                    702 ;--------------------------------------------------------
                                    703 	.area PSEG    (PAG,XDATA)
                                    704 ;--------------------------------------------------------
                                    705 ; external ram data
                                    706 ;--------------------------------------------------------
                                    707 	.area XSEG    (XDATA)
                           00DF02   708 _MDMCTRL0H	=	0xdf02
                           00DF00   709 _SYNC1	=	0xdf00
                           00DF01   710 _SYNC0	=	0xdf01
                           00DF02   711 _PKTLEN	=	0xdf02
                           00DF03   712 _PKTCTRL1	=	0xdf03
                           00DF04   713 _PKTCTRL0	=	0xdf04
                           00DF05   714 _ADDR	=	0xdf05
                           00DF06   715 _CHANNR	=	0xdf06
                           00DF07   716 _FSCTRL1	=	0xdf07
                           00DF08   717 _FSCTRL0	=	0xdf08
                           00DF09   718 _FREQ2	=	0xdf09
                           00DF0A   719 _FREQ1	=	0xdf0a
                           00DF0B   720 _FREQ0	=	0xdf0b
                           00DF0C   721 _MDMCFG4	=	0xdf0c
                           00DF0D   722 _MDMCFG3	=	0xdf0d
                           00DF0E   723 _MDMCFG2	=	0xdf0e
                           00DF0F   724 _MDMCFG1	=	0xdf0f
                           00DF10   725 _MDMCFG0	=	0xdf10
                           00DF11   726 _DEVIATN	=	0xdf11
                           00DF12   727 _MCSM2	=	0xdf12
                           00DF13   728 _MCSM1	=	0xdf13
                           00DF14   729 _MCSM0	=	0xdf14
                           00DF15   730 _FOCCFG	=	0xdf15
                           00DF16   731 _BSCFG	=	0xdf16
                           00DF17   732 _AGCCTRL2	=	0xdf17
                           00DF18   733 _AGCCTRL1	=	0xdf18
                           00DF19   734 _AGCCTRL0	=	0xdf19
                           00DF1A   735 _FREND1	=	0xdf1a
                           00DF1B   736 _FREND0	=	0xdf1b
                           00DF1C   737 _FSCAL3	=	0xdf1c
                           00DF1D   738 _FSCAL2	=	0xdf1d
                           00DF1E   739 _FSCAL1	=	0xdf1e
                           00DF1F   740 _FSCAL0	=	0xdf1f
                           00DF20   741 __XREGDF20	=	0xdf20
                           00DF21   742 __XREGDF21	=	0xdf21
                           00DF22   743 __XREGDF22	=	0xdf22
                           00DF23   744 _TEST2	=	0xdf23
                           00DF24   745 _TEST1	=	0xdf24
                           00DF25   746 _TEST0	=	0xdf25
                           00DF26   747 __XREGDF26	=	0xdf26
                           00DF27   748 _PA_TABLE7	=	0xdf27
                           00DF28   749 _PA_TABLE6	=	0xdf28
                           00DF29   750 _PA_TABLE5	=	0xdf29
                           00DF2A   751 _PA_TABLE4	=	0xdf2a
                           00DF2B   752 _PA_TABLE3	=	0xdf2b
                           00DF2C   753 _PA_TABLE2	=	0xdf2c
                           00DF2D   754 _PA_TABLE1	=	0xdf2d
                           00DF2E   755 _PA_TABLE0	=	0xdf2e
                           00DF2F   756 _IOCFG2	=	0xdf2f
                           00DF30   757 _IOCFG1	=	0xdf30
                           00DF31   758 _IOCFG0	=	0xdf31
                           00DF32   759 __XREGDF32	=	0xdf32
                           00DF33   760 __XREGDF33	=	0xdf33
                           00DF34   761 __XREGDF34	=	0xdf34
                           00DF35   762 __XREGDF35	=	0xdf35
                           00DF36   763 _PARTNUM	=	0xdf36
                           00DF37   764 _VERSION	=	0xdf37
                           00DF38   765 _FREQEST	=	0xdf38
                           00DF39   766 _LQI	=	0xdf39
                           00DF3A   767 _RSSI	=	0xdf3a
                           00DF3B   768 _MARCSTATE	=	0xdf3b
                           00DF3C   769 _PKTSTATUS	=	0xdf3c
                           00DF3D   770 _VCO_VC_DAC	=	0xdf3d
                           00DF40   771 _I2SCFG0	=	0xdf40
                           00DF41   772 _I2SCFG1	=	0xdf41
                           00DF42   773 _I2SDATL	=	0xdf42
                           00DF43   774 _I2SDATH	=	0xdf43
                           00DF44   775 _I2SWCNT	=	0xdf44
                           00DF45   776 _I2SSTAT	=	0xdf45
                           00DF46   777 _I2SCLKF0	=	0xdf46
                           00DF47   778 _I2SCLKF1	=	0xdf47
                           00DF48   779 _I2SCLKF2	=	0xdf48
                           00DF80   780 __NA_P0	=	0xdf80
                           00DF81   781 __NA_SP	=	0xdf81
                           00DF82   782 __NA_DPL0	=	0xdf82
                           00DF83   783 __NA_DPH0	=	0xdf83
                           00DF84   784 __NA_DPL1	=	0xdf84
                           00DF85   785 __NA_DPH1	=	0xdf85
                           00DF86   786 _X_U0CSR	=	0xdf86
                           00DF87   787 __NA_PCON	=	0xdf87
                           00DF88   788 __NA_TCON	=	0xdf88
                           00DF89   789 _X_P0IFG	=	0xdf89
                           00DF8A   790 _X_P1IFG	=	0xdf8a
                           00DF8B   791 _X_P2IFG	=	0xdf8b
                           00DF8C   792 _X_PICTL	=	0xdf8c
                           00DF8D   793 _X_P1IEN	=	0xdf8d
                           00DF8E   794 __X_SFR8E	=	0xdf8e
                           00DF8F   795 _X_P0INP	=	0xdf8f
                           00DF90   796 __NA_P1	=	0xdf90
                           00DF91   797 _X_RFIM	=	0xdf91
                           00DF92   798 __NA_DPS	=	0xdf92
                           00DF93   799 _X_MPAGE	=	0xdf93
                           00DF94   800 __X_SFR94	=	0xdf94
                           00DF95   801 __X_SFR95	=	0xdf95
                           00DF96   802 __X_SFR96	=	0xdf96
                           00DF97   803 __X_SFR97	=	0xdf97
                           00DF98   804 __NA_S0CON	=	0xdf98
                           00DF99   805 __X_SFR99	=	0xdf99
                           00DF9A   806 __NA_IEN2	=	0xdf9a
                           00DF9B   807 __NA_S1CON	=	0xdf9b
                           00DF9C   808 _X_T2CT	=	0xdf9c
                           00DF9D   809 _X_T2PR	=	0xdf9d
                           00DF9E   810 _X_T2CTL	=	0xdf9e
                           00DF9F   811 __X_SFR9F	=	0xdf9f
                           00DFA0   812 __NA_P2	=	0xdfa0
                           00DFA1   813 _X_WORIRQ	=	0xdfa1
                           00DFA2   814 _X_WORCTRL	=	0xdfa2
                           00DFA3   815 _X_WOREVT0	=	0xdfa3
                           00DFA4   816 _X_WOREVT1	=	0xdfa4
                           00DFA5   817 _X_WORTIME0	=	0xdfa5
                           00DFA6   818 _X_WORTIME1	=	0xdfa6
                           00DFA7   819 __X_SFRA7	=	0xdfa7
                           00DFA8   820 __NA_IEN0	=	0xdfa8
                           00DFA9   821 __NA_IP0	=	0xdfa9
                           00DFAA   822 __X_SFRAA	=	0xdfaa
                           00DFAB   823 _X_FWT	=	0xdfab
                           00DFAC   824 _X_FADDRL	=	0xdfac
                           00DFAD   825 _X_FADDRH	=	0xdfad
                           00DFAE   826 _X_FCTL	=	0xdfae
                           00DFAF   827 _X_FWDATA	=	0xdfaf
                           00DFB0   828 __X_SFRB0	=	0xdfb0
                           00DFB1   829 _X_ENCDI	=	0xdfb1
                           00DFB2   830 _X_ENCDO	=	0xdfb2
                           00DFB3   831 _X_ENCCS	=	0xdfb3
                           00DFB4   832 _X_ADCCON1	=	0xdfb4
                           00DFB5   833 _X_ADCCON2	=	0xdfb5
                           00DFB6   834 _X_ADCCON3	=	0xdfb6
                           00DFB7   835 __X_SFRB7	=	0xdfb7
                           00DFB8   836 __NA_IEN1	=	0xdfb8
                           00DFB9   837 __NA_IP1	=	0xdfb9
                           00DFBA   838 _X_ADCL	=	0xdfba
                           00DFBB   839 _X_ADCH	=	0xdfbb
                           00DFBC   840 _X_RNDL	=	0xdfbc
                           00DFBD   841 _X_RNDH	=	0xdfbd
                           00DFBE   842 _X_SLEEP	=	0xdfbe
                           00DFBF   843 __X_SFRBF	=	0xdfbf
                           00DFC0   844 __NA_IRCON	=	0xdfc0
                           00DFC1   845 _X_U0DBUF	=	0xdfc1
                           00DFC2   846 _X_U0BAUD	=	0xdfc2
                           00DFC3   847 __X_SFRC3	=	0xdfc3
                           00DFC4   848 _X_U0UCR	=	0xdfc4
                           00DFC5   849 _X_U0GCR	=	0xdfc5
                           00DFC6   850 _X_CLKCON	=	0xdfc6
                           00DFC7   851 _X_MEMCTR	=	0xdfc7
                           00DFC8   852 __X_SFRC8	=	0xdfc8
                           00DFC9   853 _X_WDCTL	=	0xdfc9
                           00DFCA   854 _X_T3CNT	=	0xdfca
                           00DFCB   855 _X_T3CTL	=	0xdfcb
                           00DFCC   856 _X_T3CCTL0	=	0xdfcc
                           00DFCD   857 _X_T3CC0	=	0xdfcd
                           00DFCE   858 _X_T3CCTL1	=	0xdfce
                           00DFCF   859 _X_T3CC1	=	0xdfcf
                           00DFD0   860 __NA_PSW	=	0xdfd0
                           00DFD1   861 _X_DMAIRQ	=	0xdfd1
                           00DFD2   862 _X_DMA1CFGL	=	0xdfd2
                           00DFD3   863 _X_DMA1CFGH	=	0xdfd3
                           00DFD4   864 _X_DMA0CFGL	=	0xdfd4
                           00DFD5   865 _X_DMA0CFGH	=	0xdfd5
                           00DFD6   866 _X_DMAARM	=	0xdfd6
                           00DFD7   867 _X_DMAREQ	=	0xdfd7
                           00DFD8   868 _X_TIMIF	=	0xdfd8
                           00DFD9   869 _X_RFD	=	0xdfd9
                           00DFDA   870 _X_T1CC0L	=	0xdfda
                           00DFDB   871 _X_T1CC0H	=	0xdfdb
                           00DFDC   872 _X_T1CC1L	=	0xdfdc
                           00DFDD   873 _X_T1CC1H	=	0xdfdd
                           00DFDE   874 _X_T1CC2L	=	0xdfde
                           00DFDF   875 _X_T1CC2H	=	0xdfdf
                           00DFE0   876 __NA_ACC	=	0xdfe0
                           00DFE1   877 _X_RFST	=	0xdfe1
                           00DFE2   878 _X_T1CNTL	=	0xdfe2
                           00DFE3   879 _X_T1CNTH	=	0xdfe3
                           00DFE4   880 _X_T1CTL	=	0xdfe4
                           00DFE5   881 _X_T1CCTL0	=	0xdfe5
                           00DFE6   882 _X_T1CCTL1	=	0xdfe6
                           00DFE7   883 _X_T1CCTL2	=	0xdfe7
                           00DFE8   884 __NA_IRCON2	=	0xdfe8
                           00DFE9   885 _X_RFIF	=	0xdfe9
                           00DFEA   886 _X_T4CNT	=	0xdfea
                           00DFEB   887 _X_T4CTL	=	0xdfeb
                           00DFEC   888 _X_T4CCTL0	=	0xdfec
                           00DFED   889 _X_T4CC0	=	0xdfed
                           00DFEE   890 _X_T4CCTL1	=	0xdfee
                           00DFEF   891 _X_T4CC1	=	0xdfef
                           00DFF0   892 __NA_B	=	0xdff0
                           00DFF1   893 _X_PERCFG	=	0xdff1
                           00DFF2   894 _X_ADCCFG	=	0xdff2
                           00DFF3   895 _X_P0SEL	=	0xdff3
                           00DFF4   896 _X_P1SEL	=	0xdff4
                           00DFF5   897 _X_P2SEL	=	0xdff5
                           00DFF6   898 _X_P1INP	=	0xdff6
                           00DFF7   899 _X_P2INP	=	0xdff7
                           00DFF8   900 _X_U1CSR	=	0xdff8
                           00DFF9   901 _X_U1DBUF	=	0xdff9
                           00DFFA   902 _X_U1BAUD	=	0xdffa
                           00DFFB   903 _X_U1UCR	=	0xdffb
                           00DFFC   904 _X_U1GCR	=	0xdffc
                           00DFFD   905 _X_P0DIR	=	0xdffd
                           00DFFE   906 _X_P1DIR	=	0xdffe
                           00DFFF   907 _X_P2DIR	=	0xdfff
      00F213                        908 _ticks:
      00F213                        909 	.ds 4
      00F217                        910 _alarm_ms_1_46:
      00F217                        911 	.ds 2
                                    912 ;--------------------------------------------------------
                                    913 ; absolute external ram data
                                    914 ;--------------------------------------------------------
                                    915 	.area XABS    (ABS,XDATA)
                                    916 ;--------------------------------------------------------
                                    917 ; external initialized ram data
                                    918 ;--------------------------------------------------------
                                    919 	.area XISEG   (XDATA)
                                    920 	.area HOME    (CODE)
                                    921 	.area GSINIT0 (CODE)
                                    922 	.area GSINIT1 (CODE)
                                    923 	.area GSINIT2 (CODE)
                                    924 	.area GSINIT3 (CODE)
                                    925 	.area GSINIT4 (CODE)
                                    926 	.area GSINIT5 (CODE)
                                    927 	.area GSINIT  (CODE)
                                    928 	.area GSFINAL (CODE)
                                    929 	.area CSEG    (CODE)
                                    930 ;--------------------------------------------------------
                                    931 ; global & static initialisations
                                    932 ;--------------------------------------------------------
                                    933 	.area HOME    (CODE)
                                    934 	.area GSINIT  (CODE)
                                    935 	.area GSFINAL (CODE)
                                    936 	.area GSINIT  (CODE)
                                    937 ;--------------------------------------------------------
                                    938 ; Home
                                    939 ;--------------------------------------------------------
                                    940 	.area HOME    (CODE)
                                    941 	.area HOME    (CODE)
                                    942 ;--------------------------------------------------------
                                    943 ; code
                                    944 ;--------------------------------------------------------
                                    945 	.area CSEG    (CODE)
                                    946 ;------------------------------------------------------------
                                    947 ;Allocation info for local variables in function 'timerinit'
                                    948 ;------------------------------------------------------------
                                    949 ;	timer.c:8: timerinit()
                                    950 ;	-----------------------------------------
                                    951 ;	 function timerinit
                                    952 ;	-----------------------------------------
      00080E                        953 _timerinit:
                           000007   954 	ar7 = 0x07
                           000006   955 	ar6 = 0x06
                           000005   956 	ar5 = 0x05
                           000004   957 	ar4 = 0x04
                           000003   958 	ar3 = 0x03
                           000002   959 	ar2 = 0x02
                           000001   960 	ar1 = 0x01
                           000000   961 	ar0 = 0x00
                                    962 ;	timer.c:17: CLKCON = (CLKCON & ~CLKCON_TICKSPD) | TICKSPD_DIV_1;
      00080E AF C6            [24]  963 	mov	r7,_CLKCON
      000810 74 C7            [12]  964 	mov	a,#0xC7
      000812 5F               [12]  965 	anl	a,r7
      000813 F5 C6            [12]  966 	mov	_CLKCON,a
                                    967 ;	timer.c:18: T1CTL = 0;
      000815 75 E4 00         [24]  968 	mov	_T1CTL,#0x00
      000818 22               [24]  969 	ret
                                    970 ;------------------------------------------------------------
                                    971 ;Allocation info for local variables in function 'alarm'
                                    972 ;------------------------------------------------------------
                                    973 ;ms                        Allocated with name '_alarm_ms_1_46'
                                    974 ;------------------------------------------------------------
                                    975 ;	timer.c:22: alarm(uint16 ms)
                                    976 ;	-----------------------------------------
                                    977 ;	 function alarm
                                    978 ;	-----------------------------------------
      000819                        979 _alarm:
      000819 AF 83            [24]  980 	mov	r7,dph
      00081B E5 82            [12]  981 	mov	a,dpl
      00081D 90 F2 17         [24]  982 	mov	dptr,#_alarm_ms_1_46
      000820 F0               [24]  983 	movx	@dptr,a
      000821 EF               [12]  984 	mov	a,r7
      000822 A3               [24]  985 	inc	dptr
      000823 F0               [24]  986 	movx	@dptr,a
                                    987 ;	timer.c:24: T1CTL = 0;
      000824 75 E4 00         [24]  988 	mov	_T1CTL,#0x00
                                    989 ;	timer.c:25: T1IE = 0;
      000827 C2 B9            [12]  990 	clr	_T1IE
                                    991 ;	timer.c:26: flag &= ~Falarm;
      000829 90 F0 00         [24]  992 	mov	dptr,#_flag
      00082C E0               [24]  993 	movx	a,@dptr
      00082D FF               [12]  994 	mov	r7,a
      00082E 74 DF            [12]  995 	mov	a,#0xDF
      000830 5F               [12]  996 	anl	a,r7
      000831 F0               [24]  997 	movx	@dptr,a
                                    998 ;	timer.c:28: if(ms == 0){
      000832 90 F2 17         [24]  999 	mov	dptr,#_alarm_ms_1_46
      000835 E0               [24] 1000 	movx	a,@dptr
      000836 FE               [12] 1001 	mov	r6,a
      000837 A3               [24] 1002 	inc	dptr
      000838 E0               [24] 1003 	movx	a,@dptr
      000839 FF               [12] 1004 	mov	r7,a
      00083A 4E               [12] 1005 	orl	a,r6
      00083B 70 0C            [24] 1006 	jnz	00102$
                                   1007 ;	timer.c:29: ticks = 0;
      00083D 90 F2 13         [24] 1008 	mov	dptr,#_ticks
      000840 E4               [12] 1009 	clr	a
      000841 F0               [24] 1010 	movx	@dptr,a
      000842 A3               [24] 1011 	inc	dptr
      000843 F0               [24] 1012 	movx	@dptr,a
      000844 A3               [24] 1013 	inc	dptr
      000845 F0               [24] 1014 	movx	@dptr,a
      000846 A3               [24] 1015 	inc	dptr
      000847 F0               [24] 1016 	movx	@dptr,a
                                   1017 ;	timer.c:30: return;
      000848 22               [24] 1018 	ret
      000849                       1019 00102$:
                                   1020 ;	timer.c:33: T1CTL = 0;
      000849 75 E4 00         [24] 1021 	mov	_T1CTL,#0x00
                                   1022 ;	timer.c:34: T1CNTL =  0;
      00084C 75 E2 00         [24] 1023 	mov	_T1CNTL,#0x00
                                   1024 ;	timer.c:36: ticks = ((uint32)ms*TICKSPERSECOND)/1000;
      00084F 7D 00            [12] 1025 	mov	r5,#0x00
      000851 7C 00            [12] 1026 	mov	r4,#0x00
      000853 8E 82            [24] 1027 	mov	dpl,r6
      000855 8F 83            [24] 1028 	mov	dph,r7
      000857 8D F0            [24] 1029 	mov	b,r5
      000859 EC               [12] 1030 	mov	a,r4
      00085A 12 1D 51         [24] 1031 	lcall	___ulong2fs
      00085D AC 82            [24] 1032 	mov	r4,dpl
      00085F AD 83            [24] 1033 	mov	r5,dph
      000861 AE F0            [24] 1034 	mov	r6,b
      000863 FF               [12] 1035 	mov	r7,a
      000864 C0 04            [24] 1036 	push	ar4
      000866 C0 05            [24] 1037 	push	ar5
      000868 C0 06            [24] 1038 	push	ar6
      00086A C0 07            [24] 1039 	push	ar7
      00086C 90 5D 40         [24] 1040 	mov	dptr,#0x5D40
      00086F 75 F0 C6         [24] 1041 	mov	b,#0xC6
      000872 74 47            [12] 1042 	mov	a,#0x47
      000874 12 1B B1         [24] 1043 	lcall	___fsmul
      000877 AC 82            [24] 1044 	mov	r4,dpl
      000879 AD 83            [24] 1045 	mov	r5,dph
      00087B AE F0            [24] 1046 	mov	r6,b
      00087D FF               [12] 1047 	mov	r7,a
      00087E E5 81            [12] 1048 	mov	a,sp
      000880 24 FC            [12] 1049 	add	a,#0xfc
      000882 F5 81            [12] 1050 	mov	sp,a
      000884 E4               [12] 1051 	clr	a
      000885 C0 E0            [24] 1052 	push	acc
      000887 C0 E0            [24] 1053 	push	acc
      000889 74 7A            [12] 1054 	mov	a,#0x7A
      00088B C0 E0            [24] 1055 	push	acc
      00088D 74 44            [12] 1056 	mov	a,#0x44
      00088F C0 E0            [24] 1057 	push	acc
      000891 8C 82            [24] 1058 	mov	dpl,r4
      000893 8D 83            [24] 1059 	mov	dph,r5
      000895 8E F0            [24] 1060 	mov	b,r6
      000897 EF               [12] 1061 	mov	a,r7
      000898 12 1E B4         [24] 1062 	lcall	___fsdiv
      00089B AC 82            [24] 1063 	mov	r4,dpl
      00089D AD 83            [24] 1064 	mov	r5,dph
      00089F AE F0            [24] 1065 	mov	r6,b
      0008A1 FF               [12] 1066 	mov	r7,a
      0008A2 E5 81            [12] 1067 	mov	a,sp
      0008A4 24 FC            [12] 1068 	add	a,#0xfc
      0008A6 F5 81            [12] 1069 	mov	sp,a
      0008A8 8C 82            [24] 1070 	mov	dpl,r4
      0008AA 8D 83            [24] 1071 	mov	dph,r5
      0008AC 8E F0            [24] 1072 	mov	b,r6
      0008AE EF               [12] 1073 	mov	a,r7
      0008AF 12 1D 64         [24] 1074 	lcall	___fs2ulong
      0008B2 AC 82            [24] 1075 	mov	r4,dpl
      0008B4 AD 83            [24] 1076 	mov	r5,dph
      0008B6 AE F0            [24] 1077 	mov	r6,b
      0008B8 FF               [12] 1078 	mov	r7,a
      0008B9 90 F2 13         [24] 1079 	mov	dptr,#_ticks
      0008BC EC               [12] 1080 	mov	a,r4
      0008BD F0               [24] 1081 	movx	@dptr,a
      0008BE ED               [12] 1082 	mov	a,r5
      0008BF A3               [24] 1083 	inc	dptr
      0008C0 F0               [24] 1084 	movx	@dptr,a
      0008C1 EE               [12] 1085 	mov	a,r6
      0008C2 A3               [24] 1086 	inc	dptr
      0008C3 F0               [24] 1087 	movx	@dptr,a
      0008C4 EF               [12] 1088 	mov	a,r7
      0008C5 A3               [24] 1089 	inc	dptr
      0008C6 F0               [24] 1090 	movx	@dptr,a
                                   1091 ;	timer.c:38: if(ticks>>16){
      0008C7 8E 00            [24] 1092 	mov	ar0,r6
      0008C9 8F 01            [24] 1093 	mov	ar1,r7
      0008CB E4               [12] 1094 	clr	a
      0008CC FA               [12] 1095 	mov	r2,a
      0008CD FB               [12] 1096 	mov	r3,a
      0008CE E8               [12] 1097 	mov	a,r0
      0008CF 49               [12] 1098 	orl	a,r1
      0008D0 4A               [12] 1099 	orl	a,r2
      0008D1 4B               [12] 1100 	orl	a,r3
      0008D2 60 08            [24] 1101 	jz	00104$
                                   1102 ;	timer.c:39: T1CC0H = 0xff;
      0008D4 75 DB FF         [24] 1103 	mov	_T1CC0H,#0xFF
                                   1104 ;	timer.c:40: T1CC0L = 0xff;
      0008D7 75 DA FF         [24] 1105 	mov	_T1CC0L,#0xFF
      0008DA 80 0A            [24] 1106 	sjmp	00105$
      0008DC                       1107 00104$:
                                   1108 ;	timer.c:42: T1CC0H = ticks >> 8;
      0008DC 8D DB            [24] 1109 	mov	_T1CC0H,r5
                                   1110 ;	timer.c:43: T1CC0L = ticks & 0xff;
      0008DE 7D 00            [12] 1111 	mov	r5,#0x00
      0008E0 7E 00            [12] 1112 	mov	r6,#0x00
      0008E2 7F 00            [12] 1113 	mov	r7,#0x00
      0008E4 8C DA            [24] 1114 	mov	_T1CC0L,r4
      0008E6                       1115 00105$:
                                   1116 ;	timer.c:46: T1CCTL0 = 0x44;
      0008E6 75 E5 44         [24] 1117 	mov	_T1CCTL0,#0x44
                                   1118 ;	timer.c:48: T1IE = 1;
      0008E9 D2 B9            [12] 1119 	setb	_T1IE
                                   1120 ;	timer.c:50: T1CTL = T1CTL_DIV_128 | T1CTL_MODE_MODULO;
      0008EB 75 E4 0E         [24] 1121 	mov	_T1CTL,#0x0E
      0008EE 22               [24] 1122 	ret
                                   1123 ;------------------------------------------------------------
                                   1124 ;Allocation info for local variables in function 't1intr'
                                   1125 ;------------------------------------------------------------
                                   1126 ;	timer.c:54: t1intr(void) __interrupt T1_VECTOR
                                   1127 ;	-----------------------------------------
                                   1128 ;	 function t1intr
                                   1129 ;	-----------------------------------------
      0008EF                       1130 _t1intr:
      0008EF C0 E0            [24] 1131 	push	acc
      0008F1 C0 82            [24] 1132 	push	dpl
      0008F3 C0 83            [24] 1133 	push	dph
      0008F5 C0 07            [24] 1134 	push	ar7
      0008F7 C0 06            [24] 1135 	push	ar6
      0008F9 C0 05            [24] 1136 	push	ar5
      0008FB C0 04            [24] 1137 	push	ar4
      0008FD C0 03            [24] 1138 	push	ar3
      0008FF C0 02            [24] 1139 	push	ar2
      000901 C0 01            [24] 1140 	push	ar1
      000903 C0 00            [24] 1141 	push	ar0
      000905 C0 D0            [24] 1142 	push	psw
      000907 75 D0 00         [24] 1143 	mov	psw,#0x00
                                   1144 ;	timer.c:56: if(!(ticks>>16)){
      00090A 90 F2 13         [24] 1145 	mov	dptr,#_ticks
      00090D E0               [24] 1146 	movx	a,@dptr
      00090E FC               [12] 1147 	mov	r4,a
      00090F A3               [24] 1148 	inc	dptr
      000910 E0               [24] 1149 	movx	a,@dptr
      000911 FD               [12] 1150 	mov	r5,a
      000912 A3               [24] 1151 	inc	dptr
      000913 E0               [24] 1152 	movx	a,@dptr
      000914 FE               [12] 1153 	mov	r6,a
      000915 A3               [24] 1154 	inc	dptr
      000916 E0               [24] 1155 	movx	a,@dptr
      000917 FF               [12] 1156 	mov	r7,a
      000918 8E 00            [24] 1157 	mov	ar0,r6
      00091A 8F 01            [24] 1158 	mov	ar1,r7
      00091C E4               [12] 1159 	clr	a
      00091D FA               [12] 1160 	mov	r2,a
      00091E FB               [12] 1161 	mov	r3,a
      00091F E8               [12] 1162 	mov	a,r0
      000920 49               [12] 1163 	orl	a,r1
      000921 4A               [12] 1164 	orl	a,r2
      000922 4B               [12] 1165 	orl	a,r3
      000923 70 1F            [24] 1166 	jnz	00104$
                                   1167 ;	timer.c:57: flag |= Falarm;
      000925 90 F0 00         [24] 1168 	mov	dptr,#_flag
      000928 E0               [24] 1169 	movx	a,@dptr
      000929 FB               [12] 1170 	mov	r3,a
      00092A 74 20            [12] 1171 	mov	a,#0x20
      00092C 4B               [12] 1172 	orl	a,r3
      00092D F0               [24] 1173 	movx	@dptr,a
                                   1174 ;	timer.c:58: ticks = 0;
      00092E 90 F2 13         [24] 1175 	mov	dptr,#_ticks
      000931 E4               [12] 1176 	clr	a
      000932 F0               [24] 1177 	movx	@dptr,a
      000933 A3               [24] 1178 	inc	dptr
      000934 F0               [24] 1179 	movx	@dptr,a
      000935 A3               [24] 1180 	inc	dptr
      000936 F0               [24] 1181 	movx	@dptr,a
      000937 A3               [24] 1182 	inc	dptr
      000938 F0               [24] 1183 	movx	@dptr,a
                                   1184 ;	timer.c:59: T1IE = 0;
      000939 C2 B9            [12] 1185 	clr	_T1IE
                                   1186 ;	timer.c:60: T1CTL = (T1CTL&~T1CTL_MODE) | T1CTL_MODE_SUSPEND;
      00093B AB E4            [24] 1187 	mov	r3,_T1CTL
      00093D 74 FC            [12] 1188 	mov	a,#0xFC
      00093F 5B               [12] 1189 	anl	a,r3
      000940 F5 E4            [12] 1190 	mov	_T1CTL,a
      000942 80 3F            [24] 1191 	sjmp	00106$
      000944                       1192 00104$:
                                   1193 ;	timer.c:62: ticks -= 0xffff;
      000944 EC               [12] 1194 	mov	a,r4
      000945 24 01            [12] 1195 	add	a,#0x01
      000947 FC               [12] 1196 	mov	r4,a
      000948 E4               [12] 1197 	clr	a
      000949 3D               [12] 1198 	addc	a,r5
      00094A FD               [12] 1199 	mov	r5,a
      00094B EE               [12] 1200 	mov	a,r6
      00094C 34 FF            [12] 1201 	addc	a,#0xFF
      00094E FE               [12] 1202 	mov	r6,a
      00094F EF               [12] 1203 	mov	a,r7
      000950 34 FF            [12] 1204 	addc	a,#0xFF
      000952 FF               [12] 1205 	mov	r7,a
      000953 90 F2 13         [24] 1206 	mov	dptr,#_ticks
      000956 EC               [12] 1207 	mov	a,r4
      000957 F0               [24] 1208 	movx	@dptr,a
      000958 ED               [12] 1209 	mov	a,r5
      000959 A3               [24] 1210 	inc	dptr
      00095A F0               [24] 1211 	movx	@dptr,a
      00095B EE               [12] 1212 	mov	a,r6
      00095C A3               [24] 1213 	inc	dptr
      00095D F0               [24] 1214 	movx	@dptr,a
      00095E EF               [12] 1215 	mov	a,r7
      00095F A3               [24] 1216 	inc	dptr
      000960 F0               [24] 1217 	movx	@dptr,a
                                   1218 ;	timer.c:64: if(!(ticks>>16)){
      000961 90 F2 13         [24] 1219 	mov	dptr,#_ticks
      000964 E0               [24] 1220 	movx	a,@dptr
      000965 FC               [12] 1221 	mov	r4,a
      000966 A3               [24] 1222 	inc	dptr
      000967 E0               [24] 1223 	movx	a,@dptr
      000968 FD               [12] 1224 	mov	r5,a
      000969 A3               [24] 1225 	inc	dptr
      00096A E0               [24] 1226 	movx	a,@dptr
      00096B FE               [12] 1227 	mov	r6,a
      00096C A3               [24] 1228 	inc	dptr
      00096D E0               [24] 1229 	movx	a,@dptr
      00096E FF               [12] 1230 	mov	r7,a
      00096F 8E 00            [24] 1231 	mov	ar0,r6
      000971 8F 01            [24] 1232 	mov	ar1,r7
      000973 E4               [12] 1233 	clr	a
      000974 FA               [12] 1234 	mov	r2,a
      000975 FB               [12] 1235 	mov	r3,a
      000976 E8               [12] 1236 	mov	a,r0
      000977 49               [12] 1237 	orl	a,r1
      000978 4A               [12] 1238 	orl	a,r2
      000979 4B               [12] 1239 	orl	a,r3
                                   1240 ;	timer.c:65: T1CC0H = ticks >> 8;
                                   1241 ;	timer.c:66: T1CC0H = ticks & 0xff;
      00097A 70 07            [24] 1242 	jnz	00106$
      00097C 8D DB            [24] 1243 	mov	_T1CC0H,r5
      00097E FD               [12] 1244 	mov	r5,a
      00097F FE               [12] 1245 	mov	r6,a
      000980 FF               [12] 1246 	mov	r7,a
      000981 8C DB            [24] 1247 	mov	_T1CC0H,r4
      000983                       1248 00106$:
      000983 D0 D0            [24] 1249 	pop	psw
      000985 D0 00            [24] 1250 	pop	ar0
      000987 D0 01            [24] 1251 	pop	ar1
      000989 D0 02            [24] 1252 	pop	ar2
      00098B D0 03            [24] 1253 	pop	ar3
      00098D D0 04            [24] 1254 	pop	ar4
      00098F D0 05            [24] 1255 	pop	ar5
      000991 D0 06            [24] 1256 	pop	ar6
      000993 D0 07            [24] 1257 	pop	ar7
      000995 D0 83            [24] 1258 	pop	dph
      000997 D0 82            [24] 1259 	pop	dpl
      000999 D0 E0            [24] 1260 	pop	acc
      00099B 32               [24] 1261 	reti
                                   1262 ;	eliminated unneeded push/pop b
                                   1263 	.area CSEG    (CODE)
                                   1264 	.area CONST   (CODE)
                                   1265 	.area XINIT   (CODE)
                                   1266 	.area CABS    (ABS,CODE)
