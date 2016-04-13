                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 14:33:05 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module uartsrv
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _utx0intr
                                     13 	.globl _urx0intr
                                     14 	.globl _MODE
                                     15 	.globl _RE
                                     16 	.globl _SLAVE
                                     17 	.globl _FE
                                     18 	.globl _ERR
                                     19 	.globl _RX_BYTE
                                     20 	.globl _TX_BYTE
                                     21 	.globl _ACTIVE
                                     22 	.globl _B_7
                                     23 	.globl _B_6
                                     24 	.globl _B_5
                                     25 	.globl _B_4
                                     26 	.globl _B_3
                                     27 	.globl _B_2
                                     28 	.globl _B_1
                                     29 	.globl _B_0
                                     30 	.globl _WDTIF
                                     31 	.globl _P1IF
                                     32 	.globl _UTX1IF
                                     33 	.globl _UTX0IF
                                     34 	.globl _P2IF
                                     35 	.globl _ACC_7
                                     36 	.globl _ACC_6
                                     37 	.globl _ACC_5
                                     38 	.globl _ACC_4
                                     39 	.globl _ACC_3
                                     40 	.globl _ACC_2
                                     41 	.globl _ACC_1
                                     42 	.globl _ACC_0
                                     43 	.globl _OVFIM
                                     44 	.globl _T4CH1IF
                                     45 	.globl _T4CH0IF
                                     46 	.globl _T4OVFIF
                                     47 	.globl _T3CH1IF
                                     48 	.globl _T3CH0IF
                                     49 	.globl _T3OVFIF
                                     50 	.globl _CY
                                     51 	.globl _AC
                                     52 	.globl _F0
                                     53 	.globl _RS1
                                     54 	.globl _RS0
                                     55 	.globl _OV
                                     56 	.globl _F1
                                     57 	.globl _P
                                     58 	.globl _STIF
                                     59 	.globl _P0IF
                                     60 	.globl _T4IF
                                     61 	.globl _T3IF
                                     62 	.globl _T2IF
                                     63 	.globl _T1IF
                                     64 	.globl _DMAIF
                                     65 	.globl _P0IE
                                     66 	.globl _T4IE
                                     67 	.globl _T3IE
                                     68 	.globl _T2IE
                                     69 	.globl _T1IE
                                     70 	.globl _DMAIE
                                     71 	.globl _EA
                                     72 	.globl _STIE
                                     73 	.globl _ENCIE
                                     74 	.globl _URX1IE
                                     75 	.globl _URX0IE
                                     76 	.globl _ADCIE
                                     77 	.globl _RFTXRXIE
                                     78 	.globl _P2_7
                                     79 	.globl _P2_6
                                     80 	.globl _P2_5
                                     81 	.globl _P2_4
                                     82 	.globl _P2_3
                                     83 	.globl _P2_2
                                     84 	.globl _P2_1
                                     85 	.globl _P2_0
                                     86 	.globl _ENCIF_1
                                     87 	.globl _ENCIF_0
                                     88 	.globl _P1_7
                                     89 	.globl _P1_6
                                     90 	.globl _P1_5
                                     91 	.globl _P1_4
                                     92 	.globl _P1_3
                                     93 	.globl _P1_2
                                     94 	.globl _P1_1
                                     95 	.globl _P1_0
                                     96 	.globl _URX1IF
                                     97 	.globl _ADCIF
                                     98 	.globl _URX0IF
                                     99 	.globl _IT1
                                    100 	.globl _RFTXRXIF
                                    101 	.globl _IT0
                                    102 	.globl _P0_7
                                    103 	.globl _P0_6
                                    104 	.globl _P0_5
                                    105 	.globl _P0_4
                                    106 	.globl _P0_3
                                    107 	.globl _P0_2
                                    108 	.globl _P0_1
                                    109 	.globl _P0_0
                                    110 	.globl _P2DIR
                                    111 	.globl _P1DIR
                                    112 	.globl _P0DIR
                                    113 	.globl _U1GCR
                                    114 	.globl _U1UCR
                                    115 	.globl _U1BAUD
                                    116 	.globl _U1DBUF
                                    117 	.globl _U1CSR
                                    118 	.globl _P2INP
                                    119 	.globl _P1INP
                                    120 	.globl _P2SEL
                                    121 	.globl _P1SEL
                                    122 	.globl _P0SEL
                                    123 	.globl _ADCCFG
                                    124 	.globl _PERCFG
                                    125 	.globl _B
                                    126 	.globl _T4CC1
                                    127 	.globl _T4CCTL1
                                    128 	.globl _T4CC0
                                    129 	.globl _T4CCTL0
                                    130 	.globl _T4CTL
                                    131 	.globl _T4CNT
                                    132 	.globl _RFIF
                                    133 	.globl _IRCON2
                                    134 	.globl _T1CCTL2
                                    135 	.globl _T1CCTL1
                                    136 	.globl _T1CCTL0
                                    137 	.globl _T1CTL
                                    138 	.globl _T1CNTH
                                    139 	.globl _T1CNTL
                                    140 	.globl _RFST
                                    141 	.globl _ACC
                                    142 	.globl _T1CC2H
                                    143 	.globl _T1CC2L
                                    144 	.globl _T1CC1H
                                    145 	.globl _T1CC1L
                                    146 	.globl _T1CC0H
                                    147 	.globl _T1CC0L
                                    148 	.globl _RFD
                                    149 	.globl _TIMIF
                                    150 	.globl _DMAREQ
                                    151 	.globl _DMAARM
                                    152 	.globl _DMA0CFGH
                                    153 	.globl _DMA0CFGL
                                    154 	.globl _DMA1CFGH
                                    155 	.globl _DMA1CFGL
                                    156 	.globl _DMAIRQ
                                    157 	.globl _PSW
                                    158 	.globl _T3CC1
                                    159 	.globl _T3CCTL1
                                    160 	.globl _T3CC0
                                    161 	.globl _T3CCTL0
                                    162 	.globl _T3CTL
                                    163 	.globl _T3CNT
                                    164 	.globl _WDCTL
                                    165 	.globl __SFRC8
                                    166 	.globl _MEMCTR
                                    167 	.globl _CLKCON
                                    168 	.globl _U0GCR
                                    169 	.globl _U0UCR
                                    170 	.globl __SFRC3
                                    171 	.globl _U0BAUD
                                    172 	.globl _U0DBUF
                                    173 	.globl _IRCON
                                    174 	.globl __SFRBF
                                    175 	.globl _SLEEP
                                    176 	.globl _RNDH
                                    177 	.globl _RNDL
                                    178 	.globl _ADCH
                                    179 	.globl _ADCL
                                    180 	.globl _IP1
                                    181 	.globl _IEN1
                                    182 	.globl __SFRB7
                                    183 	.globl _ADCCON3
                                    184 	.globl _ADCCON2
                                    185 	.globl _ADCCON1
                                    186 	.globl _ENCCS
                                    187 	.globl _ENCDO
                                    188 	.globl _ENCDI
                                    189 	.globl __SFRB0
                                    190 	.globl _FWDATA
                                    191 	.globl _FCTL
                                    192 	.globl _FADDRH
                                    193 	.globl _FADDRL
                                    194 	.globl _FWT
                                    195 	.globl __SFRAA
                                    196 	.globl _IP0
                                    197 	.globl _IEN0
                                    198 	.globl __SFRA7
                                    199 	.globl _WORTIME1
                                    200 	.globl _WORTIME0
                                    201 	.globl _WOREVT1
                                    202 	.globl _WOREVT0
                                    203 	.globl _WORCTRL
                                    204 	.globl _WORIRQ
                                    205 	.globl _P2
                                    206 	.globl __SFR9F
                                    207 	.globl _T2CTL
                                    208 	.globl _T2PR
                                    209 	.globl _T2CT
                                    210 	.globl _S1CON
                                    211 	.globl _IEN2
                                    212 	.globl __SFR99
                                    213 	.globl _S0CON
                                    214 	.globl __SFR97
                                    215 	.globl __SFR96
                                    216 	.globl __SFR95
                                    217 	.globl __SFR94
                                    218 	.globl __XPAGE
                                    219 	.globl _MPAGE
                                    220 	.globl _DPS
                                    221 	.globl _RFIM
                                    222 	.globl _P1
                                    223 	.globl _P0INP
                                    224 	.globl __SFR8E
                                    225 	.globl _P1IEN
                                    226 	.globl _PICTL
                                    227 	.globl _P2IFG
                                    228 	.globl _P1IFG
                                    229 	.globl _P0IFG
                                    230 	.globl _TCON
                                    231 	.globl _PCON
                                    232 	.globl _U0CSR
                                    233 	.globl _DPH1
                                    234 	.globl _DPL1
                                    235 	.globl _DPH0
                                    236 	.globl _DPL0
                                    237 	.globl _SP
                                    238 	.globl _P0
                                    239 	.globl _X_P2DIR
                                    240 	.globl _X_P1DIR
                                    241 	.globl _X_P0DIR
                                    242 	.globl _X_U1GCR
                                    243 	.globl _X_U1UCR
                                    244 	.globl _X_U1BAUD
                                    245 	.globl _X_U1DBUF
                                    246 	.globl _X_U1CSR
                                    247 	.globl _X_P2INP
                                    248 	.globl _X_P1INP
                                    249 	.globl _X_P2SEL
                                    250 	.globl _X_P1SEL
                                    251 	.globl _X_P0SEL
                                    252 	.globl _X_ADCCFG
                                    253 	.globl _X_PERCFG
                                    254 	.globl __NA_B
                                    255 	.globl _X_T4CC1
                                    256 	.globl _X_T4CCTL1
                                    257 	.globl _X_T4CC0
                                    258 	.globl _X_T4CCTL0
                                    259 	.globl _X_T4CTL
                                    260 	.globl _X_T4CNT
                                    261 	.globl _X_RFIF
                                    262 	.globl __NA_IRCON2
                                    263 	.globl _X_T1CCTL2
                                    264 	.globl _X_T1CCTL1
                                    265 	.globl _X_T1CCTL0
                                    266 	.globl _X_T1CTL
                                    267 	.globl _X_T1CNTH
                                    268 	.globl _X_T1CNTL
                                    269 	.globl _X_RFST
                                    270 	.globl __NA_ACC
                                    271 	.globl _X_T1CC2H
                                    272 	.globl _X_T1CC2L
                                    273 	.globl _X_T1CC1H
                                    274 	.globl _X_T1CC1L
                                    275 	.globl _X_T1CC0H
                                    276 	.globl _X_T1CC0L
                                    277 	.globl _X_RFD
                                    278 	.globl _X_TIMIF
                                    279 	.globl _X_DMAREQ
                                    280 	.globl _X_DMAARM
                                    281 	.globl _X_DMA0CFGH
                                    282 	.globl _X_DMA0CFGL
                                    283 	.globl _X_DMA1CFGH
                                    284 	.globl _X_DMA1CFGL
                                    285 	.globl _X_DMAIRQ
                                    286 	.globl __NA_PSW
                                    287 	.globl _X_T3CC1
                                    288 	.globl _X_T3CCTL1
                                    289 	.globl _X_T3CC0
                                    290 	.globl _X_T3CCTL0
                                    291 	.globl _X_T3CTL
                                    292 	.globl _X_T3CNT
                                    293 	.globl _X_WDCTL
                                    294 	.globl __X_SFRC8
                                    295 	.globl _X_MEMCTR
                                    296 	.globl _X_CLKCON
                                    297 	.globl _X_U0GCR
                                    298 	.globl _X_U0UCR
                                    299 	.globl __X_SFRC3
                                    300 	.globl _X_U0BAUD
                                    301 	.globl _X_U0DBUF
                                    302 	.globl __NA_IRCON
                                    303 	.globl __X_SFRBF
                                    304 	.globl _X_SLEEP
                                    305 	.globl _X_RNDH
                                    306 	.globl _X_RNDL
                                    307 	.globl _X_ADCH
                                    308 	.globl _X_ADCL
                                    309 	.globl __NA_IP1
                                    310 	.globl __NA_IEN1
                                    311 	.globl __X_SFRB7
                                    312 	.globl _X_ADCCON3
                                    313 	.globl _X_ADCCON2
                                    314 	.globl _X_ADCCON1
                                    315 	.globl _X_ENCCS
                                    316 	.globl _X_ENCDO
                                    317 	.globl _X_ENCDI
                                    318 	.globl __X_SFRB0
                                    319 	.globl _X_FWDATA
                                    320 	.globl _X_FCTL
                                    321 	.globl _X_FADDRH
                                    322 	.globl _X_FADDRL
                                    323 	.globl _X_FWT
                                    324 	.globl __X_SFRAA
                                    325 	.globl __NA_IP0
                                    326 	.globl __NA_IEN0
                                    327 	.globl __X_SFRA7
                                    328 	.globl _X_WORTIME1
                                    329 	.globl _X_WORTIME0
                                    330 	.globl _X_WOREVT1
                                    331 	.globl _X_WOREVT0
                                    332 	.globl _X_WORCTRL
                                    333 	.globl _X_WORIRQ
                                    334 	.globl __NA_P2
                                    335 	.globl __X_SFR9F
                                    336 	.globl _X_T2CTL
                                    337 	.globl _X_T2PR
                                    338 	.globl _X_T2CT
                                    339 	.globl __NA_S1CON
                                    340 	.globl __NA_IEN2
                                    341 	.globl __X_SFR99
                                    342 	.globl __NA_S0CON
                                    343 	.globl __X_SFR97
                                    344 	.globl __X_SFR96
                                    345 	.globl __X_SFR95
                                    346 	.globl __X_SFR94
                                    347 	.globl _X_MPAGE
                                    348 	.globl __NA_DPS
                                    349 	.globl _X_RFIM
                                    350 	.globl __NA_P1
                                    351 	.globl _X_P0INP
                                    352 	.globl __X_SFR8E
                                    353 	.globl _X_P1IEN
                                    354 	.globl _X_PICTL
                                    355 	.globl _X_P2IFG
                                    356 	.globl _X_P1IFG
                                    357 	.globl _X_P0IFG
                                    358 	.globl __NA_TCON
                                    359 	.globl __NA_PCON
                                    360 	.globl _X_U0CSR
                                    361 	.globl __NA_DPH1
                                    362 	.globl __NA_DPL1
                                    363 	.globl __NA_DPH0
                                    364 	.globl __NA_DPL0
                                    365 	.globl __NA_SP
                                    366 	.globl __NA_P0
                                    367 	.globl _I2SCLKF2
                                    368 	.globl _I2SCLKF1
                                    369 	.globl _I2SCLKF0
                                    370 	.globl _I2SSTAT
                                    371 	.globl _I2SWCNT
                                    372 	.globl _I2SDATH
                                    373 	.globl _I2SDATL
                                    374 	.globl _I2SCFG1
                                    375 	.globl _I2SCFG0
                                    376 	.globl _VCO_VC_DAC
                                    377 	.globl _PKTSTATUS
                                    378 	.globl _MARCSTATE
                                    379 	.globl _RSSI
                                    380 	.globl _LQI
                                    381 	.globl _FREQEST
                                    382 	.globl _VERSION
                                    383 	.globl _PARTNUM
                                    384 	.globl __XREGDF35
                                    385 	.globl __XREGDF34
                                    386 	.globl __XREGDF33
                                    387 	.globl __XREGDF32
                                    388 	.globl _IOCFG0
                                    389 	.globl _IOCFG1
                                    390 	.globl _IOCFG2
                                    391 	.globl _PA_TABLE0
                                    392 	.globl _PA_TABLE1
                                    393 	.globl _PA_TABLE2
                                    394 	.globl _PA_TABLE3
                                    395 	.globl _PA_TABLE4
                                    396 	.globl _PA_TABLE5
                                    397 	.globl _PA_TABLE6
                                    398 	.globl _PA_TABLE7
                                    399 	.globl __XREGDF26
                                    400 	.globl _TEST0
                                    401 	.globl _TEST1
                                    402 	.globl _TEST2
                                    403 	.globl __XREGDF22
                                    404 	.globl __XREGDF21
                                    405 	.globl __XREGDF20
                                    406 	.globl _FSCAL0
                                    407 	.globl _FSCAL1
                                    408 	.globl _FSCAL2
                                    409 	.globl _FSCAL3
                                    410 	.globl _FREND0
                                    411 	.globl _FREND1
                                    412 	.globl _AGCCTRL0
                                    413 	.globl _AGCCTRL1
                                    414 	.globl _AGCCTRL2
                                    415 	.globl _BSCFG
                                    416 	.globl _FOCCFG
                                    417 	.globl _MCSM0
                                    418 	.globl _MCSM1
                                    419 	.globl _MCSM2
                                    420 	.globl _DEVIATN
                                    421 	.globl _MDMCFG0
                                    422 	.globl _MDMCFG1
                                    423 	.globl _MDMCFG2
                                    424 	.globl _MDMCFG3
                                    425 	.globl _MDMCFG4
                                    426 	.globl _FREQ0
                                    427 	.globl _FREQ1
                                    428 	.globl _FREQ2
                                    429 	.globl _FSCTRL0
                                    430 	.globl _FSCTRL1
                                    431 	.globl _CHANNR
                                    432 	.globl _ADDR
                                    433 	.globl _PKTCTRL0
                                    434 	.globl _PKTCTRL1
                                    435 	.globl _PKTLEN
                                    436 	.globl _SYNC0
                                    437 	.globl _SYNC1
                                    438 	.globl _MDMCTRL0H
                                    439 	.globl _srvinit
                                    440 	.globl _srvrx
                                    441 	.globl _srvrxlower
                                    442 	.globl _srvtx
                                    443 ;--------------------------------------------------------
                                    444 ; special function registers
                                    445 ;--------------------------------------------------------
                                    446 	.area RSEG    (ABS,DATA)
      000000                        447 	.org 0x0000
                           000080   448 _P0	=	0x0080
                           000081   449 _SP	=	0x0081
                           000082   450 _DPL0	=	0x0082
                           000083   451 _DPH0	=	0x0083
                           000084   452 _DPL1	=	0x0084
                           000085   453 _DPH1	=	0x0085
                           000086   454 _U0CSR	=	0x0086
                           000087   455 _PCON	=	0x0087
                           000088   456 _TCON	=	0x0088
                           000089   457 _P0IFG	=	0x0089
                           00008A   458 _P1IFG	=	0x008a
                           00008B   459 _P2IFG	=	0x008b
                           00008C   460 _PICTL	=	0x008c
                           00008D   461 _P1IEN	=	0x008d
                           00008E   462 __SFR8E	=	0x008e
                           00008F   463 _P0INP	=	0x008f
                           000090   464 _P1	=	0x0090
                           000091   465 _RFIM	=	0x0091
                           000092   466 _DPS	=	0x0092
                           000093   467 _MPAGE	=	0x0093
                           000093   468 __XPAGE	=	0x0093
                           000094   469 __SFR94	=	0x0094
                           000095   470 __SFR95	=	0x0095
                           000096   471 __SFR96	=	0x0096
                           000097   472 __SFR97	=	0x0097
                           000098   473 _S0CON	=	0x0098
                           000099   474 __SFR99	=	0x0099
                           00009A   475 _IEN2	=	0x009a
                           00009B   476 _S1CON	=	0x009b
                           00009C   477 _T2CT	=	0x009c
                           00009D   478 _T2PR	=	0x009d
                           00009E   479 _T2CTL	=	0x009e
                           00009F   480 __SFR9F	=	0x009f
                           0000A0   481 _P2	=	0x00a0
                           0000A1   482 _WORIRQ	=	0x00a1
                           0000A2   483 _WORCTRL	=	0x00a2
                           0000A3   484 _WOREVT0	=	0x00a3
                           0000A4   485 _WOREVT1	=	0x00a4
                           0000A5   486 _WORTIME0	=	0x00a5
                           0000A6   487 _WORTIME1	=	0x00a6
                           0000A7   488 __SFRA7	=	0x00a7
                           0000A8   489 _IEN0	=	0x00a8
                           0000A9   490 _IP0	=	0x00a9
                           0000AA   491 __SFRAA	=	0x00aa
                           0000AB   492 _FWT	=	0x00ab
                           0000AC   493 _FADDRL	=	0x00ac
                           0000AD   494 _FADDRH	=	0x00ad
                           0000AE   495 _FCTL	=	0x00ae
                           0000AF   496 _FWDATA	=	0x00af
                           0000B0   497 __SFRB0	=	0x00b0
                           0000B1   498 _ENCDI	=	0x00b1
                           0000B2   499 _ENCDO	=	0x00b2
                           0000B3   500 _ENCCS	=	0x00b3
                           0000B4   501 _ADCCON1	=	0x00b4
                           0000B5   502 _ADCCON2	=	0x00b5
                           0000B6   503 _ADCCON3	=	0x00b6
                           0000B7   504 __SFRB7	=	0x00b7
                           0000B8   505 _IEN1	=	0x00b8
                           0000B9   506 _IP1	=	0x00b9
                           0000BA   507 _ADCL	=	0x00ba
                           0000BB   508 _ADCH	=	0x00bb
                           0000BC   509 _RNDL	=	0x00bc
                           0000BD   510 _RNDH	=	0x00bd
                           0000BE   511 _SLEEP	=	0x00be
                           0000BF   512 __SFRBF	=	0x00bf
                           0000C0   513 _IRCON	=	0x00c0
                           0000C1   514 _U0DBUF	=	0x00c1
                           0000C2   515 _U0BAUD	=	0x00c2
                           0000C3   516 __SFRC3	=	0x00c3
                           0000C4   517 _U0UCR	=	0x00c4
                           0000C5   518 _U0GCR	=	0x00c5
                           0000C6   519 _CLKCON	=	0x00c6
                           0000C7   520 _MEMCTR	=	0x00c7
                           0000C8   521 __SFRC8	=	0x00c8
                           0000C9   522 _WDCTL	=	0x00c9
                           0000CA   523 _T3CNT	=	0x00ca
                           0000CB   524 _T3CTL	=	0x00cb
                           0000CC   525 _T3CCTL0	=	0x00cc
                           0000CD   526 _T3CC0	=	0x00cd
                           0000CE   527 _T3CCTL1	=	0x00ce
                           0000CF   528 _T3CC1	=	0x00cf
                           0000D0   529 _PSW	=	0x00d0
                           0000D1   530 _DMAIRQ	=	0x00d1
                           0000D2   531 _DMA1CFGL	=	0x00d2
                           0000D3   532 _DMA1CFGH	=	0x00d3
                           0000D4   533 _DMA0CFGL	=	0x00d4
                           0000D5   534 _DMA0CFGH	=	0x00d5
                           0000D6   535 _DMAARM	=	0x00d6
                           0000D7   536 _DMAREQ	=	0x00d7
                           0000D8   537 _TIMIF	=	0x00d8
                           0000D9   538 _RFD	=	0x00d9
                           0000DA   539 _T1CC0L	=	0x00da
                           0000DB   540 _T1CC0H	=	0x00db
                           0000DC   541 _T1CC1L	=	0x00dc
                           0000DD   542 _T1CC1H	=	0x00dd
                           0000DE   543 _T1CC2L	=	0x00de
                           0000DF   544 _T1CC2H	=	0x00df
                           0000E0   545 _ACC	=	0x00e0
                           0000E1   546 _RFST	=	0x00e1
                           0000E2   547 _T1CNTL	=	0x00e2
                           0000E3   548 _T1CNTH	=	0x00e3
                           0000E4   549 _T1CTL	=	0x00e4
                           0000E5   550 _T1CCTL0	=	0x00e5
                           0000E6   551 _T1CCTL1	=	0x00e6
                           0000E7   552 _T1CCTL2	=	0x00e7
                           0000E8   553 _IRCON2	=	0x00e8
                           0000E9   554 _RFIF	=	0x00e9
                           0000EA   555 _T4CNT	=	0x00ea
                           0000EB   556 _T4CTL	=	0x00eb
                           0000EC   557 _T4CCTL0	=	0x00ec
                           0000ED   558 _T4CC0	=	0x00ed
                           0000EE   559 _T4CCTL1	=	0x00ee
                           0000EF   560 _T4CC1	=	0x00ef
                           0000F0   561 _B	=	0x00f0
                           0000F1   562 _PERCFG	=	0x00f1
                           0000F2   563 _ADCCFG	=	0x00f2
                           0000F3   564 _P0SEL	=	0x00f3
                           0000F4   565 _P1SEL	=	0x00f4
                           0000F5   566 _P2SEL	=	0x00f5
                           0000F6   567 _P1INP	=	0x00f6
                           0000F7   568 _P2INP	=	0x00f7
                           0000F8   569 _U1CSR	=	0x00f8
                           0000F9   570 _U1DBUF	=	0x00f9
                           0000FA   571 _U1BAUD	=	0x00fa
                           0000FB   572 _U1UCR	=	0x00fb
                           0000FC   573 _U1GCR	=	0x00fc
                           0000FD   574 _P0DIR	=	0x00fd
                           0000FE   575 _P1DIR	=	0x00fe
                           0000FF   576 _P2DIR	=	0x00ff
                                    577 ;--------------------------------------------------------
                                    578 ; special function bits
                                    579 ;--------------------------------------------------------
                                    580 	.area RSEG    (ABS,DATA)
      000000                        581 	.org 0x0000
                           000080   582 _P0_0	=	0x0080
                           000081   583 _P0_1	=	0x0081
                           000082   584 _P0_2	=	0x0082
                           000083   585 _P0_3	=	0x0083
                           000084   586 _P0_4	=	0x0084
                           000085   587 _P0_5	=	0x0085
                           000086   588 _P0_6	=	0x0086
                           000087   589 _P0_7	=	0x0087
                           000088   590 _IT0	=	0x0088
                           000089   591 _RFTXRXIF	=	0x0089
                           00008A   592 _IT1	=	0x008a
                           00008B   593 _URX0IF	=	0x008b
                           00008D   594 _ADCIF	=	0x008d
                           00008F   595 _URX1IF	=	0x008f
                           000090   596 _P1_0	=	0x0090
                           000091   597 _P1_1	=	0x0091
                           000092   598 _P1_2	=	0x0092
                           000093   599 _P1_3	=	0x0093
                           000094   600 _P1_4	=	0x0094
                           000095   601 _P1_5	=	0x0095
                           000096   602 _P1_6	=	0x0096
                           000097   603 _P1_7	=	0x0097
                           000098   604 _ENCIF_0	=	0x0098
                           000099   605 _ENCIF_1	=	0x0099
                           0000A0   606 _P2_0	=	0x00a0
                           0000A1   607 _P2_1	=	0x00a1
                           0000A2   608 _P2_2	=	0x00a2
                           0000A3   609 _P2_3	=	0x00a3
                           0000A4   610 _P2_4	=	0x00a4
                           0000A5   611 _P2_5	=	0x00a5
                           0000A6   612 _P2_6	=	0x00a6
                           0000A7   613 _P2_7	=	0x00a7
                           0000A8   614 _RFTXRXIE	=	0x00a8
                           0000A9   615 _ADCIE	=	0x00a9
                           0000AA   616 _URX0IE	=	0x00aa
                           0000AB   617 _URX1IE	=	0x00ab
                           0000AC   618 _ENCIE	=	0x00ac
                           0000AD   619 _STIE	=	0x00ad
                           0000AF   620 _EA	=	0x00af
                           0000B8   621 _DMAIE	=	0x00b8
                           0000B9   622 _T1IE	=	0x00b9
                           0000BA   623 _T2IE	=	0x00ba
                           0000BB   624 _T3IE	=	0x00bb
                           0000BC   625 _T4IE	=	0x00bc
                           0000BD   626 _P0IE	=	0x00bd
                           0000C0   627 _DMAIF	=	0x00c0
                           0000C1   628 _T1IF	=	0x00c1
                           0000C2   629 _T2IF	=	0x00c2
                           0000C3   630 _T3IF	=	0x00c3
                           0000C4   631 _T4IF	=	0x00c4
                           0000C5   632 _P0IF	=	0x00c5
                           0000C7   633 _STIF	=	0x00c7
                           0000D0   634 _P	=	0x00d0
                           0000D1   635 _F1	=	0x00d1
                           0000D2   636 _OV	=	0x00d2
                           0000D3   637 _RS0	=	0x00d3
                           0000D4   638 _RS1	=	0x00d4
                           0000D5   639 _F0	=	0x00d5
                           0000D6   640 _AC	=	0x00d6
                           0000D7   641 _CY	=	0x00d7
                           0000D8   642 _T3OVFIF	=	0x00d8
                           0000D9   643 _T3CH0IF	=	0x00d9
                           0000DA   644 _T3CH1IF	=	0x00da
                           0000DB   645 _T4OVFIF	=	0x00db
                           0000DC   646 _T4CH0IF	=	0x00dc
                           0000DD   647 _T4CH1IF	=	0x00dd
                           0000DE   648 _OVFIM	=	0x00de
                           0000E0   649 _ACC_0	=	0x00e0
                           0000E1   650 _ACC_1	=	0x00e1
                           0000E2   651 _ACC_2	=	0x00e2
                           0000E3   652 _ACC_3	=	0x00e3
                           0000E4   653 _ACC_4	=	0x00e4
                           0000E5   654 _ACC_5	=	0x00e5
                           0000E6   655 _ACC_6	=	0x00e6
                           0000E7   656 _ACC_7	=	0x00e7
                           0000E8   657 _P2IF	=	0x00e8
                           0000E9   658 _UTX0IF	=	0x00e9
                           0000EA   659 _UTX1IF	=	0x00ea
                           0000EB   660 _P1IF	=	0x00eb
                           0000EC   661 _WDTIF	=	0x00ec
                           0000F0   662 _B_0	=	0x00f0
                           0000F1   663 _B_1	=	0x00f1
                           0000F2   664 _B_2	=	0x00f2
                           0000F3   665 _B_3	=	0x00f3
                           0000F4   666 _B_4	=	0x00f4
                           0000F5   667 _B_5	=	0x00f5
                           0000F6   668 _B_6	=	0x00f6
                           0000F7   669 _B_7	=	0x00f7
                           0000F8   670 _ACTIVE	=	0x00f8
                           0000F9   671 _TX_BYTE	=	0x00f9
                           0000FA   672 _RX_BYTE	=	0x00fa
                           0000FB   673 _ERR	=	0x00fb
                           0000FC   674 _FE	=	0x00fc
                           0000FD   675 _SLAVE	=	0x00fd
                           0000FE   676 _RE	=	0x00fe
                           0000FF   677 _MODE	=	0x00ff
                                    678 ;--------------------------------------------------------
                                    679 ; overlayable register banks
                                    680 ;--------------------------------------------------------
                                    681 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        682 	.ds 8
                                    683 ;--------------------------------------------------------
                                    684 ; internal ram data
                                    685 ;--------------------------------------------------------
                                    686 	.area DSEG    (DATA)
                                    687 ;--------------------------------------------------------
                                    688 ; overlayable items in internal ram 
                                    689 ;--------------------------------------------------------
                                    690 ;--------------------------------------------------------
                                    691 ; indirectly addressable internal ram data
                                    692 ;--------------------------------------------------------
                                    693 	.area ISEG    (DATA)
                                    694 ;--------------------------------------------------------
                                    695 ; absolute internal ram data
                                    696 ;--------------------------------------------------------
                                    697 	.area IABS    (ABS,DATA)
                                    698 	.area IABS    (ABS,DATA)
                                    699 ;--------------------------------------------------------
                                    700 ; bit data
                                    701 ;--------------------------------------------------------
                                    702 	.area BSEG    (BIT)
                                    703 ;--------------------------------------------------------
                                    704 ; paged external ram data
                                    705 ;--------------------------------------------------------
                                    706 	.area PSEG    (PAG,XDATA)
                                    707 ;--------------------------------------------------------
                                    708 ; external ram data
                                    709 ;--------------------------------------------------------
                                    710 	.area XSEG    (XDATA)
                           00DF02   711 _MDMCTRL0H	=	0xdf02
                           00DF00   712 _SYNC1	=	0xdf00
                           00DF01   713 _SYNC0	=	0xdf01
                           00DF02   714 _PKTLEN	=	0xdf02
                           00DF03   715 _PKTCTRL1	=	0xdf03
                           00DF04   716 _PKTCTRL0	=	0xdf04
                           00DF05   717 _ADDR	=	0xdf05
                           00DF06   718 _CHANNR	=	0xdf06
                           00DF07   719 _FSCTRL1	=	0xdf07
                           00DF08   720 _FSCTRL0	=	0xdf08
                           00DF09   721 _FREQ2	=	0xdf09
                           00DF0A   722 _FREQ1	=	0xdf0a
                           00DF0B   723 _FREQ0	=	0xdf0b
                           00DF0C   724 _MDMCFG4	=	0xdf0c
                           00DF0D   725 _MDMCFG3	=	0xdf0d
                           00DF0E   726 _MDMCFG2	=	0xdf0e
                           00DF0F   727 _MDMCFG1	=	0xdf0f
                           00DF10   728 _MDMCFG0	=	0xdf10
                           00DF11   729 _DEVIATN	=	0xdf11
                           00DF12   730 _MCSM2	=	0xdf12
                           00DF13   731 _MCSM1	=	0xdf13
                           00DF14   732 _MCSM0	=	0xdf14
                           00DF15   733 _FOCCFG	=	0xdf15
                           00DF16   734 _BSCFG	=	0xdf16
                           00DF17   735 _AGCCTRL2	=	0xdf17
                           00DF18   736 _AGCCTRL1	=	0xdf18
                           00DF19   737 _AGCCTRL0	=	0xdf19
                           00DF1A   738 _FREND1	=	0xdf1a
                           00DF1B   739 _FREND0	=	0xdf1b
                           00DF1C   740 _FSCAL3	=	0xdf1c
                           00DF1D   741 _FSCAL2	=	0xdf1d
                           00DF1E   742 _FSCAL1	=	0xdf1e
                           00DF1F   743 _FSCAL0	=	0xdf1f
                           00DF20   744 __XREGDF20	=	0xdf20
                           00DF21   745 __XREGDF21	=	0xdf21
                           00DF22   746 __XREGDF22	=	0xdf22
                           00DF23   747 _TEST2	=	0xdf23
                           00DF24   748 _TEST1	=	0xdf24
                           00DF25   749 _TEST0	=	0xdf25
                           00DF26   750 __XREGDF26	=	0xdf26
                           00DF27   751 _PA_TABLE7	=	0xdf27
                           00DF28   752 _PA_TABLE6	=	0xdf28
                           00DF29   753 _PA_TABLE5	=	0xdf29
                           00DF2A   754 _PA_TABLE4	=	0xdf2a
                           00DF2B   755 _PA_TABLE3	=	0xdf2b
                           00DF2C   756 _PA_TABLE2	=	0xdf2c
                           00DF2D   757 _PA_TABLE1	=	0xdf2d
                           00DF2E   758 _PA_TABLE0	=	0xdf2e
                           00DF2F   759 _IOCFG2	=	0xdf2f
                           00DF30   760 _IOCFG1	=	0xdf30
                           00DF31   761 _IOCFG0	=	0xdf31
                           00DF32   762 __XREGDF32	=	0xdf32
                           00DF33   763 __XREGDF33	=	0xdf33
                           00DF34   764 __XREGDF34	=	0xdf34
                           00DF35   765 __XREGDF35	=	0xdf35
                           00DF36   766 _PARTNUM	=	0xdf36
                           00DF37   767 _VERSION	=	0xdf37
                           00DF38   768 _FREQEST	=	0xdf38
                           00DF39   769 _LQI	=	0xdf39
                           00DF3A   770 _RSSI	=	0xdf3a
                           00DF3B   771 _MARCSTATE	=	0xdf3b
                           00DF3C   772 _PKTSTATUS	=	0xdf3c
                           00DF3D   773 _VCO_VC_DAC	=	0xdf3d
                           00DF40   774 _I2SCFG0	=	0xdf40
                           00DF41   775 _I2SCFG1	=	0xdf41
                           00DF42   776 _I2SDATL	=	0xdf42
                           00DF43   777 _I2SDATH	=	0xdf43
                           00DF44   778 _I2SWCNT	=	0xdf44
                           00DF45   779 _I2SSTAT	=	0xdf45
                           00DF46   780 _I2SCLKF0	=	0xdf46
                           00DF47   781 _I2SCLKF1	=	0xdf47
                           00DF48   782 _I2SCLKF2	=	0xdf48
                           00DF80   783 __NA_P0	=	0xdf80
                           00DF81   784 __NA_SP	=	0xdf81
                           00DF82   785 __NA_DPL0	=	0xdf82
                           00DF83   786 __NA_DPH0	=	0xdf83
                           00DF84   787 __NA_DPL1	=	0xdf84
                           00DF85   788 __NA_DPH1	=	0xdf85
                           00DF86   789 _X_U0CSR	=	0xdf86
                           00DF87   790 __NA_PCON	=	0xdf87
                           00DF88   791 __NA_TCON	=	0xdf88
                           00DF89   792 _X_P0IFG	=	0xdf89
                           00DF8A   793 _X_P1IFG	=	0xdf8a
                           00DF8B   794 _X_P2IFG	=	0xdf8b
                           00DF8C   795 _X_PICTL	=	0xdf8c
                           00DF8D   796 _X_P1IEN	=	0xdf8d
                           00DF8E   797 __X_SFR8E	=	0xdf8e
                           00DF8F   798 _X_P0INP	=	0xdf8f
                           00DF90   799 __NA_P1	=	0xdf90
                           00DF91   800 _X_RFIM	=	0xdf91
                           00DF92   801 __NA_DPS	=	0xdf92
                           00DF93   802 _X_MPAGE	=	0xdf93
                           00DF94   803 __X_SFR94	=	0xdf94
                           00DF95   804 __X_SFR95	=	0xdf95
                           00DF96   805 __X_SFR96	=	0xdf96
                           00DF97   806 __X_SFR97	=	0xdf97
                           00DF98   807 __NA_S0CON	=	0xdf98
                           00DF99   808 __X_SFR99	=	0xdf99
                           00DF9A   809 __NA_IEN2	=	0xdf9a
                           00DF9B   810 __NA_S1CON	=	0xdf9b
                           00DF9C   811 _X_T2CT	=	0xdf9c
                           00DF9D   812 _X_T2PR	=	0xdf9d
                           00DF9E   813 _X_T2CTL	=	0xdf9e
                           00DF9F   814 __X_SFR9F	=	0xdf9f
                           00DFA0   815 __NA_P2	=	0xdfa0
                           00DFA1   816 _X_WORIRQ	=	0xdfa1
                           00DFA2   817 _X_WORCTRL	=	0xdfa2
                           00DFA3   818 _X_WOREVT0	=	0xdfa3
                           00DFA4   819 _X_WOREVT1	=	0xdfa4
                           00DFA5   820 _X_WORTIME0	=	0xdfa5
                           00DFA6   821 _X_WORTIME1	=	0xdfa6
                           00DFA7   822 __X_SFRA7	=	0xdfa7
                           00DFA8   823 __NA_IEN0	=	0xdfa8
                           00DFA9   824 __NA_IP0	=	0xdfa9
                           00DFAA   825 __X_SFRAA	=	0xdfaa
                           00DFAB   826 _X_FWT	=	0xdfab
                           00DFAC   827 _X_FADDRL	=	0xdfac
                           00DFAD   828 _X_FADDRH	=	0xdfad
                           00DFAE   829 _X_FCTL	=	0xdfae
                           00DFAF   830 _X_FWDATA	=	0xdfaf
                           00DFB0   831 __X_SFRB0	=	0xdfb0
                           00DFB1   832 _X_ENCDI	=	0xdfb1
                           00DFB2   833 _X_ENCDO	=	0xdfb2
                           00DFB3   834 _X_ENCCS	=	0xdfb3
                           00DFB4   835 _X_ADCCON1	=	0xdfb4
                           00DFB5   836 _X_ADCCON2	=	0xdfb5
                           00DFB6   837 _X_ADCCON3	=	0xdfb6
                           00DFB7   838 __X_SFRB7	=	0xdfb7
                           00DFB8   839 __NA_IEN1	=	0xdfb8
                           00DFB9   840 __NA_IP1	=	0xdfb9
                           00DFBA   841 _X_ADCL	=	0xdfba
                           00DFBB   842 _X_ADCH	=	0xdfbb
                           00DFBC   843 _X_RNDL	=	0xdfbc
                           00DFBD   844 _X_RNDH	=	0xdfbd
                           00DFBE   845 _X_SLEEP	=	0xdfbe
                           00DFBF   846 __X_SFRBF	=	0xdfbf
                           00DFC0   847 __NA_IRCON	=	0xdfc0
                           00DFC1   848 _X_U0DBUF	=	0xdfc1
                           00DFC2   849 _X_U0BAUD	=	0xdfc2
                           00DFC3   850 __X_SFRC3	=	0xdfc3
                           00DFC4   851 _X_U0UCR	=	0xdfc4
                           00DFC5   852 _X_U0GCR	=	0xdfc5
                           00DFC6   853 _X_CLKCON	=	0xdfc6
                           00DFC7   854 _X_MEMCTR	=	0xdfc7
                           00DFC8   855 __X_SFRC8	=	0xdfc8
                           00DFC9   856 _X_WDCTL	=	0xdfc9
                           00DFCA   857 _X_T3CNT	=	0xdfca
                           00DFCB   858 _X_T3CTL	=	0xdfcb
                           00DFCC   859 _X_T3CCTL0	=	0xdfcc
                           00DFCD   860 _X_T3CC0	=	0xdfcd
                           00DFCE   861 _X_T3CCTL1	=	0xdfce
                           00DFCF   862 _X_T3CC1	=	0xdfcf
                           00DFD0   863 __NA_PSW	=	0xdfd0
                           00DFD1   864 _X_DMAIRQ	=	0xdfd1
                           00DFD2   865 _X_DMA1CFGL	=	0xdfd2
                           00DFD3   866 _X_DMA1CFGH	=	0xdfd3
                           00DFD4   867 _X_DMA0CFGL	=	0xdfd4
                           00DFD5   868 _X_DMA0CFGH	=	0xdfd5
                           00DFD6   869 _X_DMAARM	=	0xdfd6
                           00DFD7   870 _X_DMAREQ	=	0xdfd7
                           00DFD8   871 _X_TIMIF	=	0xdfd8
                           00DFD9   872 _X_RFD	=	0xdfd9
                           00DFDA   873 _X_T1CC0L	=	0xdfda
                           00DFDB   874 _X_T1CC0H	=	0xdfdb
                           00DFDC   875 _X_T1CC1L	=	0xdfdc
                           00DFDD   876 _X_T1CC1H	=	0xdfdd
                           00DFDE   877 _X_T1CC2L	=	0xdfde
                           00DFDF   878 _X_T1CC2H	=	0xdfdf
                           00DFE0   879 __NA_ACC	=	0xdfe0
                           00DFE1   880 _X_RFST	=	0xdfe1
                           00DFE2   881 _X_T1CNTL	=	0xdfe2
                           00DFE3   882 _X_T1CNTH	=	0xdfe3
                           00DFE4   883 _X_T1CTL	=	0xdfe4
                           00DFE5   884 _X_T1CCTL0	=	0xdfe5
                           00DFE6   885 _X_T1CCTL1	=	0xdfe6
                           00DFE7   886 _X_T1CCTL2	=	0xdfe7
                           00DFE8   887 __NA_IRCON2	=	0xdfe8
                           00DFE9   888 _X_RFIF	=	0xdfe9
                           00DFEA   889 _X_T4CNT	=	0xdfea
                           00DFEB   890 _X_T4CTL	=	0xdfeb
                           00DFEC   891 _X_T4CCTL0	=	0xdfec
                           00DFED   892 _X_T4CC0	=	0xdfed
                           00DFEE   893 _X_T4CCTL1	=	0xdfee
                           00DFEF   894 _X_T4CC1	=	0xdfef
                           00DFF0   895 __NA_B	=	0xdff0
                           00DFF1   896 _X_PERCFG	=	0xdff1
                           00DFF2   897 _X_ADCCFG	=	0xdff2
                           00DFF3   898 _X_P0SEL	=	0xdff3
                           00DFF4   899 _X_P1SEL	=	0xdff4
                           00DFF5   900 _X_P2SEL	=	0xdff5
                           00DFF6   901 _X_P1INP	=	0xdff6
                           00DFF7   902 _X_P2INP	=	0xdff7
                           00DFF8   903 _X_U1CSR	=	0xdff8
                           00DFF9   904 _X_U1DBUF	=	0xdff9
                           00DFFA   905 _X_U1BAUD	=	0xdffa
                           00DFFB   906 _X_U1UCR	=	0xdffb
                           00DFFC   907 _X_U1GCR	=	0xdffc
                           00DFFD   908 _X_P0DIR	=	0xdffd
                           00DFFE   909 _X_P1DIR	=	0xdffe
                           00DFFF   910 _X_P2DIR	=	0xdfff
      00F278                        911 _nrx:
      00F278                        912 	.ds 1
      00F279                        913 _ntx:
      00F279                        914 	.ds 1
      00F27A                        915 _rxstate:
      00F27A                        916 	.ds 1
      00F27B                        917 _urx0intr_byte_1_49:
      00F27B                        918 	.ds 1
                                    919 ;--------------------------------------------------------
                                    920 ; absolute external ram data
                                    921 ;--------------------------------------------------------
                                    922 	.area XABS    (ABS,XDATA)
                                    923 ;--------------------------------------------------------
                                    924 ; external initialized ram data
                                    925 ;--------------------------------------------------------
                                    926 	.area XISEG   (XDATA)
                                    927 	.area HOME    (CODE)
                                    928 	.area GSINIT0 (CODE)
                                    929 	.area GSINIT1 (CODE)
                                    930 	.area GSINIT2 (CODE)
                                    931 	.area GSINIT3 (CODE)
                                    932 	.area GSINIT4 (CODE)
                                    933 	.area GSINIT5 (CODE)
                                    934 	.area GSINIT  (CODE)
                                    935 	.area GSFINAL (CODE)
                                    936 	.area CSEG    (CODE)
                                    937 ;--------------------------------------------------------
                                    938 ; global & static initialisations
                                    939 ;--------------------------------------------------------
                                    940 	.area HOME    (CODE)
                                    941 	.area GSINIT  (CODE)
                                    942 	.area GSFINAL (CODE)
                                    943 	.area GSINIT  (CODE)
                                    944 ;--------------------------------------------------------
                                    945 ; Home
                                    946 ;--------------------------------------------------------
                                    947 	.area HOME    (CODE)
                                    948 	.area HOME    (CODE)
                                    949 ;--------------------------------------------------------
                                    950 ; code
                                    951 ;--------------------------------------------------------
                                    952 	.area CSEG    (CODE)
                                    953 ;------------------------------------------------------------
                                    954 ;Allocation info for local variables in function 'srvinit'
                                    955 ;------------------------------------------------------------
                                    956 ;	uartsrv.c:25: srvinit()
                                    957 ;	-----------------------------------------
                                    958 ;	 function srvinit
                                    959 ;	-----------------------------------------
      001A5F                        960 _srvinit:
                           000007   961 	ar7 = 0x07
                           000006   962 	ar6 = 0x06
                           000005   963 	ar5 = 0x05
                           000004   964 	ar4 = 0x04
                           000003   965 	ar3 = 0x03
                           000002   966 	ar2 = 0x02
                           000001   967 	ar1 = 0x01
                           000000   968 	ar0 = 0x00
                                    969 ;	uartsrv.c:28: U0CSR = U0CSR_MODE;
      001A5F 75 86 80         [24]  970 	mov	_U0CSR,#0x80
                                    971 ;	uartsrv.c:31: PERCFG = (PERCFG & ~PERCFG_U0CFG) | PERCFG_U1CFG;
      001A62 AF F1            [24]  972 	mov	r7,_PERCFG
      001A64 74 FE            [12]  973 	mov	a,#0xFE
      001A66 5F               [12]  974 	anl	a,r7
      001A67 44 02            [12]  975 	orl	a,#0x02
      001A69 F5 F1            [12]  976 	mov	_PERCFG,a
                                    977 ;	uartsrv.c:32: P0SEL |= BIT(2) | BIT(3) | BIT(4) | BIT(5);
      001A6B 43 F3 3C         [24]  978 	orl	_P0SEL,#0x3C
                                    979 ;	uartsrv.c:43: U0BAUD = 163;
      001A6E 75 C2 A3         [24]  980 	mov	_U0BAUD,#0xA3
                                    981 ;	uartsrv.c:44: U0GCR = (U0GCR&~U0GCR_BAUD_E) | 9;
      001A71 AF C5            [24]  982 	mov	r7,_U0GCR
      001A73 74 E0            [12]  983 	mov	a,#0xE0
      001A75 5F               [12]  984 	anl	a,r7
      001A76 44 09            [12]  985 	orl	a,#0x09
      001A78 F5 C5            [12]  986 	mov	_U0GCR,a
                                    987 ;	uartsrv.c:51: U0UCR |= 0x02;
      001A7A 43 C4 02         [24]  988 	orl	_U0UCR,#0x02
                                    989 ;	uartsrv.c:53: rxstate = Uidle;
      001A7D 90 F2 7A         [24]  990 	mov	dptr,#_rxstate
      001A80 E4               [12]  991 	clr	a
      001A81 F0               [24]  992 	movx	@dptr,a
                                    993 ;	uartsrv.c:55: URX0IF = 0;
      001A82 C2 8B            [12]  994 	clr	_URX0IF
                                    995 ;	uartsrv.c:56: U0CSR &= ~U0CSR_RX_BYTE;
      001A84 AF 86            [24]  996 	mov	r7,_U0CSR
      001A86 74 FB            [12]  997 	mov	a,#0xFB
      001A88 5F               [12]  998 	anl	a,r7
      001A89 F5 86            [12]  999 	mov	_U0CSR,a
                                   1000 ;	uartsrv.c:57: U0CSR |= U0CSR_RE;
      001A8B 43 86 40         [24] 1001 	orl	_U0CSR,#0x40
                                   1002 ;	uartsrv.c:58: URX0IE = 1;
      001A8E D2 AA            [12] 1003 	setb	_URX0IE
      001A90 22               [24] 1004 	ret
                                   1005 ;------------------------------------------------------------
                                   1006 ;Allocation info for local variables in function 'srvrx'
                                   1007 ;------------------------------------------------------------
                                   1008 ;	uartsrv.c:62: srvrx()
                                   1009 ;	-----------------------------------------
                                   1010 ;	 function srvrx
                                   1011 ;	-----------------------------------------
      001A91                       1012 _srvrx:
                                   1013 ;	uartsrv.c:64: flag &= ~Frxcall;
      001A91 90 F0 00         [24] 1014 	mov	dptr,#_flag
      001A94 E0               [24] 1015 	movx	a,@dptr
      001A95 FF               [12] 1016 	mov	r7,a
      001A96 74 FE            [12] 1017 	mov	a,#0xFE
      001A98 5F               [12] 1018 	anl	a,r7
      001A99 F0               [24] 1019 	movx	@dptr,a
                                   1020 ;	uartsrv.c:65: rxstate = Uready;
      001A9A 90 F2 7A         [24] 1021 	mov	dptr,#_rxstate
      001A9D 74 01            [12] 1022 	mov	a,#0x01
      001A9F F0               [24] 1023 	movx	@dptr,a
                                   1024 ;	uartsrv.c:66: nrx = 0;
      001AA0 90 F2 78         [24] 1025 	mov	dptr,#_nrx
      001AA3 E4               [12] 1026 	clr	a
      001AA4 F0               [24] 1027 	movx	@dptr,a
      001AA5 22               [24] 1028 	ret
                                   1029 ;------------------------------------------------------------
                                   1030 ;Allocation info for local variables in function 'srvrxlower'
                                   1031 ;------------------------------------------------------------
                                   1032 ;	uartsrv.c:74: srvrxlower()
                                   1033 ;	-----------------------------------------
                                   1034 ;	 function srvrxlower
                                   1035 ;	-----------------------------------------
      001AA6                       1036 _srvrxlower:
                                   1037 ;	uartsrv.c:75: {/*no-op*/}
      001AA6 22               [24] 1038 	ret
                                   1039 ;------------------------------------------------------------
                                   1040 ;Allocation info for local variables in function 'urx0intr'
                                   1041 ;------------------------------------------------------------
                                   1042 ;byte                      Allocated with name '_urx0intr_byte_1_49'
                                   1043 ;------------------------------------------------------------
                                   1044 ;	uartsrv.c:78: urx0intr(void) __interrupt URX0_VECTOR
                                   1045 ;	-----------------------------------------
                                   1046 ;	 function urx0intr
                                   1047 ;	-----------------------------------------
      001AA7                       1048 _urx0intr:
      001AA7 C0 E0            [24] 1049 	push	acc
      001AA9 C0 82            [24] 1050 	push	dpl
      001AAB C0 83            [24] 1051 	push	dph
      001AAD C0 07            [24] 1052 	push	ar7
      001AAF C0 06            [24] 1053 	push	ar6
      001AB1 C0 D0            [24] 1054 	push	psw
      001AB3 75 D0 00         [24] 1055 	mov	psw,#0x00
                                   1056 ;	uartsrv.c:82: URX0IF = 0;
      001AB6 C2 8B            [12] 1057 	clr	_URX0IF
                                   1058 ;	uartsrv.c:83: byte = U0DBUF;
      001AB8 AF C1            [24] 1059 	mov	r7,_U0DBUF
      001ABA 90 F2 7B         [24] 1060 	mov	dptr,#_urx0intr_byte_1_49
      001ABD EF               [12] 1061 	mov	a,r7
      001ABE F0               [24] 1062 	movx	@dptr,a
                                   1063 ;	uartsrv.c:85: if((rxstate == Uidle || rxstate == Uready) && byte == 0xff){
      001ABF 90 F2 7A         [24] 1064 	mov	dptr,#_rxstate
      001AC2 E0               [24] 1065 	movx	a,@dptr
      001AC3 FE               [12] 1066 	mov	r6,a
      001AC4 60 08            [24] 1067 	jz	00104$
      001AC6 90 F2 7A         [24] 1068 	mov	dptr,#_rxstate
      001AC9 E0               [24] 1069 	movx	a,@dptr
      001ACA FE               [12] 1070 	mov	r6,a
      001ACB BE 01 0C         [24] 1071 	cjne	r6,#0x01,00102$
      001ACE                       1072 00104$:
      001ACE BF FF 09         [24] 1073 	cjne	r7,#0xFF,00102$
                                   1074 ;	uartsrv.c:86: RED=1;
      001AD1 D2 97            [12] 1075 	setb	_P1_7
                                   1076 ;	uartsrv.c:87: EA = 0;
      001AD3 C2 AF            [12] 1077 	clr	_EA
                                   1078 ;	uartsrv.c:88: WDCTL = BIT(3) | BIT(0);
      001AD5 75 C9 09         [24] 1079 	mov	_WDCTL,#0x09
                                   1080 ;	uartsrv.c:89: return;
      001AD8 80 4F            [24] 1081 	sjmp	00111$
      001ADA                       1082 00102$:
                                   1083 ;	uartsrv.c:92: if(rxstate == Uidle)
      001ADA 90 F2 7A         [24] 1084 	mov	dptr,#_rxstate
      001ADD E0               [24] 1085 	movx	a,@dptr
      001ADE FF               [12] 1086 	mov	r7,a
      001ADF 70 02            [24] 1087 	jnz	00106$
                                   1088 ;	uartsrv.c:93: return;	/* TODO: panic? */
      001AE1 80 46            [24] 1089 	sjmp	00111$
      001AE3                       1090 00106$:
                                   1091 ;	uartsrv.c:95: if(rxstate == Uready){
      001AE3 90 F2 7A         [24] 1092 	mov	dptr,#_rxstate
      001AE6 E0               [24] 1093 	movx	a,@dptr
      001AE7 FF               [12] 1094 	mov	r7,a
      001AE8 BF 01 0B         [24] 1095 	cjne	r7,#0x01,00108$
                                   1096 ;	uartsrv.c:96: nrx = 0;
      001AEB 90 F2 78         [24] 1097 	mov	dptr,#_nrx
      001AEE E4               [12] 1098 	clr	a
      001AEF F0               [24] 1099 	movx	@dptr,a
                                   1100 ;	uartsrv.c:97: rxstate = Urxing;
      001AF0 90 F2 7A         [24] 1101 	mov	dptr,#_rxstate
      001AF3 74 02            [12] 1102 	mov	a,#0x02
      001AF5 F0               [24] 1103 	movx	@dptr,a
      001AF6                       1104 00108$:
                                   1105 ;	uartsrv.c:100: GREEN=1;
      001AF6 D2 97            [12] 1106 	setb	_P1_7
                                   1107 ;	uartsrv.c:102: rxcall[nrx++] = U0DBUF;
      001AF8 90 F2 78         [24] 1108 	mov	dptr,#_nrx
      001AFB E0               [24] 1109 	movx	a,@dptr
      001AFC FF               [12] 1110 	mov	r7,a
      001AFD E0               [24] 1111 	movx	a,@dptr
      001AFE 24 01            [12] 1112 	add	a,#0x01
      001B00 F0               [24] 1113 	movx	@dptr,a
      001B01 EF               [12] 1114 	mov	a,r7
      001B02 24 01            [12] 1115 	add	a,#_rxcall
      001B04 F5 82            [12] 1116 	mov	dpl,a
      001B06 E4               [12] 1117 	clr	a
      001B07 34 F0            [12] 1118 	addc	a,#(_rxcall >> 8)
      001B09 F5 83            [12] 1119 	mov	dph,a
      001B0B E5 C1            [12] 1120 	mov	a,_U0DBUF
      001B0D F0               [24] 1121 	movx	@dptr,a
                                   1122 ;	uartsrv.c:104: if(nrx == rxcall[0]){
      001B0E 90 F0 01         [24] 1123 	mov	dptr,#_rxcall
      001B11 E0               [24] 1124 	movx	a,@dptr
      001B12 FF               [12] 1125 	mov	r7,a
      001B13 90 F2 78         [24] 1126 	mov	dptr,#_nrx
      001B16 E0               [24] 1127 	movx	a,@dptr
      001B17 FE               [12] 1128 	mov	r6,a
      001B18 B5 07 0E         [24] 1129 	cjne	a,ar7,00111$
                                   1130 ;	uartsrv.c:105: rxstate = Uidle;
      001B1B 90 F2 7A         [24] 1131 	mov	dptr,#_rxstate
      001B1E E4               [12] 1132 	clr	a
      001B1F F0               [24] 1133 	movx	@dptr,a
                                   1134 ;	uartsrv.c:106: flag |= Frxcall;
      001B20 90 F0 00         [24] 1135 	mov	dptr,#_flag
      001B23 E0               [24] 1136 	movx	a,@dptr
      001B24 FF               [12] 1137 	mov	r7,a
      001B25 74 01            [12] 1138 	mov	a,#0x01
      001B27 4F               [12] 1139 	orl	a,r7
      001B28 F0               [24] 1140 	movx	@dptr,a
      001B29                       1141 00111$:
      001B29 D0 D0            [24] 1142 	pop	psw
      001B2B D0 06            [24] 1143 	pop	ar6
      001B2D D0 07            [24] 1144 	pop	ar7
      001B2F D0 83            [24] 1145 	pop	dph
      001B31 D0 82            [24] 1146 	pop	dpl
      001B33 D0 E0            [24] 1147 	pop	acc
      001B35 32               [24] 1148 	reti
                                   1149 ;	eliminated unneeded push/pop b
                                   1150 ;------------------------------------------------------------
                                   1151 ;Allocation info for local variables in function 'srvtx'
                                   1152 ;------------------------------------------------------------
                                   1153 ;	uartsrv.c:111: srvtx()
                                   1154 ;	-----------------------------------------
                                   1155 ;	 function srvtx
                                   1156 ;	-----------------------------------------
      001B36                       1157 _srvtx:
                                   1158 ;	uartsrv.c:115: flag &= ~Ftxcall;
      001B36 90 F0 00         [24] 1159 	mov	dptr,#_flag
      001B39 E0               [24] 1160 	movx	a,@dptr
      001B3A FF               [12] 1161 	mov	r7,a
      001B3B 74 FD            [12] 1162 	mov	a,#0xFD
      001B3D 5F               [12] 1163 	anl	a,r7
      001B3E F0               [24] 1164 	movx	@dptr,a
                                   1165 ;	uartsrv.c:117: ntx = 1;
      001B3F 90 F2 79         [24] 1166 	mov	dptr,#_ntx
      001B42 74 01            [12] 1167 	mov	a,#0x01
      001B44 F0               [24] 1168 	movx	@dptr,a
                                   1169 ;	uartsrv.c:118: U0DBUF = txcall[0];
      001B45 90 F0 59         [24] 1170 	mov	dptr,#_txcall
      001B48 E0               [24] 1171 	movx	a,@dptr
      001B49 F5 C1            [12] 1172 	mov	_U0DBUF,a
                                   1173 ;	uartsrv.c:119: IEN2 |= IEN2_UTX0IE;
      001B4B 43 9A 04         [24] 1174 	orl	_IEN2,#0x04
      001B4E 22               [24] 1175 	ret
                                   1176 ;------------------------------------------------------------
                                   1177 ;Allocation info for local variables in function 'utx0intr'
                                   1178 ;------------------------------------------------------------
                                   1179 ;	uartsrv.c:123: utx0intr(void) __interrupt UTX0_VECTOR
                                   1180 ;	-----------------------------------------
                                   1181 ;	 function utx0intr
                                   1182 ;	-----------------------------------------
      001B4F                       1183 _utx0intr:
      001B4F C0 E0            [24] 1184 	push	acc
      001B51 C0 82            [24] 1185 	push	dpl
      001B53 C0 83            [24] 1186 	push	dph
      001B55 C0 07            [24] 1187 	push	ar7
      001B57 C0 06            [24] 1188 	push	ar6
      001B59 C0 D0            [24] 1189 	push	psw
      001B5B 75 D0 00         [24] 1190 	mov	psw,#0x00
                                   1191 ;	uartsrv.c:125: UTX0IF = 0;
      001B5E C2 E9            [12] 1192 	clr	_UTX0IF
                                   1193 ;	uartsrv.c:127: U0DBUF = txcall[ntx++];
      001B60 90 F2 79         [24] 1194 	mov	dptr,#_ntx
      001B63 E0               [24] 1195 	movx	a,@dptr
      001B64 FF               [12] 1196 	mov	r7,a
      001B65 E0               [24] 1197 	movx	a,@dptr
      001B66 24 01            [12] 1198 	add	a,#0x01
      001B68 F0               [24] 1199 	movx	@dptr,a
      001B69 EF               [12] 1200 	mov	a,r7
      001B6A 24 59            [12] 1201 	add	a,#_txcall
      001B6C F5 82            [12] 1202 	mov	dpl,a
      001B6E E4               [12] 1203 	clr	a
      001B6F 34 F0            [12] 1204 	addc	a,#(_txcall >> 8)
      001B71 F5 83            [12] 1205 	mov	dph,a
      001B73 E0               [24] 1206 	movx	a,@dptr
      001B74 F5 C1            [12] 1207 	mov	_U0DBUF,a
                                   1208 ;	uartsrv.c:128: if(ntx == txcall[0]){
      001B76 90 F0 59         [24] 1209 	mov	dptr,#_txcall
      001B79 E0               [24] 1210 	movx	a,@dptr
      001B7A FF               [12] 1211 	mov	r7,a
      001B7B 90 F2 79         [24] 1212 	mov	dptr,#_ntx
      001B7E E0               [24] 1213 	movx	a,@dptr
      001B7F FE               [12] 1214 	mov	r6,a
      001B80 B5 07 10         [24] 1215 	cjne	a,ar7,00103$
                                   1216 ;	uartsrv.c:129: IEN2 &= ~IEN2_UTX0IE;
      001B83 AF 9A            [24] 1217 	mov	r7,_IEN2
      001B85 74 FB            [12] 1218 	mov	a,#0xFB
      001B87 5F               [12] 1219 	anl	a,r7
      001B88 F5 9A            [12] 1220 	mov	_IEN2,a
                                   1221 ;	uartsrv.c:130: flag |= Ftxcall;
      001B8A 90 F0 00         [24] 1222 	mov	dptr,#_flag
      001B8D E0               [24] 1223 	movx	a,@dptr
      001B8E FF               [12] 1224 	mov	r7,a
      001B8F 74 02            [12] 1225 	mov	a,#0x02
      001B91 4F               [12] 1226 	orl	a,r7
      001B92 F0               [24] 1227 	movx	@dptr,a
      001B93                       1228 00103$:
      001B93 D0 D0            [24] 1229 	pop	psw
      001B95 D0 06            [24] 1230 	pop	ar6
      001B97 D0 07            [24] 1231 	pop	ar7
      001B99 D0 83            [24] 1232 	pop	dph
      001B9B D0 82            [24] 1233 	pop	dpl
      001B9D D0 E0            [24] 1234 	pop	acc
      001B9F 32               [24] 1235 	reti
                                   1236 ;	eliminated unneeded push/pop b
                                   1237 	.area CSEG    (CODE)
                                   1238 	.area CONST   (CODE)
                                   1239 	.area XINIT   (CODE)
                                   1240 	.area CABS    (ABS,CODE)
