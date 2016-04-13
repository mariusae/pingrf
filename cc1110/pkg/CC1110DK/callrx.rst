                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 21:19:18 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module callrx
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _callrx
                                     13 	.globl _panic
                                     14 	.globl _alarm
                                     15 	.globl _rfrx
                                     16 	.globl _rfidle
                                     17 	.globl _memcpy
                                     18 	.globl _MODE
                                     19 	.globl _RE
                                     20 	.globl _SLAVE
                                     21 	.globl _FE
                                     22 	.globl _ERR
                                     23 	.globl _RX_BYTE
                                     24 	.globl _TX_BYTE
                                     25 	.globl _ACTIVE
                                     26 	.globl _B_7
                                     27 	.globl _B_6
                                     28 	.globl _B_5
                                     29 	.globl _B_4
                                     30 	.globl _B_3
                                     31 	.globl _B_2
                                     32 	.globl _B_1
                                     33 	.globl _B_0
                                     34 	.globl _WDTIF
                                     35 	.globl _P1IF
                                     36 	.globl _UTX1IF
                                     37 	.globl _UTX0IF
                                     38 	.globl _P2IF
                                     39 	.globl _ACC_7
                                     40 	.globl _ACC_6
                                     41 	.globl _ACC_5
                                     42 	.globl _ACC_4
                                     43 	.globl _ACC_3
                                     44 	.globl _ACC_2
                                     45 	.globl _ACC_1
                                     46 	.globl _ACC_0
                                     47 	.globl _OVFIM
                                     48 	.globl _T4CH1IF
                                     49 	.globl _T4CH0IF
                                     50 	.globl _T4OVFIF
                                     51 	.globl _T3CH1IF
                                     52 	.globl _T3CH0IF
                                     53 	.globl _T3OVFIF
                                     54 	.globl _CY
                                     55 	.globl _AC
                                     56 	.globl _F0
                                     57 	.globl _RS1
                                     58 	.globl _RS0
                                     59 	.globl _OV
                                     60 	.globl _F1
                                     61 	.globl _P
                                     62 	.globl _STIF
                                     63 	.globl _P0IF
                                     64 	.globl _T4IF
                                     65 	.globl _T3IF
                                     66 	.globl _T2IF
                                     67 	.globl _T1IF
                                     68 	.globl _DMAIF
                                     69 	.globl _P0IE
                                     70 	.globl _T4IE
                                     71 	.globl _T3IE
                                     72 	.globl _T2IE
                                     73 	.globl _T1IE
                                     74 	.globl _DMAIE
                                     75 	.globl _EA
                                     76 	.globl _STIE
                                     77 	.globl _ENCIE
                                     78 	.globl _URX1IE
                                     79 	.globl _URX0IE
                                     80 	.globl _ADCIE
                                     81 	.globl _RFTXRXIE
                                     82 	.globl _P2_7
                                     83 	.globl _P2_6
                                     84 	.globl _P2_5
                                     85 	.globl _P2_4
                                     86 	.globl _P2_3
                                     87 	.globl _P2_2
                                     88 	.globl _P2_1
                                     89 	.globl _P2_0
                                     90 	.globl _ENCIF_1
                                     91 	.globl _ENCIF_0
                                     92 	.globl _P1_7
                                     93 	.globl _P1_6
                                     94 	.globl _P1_5
                                     95 	.globl _P1_4
                                     96 	.globl _P1_3
                                     97 	.globl _P1_2
                                     98 	.globl _P1_1
                                     99 	.globl _P1_0
                                    100 	.globl _URX1IF
                                    101 	.globl _ADCIF
                                    102 	.globl _URX0IF
                                    103 	.globl _IT1
                                    104 	.globl _RFTXRXIF
                                    105 	.globl _IT0
                                    106 	.globl _P0_7
                                    107 	.globl _P0_6
                                    108 	.globl _P0_5
                                    109 	.globl _P0_4
                                    110 	.globl _P0_3
                                    111 	.globl _P0_2
                                    112 	.globl _P0_1
                                    113 	.globl _P0_0
                                    114 	.globl _P2DIR
                                    115 	.globl _P1DIR
                                    116 	.globl _P0DIR
                                    117 	.globl _U1GCR
                                    118 	.globl _U1UCR
                                    119 	.globl _U1BAUD
                                    120 	.globl _U1DBUF
                                    121 	.globl _U1CSR
                                    122 	.globl _P2INP
                                    123 	.globl _P1INP
                                    124 	.globl _P2SEL
                                    125 	.globl _P1SEL
                                    126 	.globl _P0SEL
                                    127 	.globl _ADCCFG
                                    128 	.globl _PERCFG
                                    129 	.globl _B
                                    130 	.globl _T4CC1
                                    131 	.globl _T4CCTL1
                                    132 	.globl _T4CC0
                                    133 	.globl _T4CCTL0
                                    134 	.globl _T4CTL
                                    135 	.globl _T4CNT
                                    136 	.globl _RFIF
                                    137 	.globl _IRCON2
                                    138 	.globl _T1CCTL2
                                    139 	.globl _T1CCTL1
                                    140 	.globl _T1CCTL0
                                    141 	.globl _T1CTL
                                    142 	.globl _T1CNTH
                                    143 	.globl _T1CNTL
                                    144 	.globl _RFST
                                    145 	.globl _ACC
                                    146 	.globl _T1CC2H
                                    147 	.globl _T1CC2L
                                    148 	.globl _T1CC1H
                                    149 	.globl _T1CC1L
                                    150 	.globl _T1CC0H
                                    151 	.globl _T1CC0L
                                    152 	.globl _RFD
                                    153 	.globl _TIMIF
                                    154 	.globl _DMAREQ
                                    155 	.globl _DMAARM
                                    156 	.globl _DMA0CFGH
                                    157 	.globl _DMA0CFGL
                                    158 	.globl _DMA1CFGH
                                    159 	.globl _DMA1CFGL
                                    160 	.globl _DMAIRQ
                                    161 	.globl _PSW
                                    162 	.globl _T3CC1
                                    163 	.globl _T3CCTL1
                                    164 	.globl _T3CC0
                                    165 	.globl _T3CCTL0
                                    166 	.globl _T3CTL
                                    167 	.globl _T3CNT
                                    168 	.globl _WDCTL
                                    169 	.globl __SFRC8
                                    170 	.globl _MEMCTR
                                    171 	.globl _CLKCON
                                    172 	.globl _U0GCR
                                    173 	.globl _U0UCR
                                    174 	.globl __SFRC3
                                    175 	.globl _U0BAUD
                                    176 	.globl _U0DBUF
                                    177 	.globl _IRCON
                                    178 	.globl __SFRBF
                                    179 	.globl _SLEEP
                                    180 	.globl _RNDH
                                    181 	.globl _RNDL
                                    182 	.globl _ADCH
                                    183 	.globl _ADCL
                                    184 	.globl _IP1
                                    185 	.globl _IEN1
                                    186 	.globl __SFRB7
                                    187 	.globl _ADCCON3
                                    188 	.globl _ADCCON2
                                    189 	.globl _ADCCON1
                                    190 	.globl _ENCCS
                                    191 	.globl _ENCDO
                                    192 	.globl _ENCDI
                                    193 	.globl __SFRB0
                                    194 	.globl _FWDATA
                                    195 	.globl _FCTL
                                    196 	.globl _FADDRH
                                    197 	.globl _FADDRL
                                    198 	.globl _FWT
                                    199 	.globl __SFRAA
                                    200 	.globl _IP0
                                    201 	.globl _IEN0
                                    202 	.globl __SFRA7
                                    203 	.globl _WORTIME1
                                    204 	.globl _WORTIME0
                                    205 	.globl _WOREVT1
                                    206 	.globl _WOREVT0
                                    207 	.globl _WORCTRL
                                    208 	.globl _WORIRQ
                                    209 	.globl _P2
                                    210 	.globl __SFR9F
                                    211 	.globl _T2CTL
                                    212 	.globl _T2PR
                                    213 	.globl _T2CT
                                    214 	.globl _S1CON
                                    215 	.globl _IEN2
                                    216 	.globl __SFR99
                                    217 	.globl _S0CON
                                    218 	.globl __SFR97
                                    219 	.globl __SFR96
                                    220 	.globl __SFR95
                                    221 	.globl __SFR94
                                    222 	.globl __XPAGE
                                    223 	.globl _MPAGE
                                    224 	.globl _DPS
                                    225 	.globl _RFIM
                                    226 	.globl _P1
                                    227 	.globl _P0INP
                                    228 	.globl __SFR8E
                                    229 	.globl _P1IEN
                                    230 	.globl _PICTL
                                    231 	.globl _P2IFG
                                    232 	.globl _P1IFG
                                    233 	.globl _P0IFG
                                    234 	.globl _TCON
                                    235 	.globl _PCON
                                    236 	.globl _U0CSR
                                    237 	.globl _DPH1
                                    238 	.globl _DPL1
                                    239 	.globl _DPH0
                                    240 	.globl _DPL0
                                    241 	.globl _SP
                                    242 	.globl _P0
                                    243 	.globl _callrx_PARM_4
                                    244 	.globl _callrx_PARM_3
                                    245 	.globl _callrx_PARM_2
                                    246 	.globl _X_P2DIR
                                    247 	.globl _X_P1DIR
                                    248 	.globl _X_P0DIR
                                    249 	.globl _X_U1GCR
                                    250 	.globl _X_U1UCR
                                    251 	.globl _X_U1BAUD
                                    252 	.globl _X_U1DBUF
                                    253 	.globl _X_U1CSR
                                    254 	.globl _X_P2INP
                                    255 	.globl _X_P1INP
                                    256 	.globl _X_P2SEL
                                    257 	.globl _X_P1SEL
                                    258 	.globl _X_P0SEL
                                    259 	.globl _X_ADCCFG
                                    260 	.globl _X_PERCFG
                                    261 	.globl __NA_B
                                    262 	.globl _X_T4CC1
                                    263 	.globl _X_T4CCTL1
                                    264 	.globl _X_T4CC0
                                    265 	.globl _X_T4CCTL0
                                    266 	.globl _X_T4CTL
                                    267 	.globl _X_T4CNT
                                    268 	.globl _X_RFIF
                                    269 	.globl __NA_IRCON2
                                    270 	.globl _X_T1CCTL2
                                    271 	.globl _X_T1CCTL1
                                    272 	.globl _X_T1CCTL0
                                    273 	.globl _X_T1CTL
                                    274 	.globl _X_T1CNTH
                                    275 	.globl _X_T1CNTL
                                    276 	.globl _X_RFST
                                    277 	.globl __NA_ACC
                                    278 	.globl _X_T1CC2H
                                    279 	.globl _X_T1CC2L
                                    280 	.globl _X_T1CC1H
                                    281 	.globl _X_T1CC1L
                                    282 	.globl _X_T1CC0H
                                    283 	.globl _X_T1CC0L
                                    284 	.globl _X_RFD
                                    285 	.globl _X_TIMIF
                                    286 	.globl _X_DMAREQ
                                    287 	.globl _X_DMAARM
                                    288 	.globl _X_DMA0CFGH
                                    289 	.globl _X_DMA0CFGL
                                    290 	.globl _X_DMA1CFGH
                                    291 	.globl _X_DMA1CFGL
                                    292 	.globl _X_DMAIRQ
                                    293 	.globl __NA_PSW
                                    294 	.globl _X_T3CC1
                                    295 	.globl _X_T3CCTL1
                                    296 	.globl _X_T3CC0
                                    297 	.globl _X_T3CCTL0
                                    298 	.globl _X_T3CTL
                                    299 	.globl _X_T3CNT
                                    300 	.globl _X_WDCTL
                                    301 	.globl __X_SFRC8
                                    302 	.globl _X_MEMCTR
                                    303 	.globl _X_CLKCON
                                    304 	.globl _X_U0GCR
                                    305 	.globl _X_U0UCR
                                    306 	.globl __X_SFRC3
                                    307 	.globl _X_U0BAUD
                                    308 	.globl _X_U0DBUF
                                    309 	.globl __NA_IRCON
                                    310 	.globl __X_SFRBF
                                    311 	.globl _X_SLEEP
                                    312 	.globl _X_RNDH
                                    313 	.globl _X_RNDL
                                    314 	.globl _X_ADCH
                                    315 	.globl _X_ADCL
                                    316 	.globl __NA_IP1
                                    317 	.globl __NA_IEN1
                                    318 	.globl __X_SFRB7
                                    319 	.globl _X_ADCCON3
                                    320 	.globl _X_ADCCON2
                                    321 	.globl _X_ADCCON1
                                    322 	.globl _X_ENCCS
                                    323 	.globl _X_ENCDO
                                    324 	.globl _X_ENCDI
                                    325 	.globl __X_SFRB0
                                    326 	.globl _X_FWDATA
                                    327 	.globl _X_FCTL
                                    328 	.globl _X_FADDRH
                                    329 	.globl _X_FADDRL
                                    330 	.globl _X_FWT
                                    331 	.globl __X_SFRAA
                                    332 	.globl __NA_IP0
                                    333 	.globl __NA_IEN0
                                    334 	.globl __X_SFRA7
                                    335 	.globl _X_WORTIME1
                                    336 	.globl _X_WORTIME0
                                    337 	.globl _X_WOREVT1
                                    338 	.globl _X_WOREVT0
                                    339 	.globl _X_WORCTRL
                                    340 	.globl _X_WORIRQ
                                    341 	.globl __NA_P2
                                    342 	.globl __X_SFR9F
                                    343 	.globl _X_T2CTL
                                    344 	.globl _X_T2PR
                                    345 	.globl _X_T2CT
                                    346 	.globl __NA_S1CON
                                    347 	.globl __NA_IEN2
                                    348 	.globl __X_SFR99
                                    349 	.globl __NA_S0CON
                                    350 	.globl __X_SFR97
                                    351 	.globl __X_SFR96
                                    352 	.globl __X_SFR95
                                    353 	.globl __X_SFR94
                                    354 	.globl _X_MPAGE
                                    355 	.globl __NA_DPS
                                    356 	.globl _X_RFIM
                                    357 	.globl __NA_P1
                                    358 	.globl _X_P0INP
                                    359 	.globl __X_SFR8E
                                    360 	.globl _X_P1IEN
                                    361 	.globl _X_PICTL
                                    362 	.globl _X_P2IFG
                                    363 	.globl _X_P1IFG
                                    364 	.globl _X_P0IFG
                                    365 	.globl __NA_TCON
                                    366 	.globl __NA_PCON
                                    367 	.globl _X_U0CSR
                                    368 	.globl __NA_DPH1
                                    369 	.globl __NA_DPL1
                                    370 	.globl __NA_DPH0
                                    371 	.globl __NA_DPL0
                                    372 	.globl __NA_SP
                                    373 	.globl __NA_P0
                                    374 	.globl _I2SCLKF2
                                    375 	.globl _I2SCLKF1
                                    376 	.globl _I2SCLKF0
                                    377 	.globl _I2SSTAT
                                    378 	.globl _I2SWCNT
                                    379 	.globl _I2SDATH
                                    380 	.globl _I2SDATL
                                    381 	.globl _I2SCFG1
                                    382 	.globl _I2SCFG0
                                    383 	.globl _VCO_VC_DAC
                                    384 	.globl _PKTSTATUS
                                    385 	.globl _MARCSTATE
                                    386 	.globl _RSSI
                                    387 	.globl _LQI
                                    388 	.globl _FREQEST
                                    389 	.globl _VERSION
                                    390 	.globl _PARTNUM
                                    391 	.globl __XREGDF35
                                    392 	.globl __XREGDF34
                                    393 	.globl __XREGDF33
                                    394 	.globl __XREGDF32
                                    395 	.globl _IOCFG0
                                    396 	.globl _IOCFG1
                                    397 	.globl _IOCFG2
                                    398 	.globl _PA_TABLE0
                                    399 	.globl _PA_TABLE1
                                    400 	.globl _PA_TABLE2
                                    401 	.globl _PA_TABLE3
                                    402 	.globl _PA_TABLE4
                                    403 	.globl _PA_TABLE5
                                    404 	.globl _PA_TABLE6
                                    405 	.globl _PA_TABLE7
                                    406 	.globl __XREGDF26
                                    407 	.globl _TEST0
                                    408 	.globl _TEST1
                                    409 	.globl _TEST2
                                    410 	.globl __XREGDF22
                                    411 	.globl __XREGDF21
                                    412 	.globl __XREGDF20
                                    413 	.globl _FSCAL0
                                    414 	.globl _FSCAL1
                                    415 	.globl _FSCAL2
                                    416 	.globl _FSCAL3
                                    417 	.globl _FREND0
                                    418 	.globl _FREND1
                                    419 	.globl _AGCCTRL0
                                    420 	.globl _AGCCTRL1
                                    421 	.globl _AGCCTRL2
                                    422 	.globl _BSCFG
                                    423 	.globl _FOCCFG
                                    424 	.globl _MCSM0
                                    425 	.globl _MCSM1
                                    426 	.globl _MCSM2
                                    427 	.globl _DEVIATN
                                    428 	.globl _MDMCFG0
                                    429 	.globl _MDMCFG1
                                    430 	.globl _MDMCFG2
                                    431 	.globl _MDMCFG3
                                    432 	.globl _MDMCFG4
                                    433 	.globl _FREQ0
                                    434 	.globl _FREQ1
                                    435 	.globl _FREQ2
                                    436 	.globl _FSCTRL0
                                    437 	.globl _FSCTRL1
                                    438 	.globl _CHANNR
                                    439 	.globl _ADDR
                                    440 	.globl _PKTCTRL0
                                    441 	.globl _PKTCTRL1
                                    442 	.globl _PKTLEN
                                    443 	.globl _SYNC0
                                    444 	.globl _SYNC1
                                    445 	.globl _MDMCTRL0H
                                    446 ;--------------------------------------------------------
                                    447 ; special function registers
                                    448 ;--------------------------------------------------------
                                    449 	.area RSEG    (ABS,DATA)
      000000                        450 	.org 0x0000
                           000080   451 _P0	=	0x0080
                           000081   452 _SP	=	0x0081
                           000082   453 _DPL0	=	0x0082
                           000083   454 _DPH0	=	0x0083
                           000084   455 _DPL1	=	0x0084
                           000085   456 _DPH1	=	0x0085
                           000086   457 _U0CSR	=	0x0086
                           000087   458 _PCON	=	0x0087
                           000088   459 _TCON	=	0x0088
                           000089   460 _P0IFG	=	0x0089
                           00008A   461 _P1IFG	=	0x008a
                           00008B   462 _P2IFG	=	0x008b
                           00008C   463 _PICTL	=	0x008c
                           00008D   464 _P1IEN	=	0x008d
                           00008E   465 __SFR8E	=	0x008e
                           00008F   466 _P0INP	=	0x008f
                           000090   467 _P1	=	0x0090
                           000091   468 _RFIM	=	0x0091
                           000092   469 _DPS	=	0x0092
                           000093   470 _MPAGE	=	0x0093
                           000093   471 __XPAGE	=	0x0093
                           000094   472 __SFR94	=	0x0094
                           000095   473 __SFR95	=	0x0095
                           000096   474 __SFR96	=	0x0096
                           000097   475 __SFR97	=	0x0097
                           000098   476 _S0CON	=	0x0098
                           000099   477 __SFR99	=	0x0099
                           00009A   478 _IEN2	=	0x009a
                           00009B   479 _S1CON	=	0x009b
                           00009C   480 _T2CT	=	0x009c
                           00009D   481 _T2PR	=	0x009d
                           00009E   482 _T2CTL	=	0x009e
                           00009F   483 __SFR9F	=	0x009f
                           0000A0   484 _P2	=	0x00a0
                           0000A1   485 _WORIRQ	=	0x00a1
                           0000A2   486 _WORCTRL	=	0x00a2
                           0000A3   487 _WOREVT0	=	0x00a3
                           0000A4   488 _WOREVT1	=	0x00a4
                           0000A5   489 _WORTIME0	=	0x00a5
                           0000A6   490 _WORTIME1	=	0x00a6
                           0000A7   491 __SFRA7	=	0x00a7
                           0000A8   492 _IEN0	=	0x00a8
                           0000A9   493 _IP0	=	0x00a9
                           0000AA   494 __SFRAA	=	0x00aa
                           0000AB   495 _FWT	=	0x00ab
                           0000AC   496 _FADDRL	=	0x00ac
                           0000AD   497 _FADDRH	=	0x00ad
                           0000AE   498 _FCTL	=	0x00ae
                           0000AF   499 _FWDATA	=	0x00af
                           0000B0   500 __SFRB0	=	0x00b0
                           0000B1   501 _ENCDI	=	0x00b1
                           0000B2   502 _ENCDO	=	0x00b2
                           0000B3   503 _ENCCS	=	0x00b3
                           0000B4   504 _ADCCON1	=	0x00b4
                           0000B5   505 _ADCCON2	=	0x00b5
                           0000B6   506 _ADCCON3	=	0x00b6
                           0000B7   507 __SFRB7	=	0x00b7
                           0000B8   508 _IEN1	=	0x00b8
                           0000B9   509 _IP1	=	0x00b9
                           0000BA   510 _ADCL	=	0x00ba
                           0000BB   511 _ADCH	=	0x00bb
                           0000BC   512 _RNDL	=	0x00bc
                           0000BD   513 _RNDH	=	0x00bd
                           0000BE   514 _SLEEP	=	0x00be
                           0000BF   515 __SFRBF	=	0x00bf
                           0000C0   516 _IRCON	=	0x00c0
                           0000C1   517 _U0DBUF	=	0x00c1
                           0000C2   518 _U0BAUD	=	0x00c2
                           0000C3   519 __SFRC3	=	0x00c3
                           0000C4   520 _U0UCR	=	0x00c4
                           0000C5   521 _U0GCR	=	0x00c5
                           0000C6   522 _CLKCON	=	0x00c6
                           0000C7   523 _MEMCTR	=	0x00c7
                           0000C8   524 __SFRC8	=	0x00c8
                           0000C9   525 _WDCTL	=	0x00c9
                           0000CA   526 _T3CNT	=	0x00ca
                           0000CB   527 _T3CTL	=	0x00cb
                           0000CC   528 _T3CCTL0	=	0x00cc
                           0000CD   529 _T3CC0	=	0x00cd
                           0000CE   530 _T3CCTL1	=	0x00ce
                           0000CF   531 _T3CC1	=	0x00cf
                           0000D0   532 _PSW	=	0x00d0
                           0000D1   533 _DMAIRQ	=	0x00d1
                           0000D2   534 _DMA1CFGL	=	0x00d2
                           0000D3   535 _DMA1CFGH	=	0x00d3
                           0000D4   536 _DMA0CFGL	=	0x00d4
                           0000D5   537 _DMA0CFGH	=	0x00d5
                           0000D6   538 _DMAARM	=	0x00d6
                           0000D7   539 _DMAREQ	=	0x00d7
                           0000D8   540 _TIMIF	=	0x00d8
                           0000D9   541 _RFD	=	0x00d9
                           0000DA   542 _T1CC0L	=	0x00da
                           0000DB   543 _T1CC0H	=	0x00db
                           0000DC   544 _T1CC1L	=	0x00dc
                           0000DD   545 _T1CC1H	=	0x00dd
                           0000DE   546 _T1CC2L	=	0x00de
                           0000DF   547 _T1CC2H	=	0x00df
                           0000E0   548 _ACC	=	0x00e0
                           0000E1   549 _RFST	=	0x00e1
                           0000E2   550 _T1CNTL	=	0x00e2
                           0000E3   551 _T1CNTH	=	0x00e3
                           0000E4   552 _T1CTL	=	0x00e4
                           0000E5   553 _T1CCTL0	=	0x00e5
                           0000E6   554 _T1CCTL1	=	0x00e6
                           0000E7   555 _T1CCTL2	=	0x00e7
                           0000E8   556 _IRCON2	=	0x00e8
                           0000E9   557 _RFIF	=	0x00e9
                           0000EA   558 _T4CNT	=	0x00ea
                           0000EB   559 _T4CTL	=	0x00eb
                           0000EC   560 _T4CCTL0	=	0x00ec
                           0000ED   561 _T4CC0	=	0x00ed
                           0000EE   562 _T4CCTL1	=	0x00ee
                           0000EF   563 _T4CC1	=	0x00ef
                           0000F0   564 _B	=	0x00f0
                           0000F1   565 _PERCFG	=	0x00f1
                           0000F2   566 _ADCCFG	=	0x00f2
                           0000F3   567 _P0SEL	=	0x00f3
                           0000F4   568 _P1SEL	=	0x00f4
                           0000F5   569 _P2SEL	=	0x00f5
                           0000F6   570 _P1INP	=	0x00f6
                           0000F7   571 _P2INP	=	0x00f7
                           0000F8   572 _U1CSR	=	0x00f8
                           0000F9   573 _U1DBUF	=	0x00f9
                           0000FA   574 _U1BAUD	=	0x00fa
                           0000FB   575 _U1UCR	=	0x00fb
                           0000FC   576 _U1GCR	=	0x00fc
                           0000FD   577 _P0DIR	=	0x00fd
                           0000FE   578 _P1DIR	=	0x00fe
                           0000FF   579 _P2DIR	=	0x00ff
                                    580 ;--------------------------------------------------------
                                    581 ; special function bits
                                    582 ;--------------------------------------------------------
                                    583 	.area RSEG    (ABS,DATA)
      000000                        584 	.org 0x0000
                           000080   585 _P0_0	=	0x0080
                           000081   586 _P0_1	=	0x0081
                           000082   587 _P0_2	=	0x0082
                           000083   588 _P0_3	=	0x0083
                           000084   589 _P0_4	=	0x0084
                           000085   590 _P0_5	=	0x0085
                           000086   591 _P0_6	=	0x0086
                           000087   592 _P0_7	=	0x0087
                           000088   593 _IT0	=	0x0088
                           000089   594 _RFTXRXIF	=	0x0089
                           00008A   595 _IT1	=	0x008a
                           00008B   596 _URX0IF	=	0x008b
                           00008D   597 _ADCIF	=	0x008d
                           00008F   598 _URX1IF	=	0x008f
                           000090   599 _P1_0	=	0x0090
                           000091   600 _P1_1	=	0x0091
                           000092   601 _P1_2	=	0x0092
                           000093   602 _P1_3	=	0x0093
                           000094   603 _P1_4	=	0x0094
                           000095   604 _P1_5	=	0x0095
                           000096   605 _P1_6	=	0x0096
                           000097   606 _P1_7	=	0x0097
                           000098   607 _ENCIF_0	=	0x0098
                           000099   608 _ENCIF_1	=	0x0099
                           0000A0   609 _P2_0	=	0x00a0
                           0000A1   610 _P2_1	=	0x00a1
                           0000A2   611 _P2_2	=	0x00a2
                           0000A3   612 _P2_3	=	0x00a3
                           0000A4   613 _P2_4	=	0x00a4
                           0000A5   614 _P2_5	=	0x00a5
                           0000A6   615 _P2_6	=	0x00a6
                           0000A7   616 _P2_7	=	0x00a7
                           0000A8   617 _RFTXRXIE	=	0x00a8
                           0000A9   618 _ADCIE	=	0x00a9
                           0000AA   619 _URX0IE	=	0x00aa
                           0000AB   620 _URX1IE	=	0x00ab
                           0000AC   621 _ENCIE	=	0x00ac
                           0000AD   622 _STIE	=	0x00ad
                           0000AF   623 _EA	=	0x00af
                           0000B8   624 _DMAIE	=	0x00b8
                           0000B9   625 _T1IE	=	0x00b9
                           0000BA   626 _T2IE	=	0x00ba
                           0000BB   627 _T3IE	=	0x00bb
                           0000BC   628 _T4IE	=	0x00bc
                           0000BD   629 _P0IE	=	0x00bd
                           0000C0   630 _DMAIF	=	0x00c0
                           0000C1   631 _T1IF	=	0x00c1
                           0000C2   632 _T2IF	=	0x00c2
                           0000C3   633 _T3IF	=	0x00c3
                           0000C4   634 _T4IF	=	0x00c4
                           0000C5   635 _P0IF	=	0x00c5
                           0000C7   636 _STIF	=	0x00c7
                           0000D0   637 _P	=	0x00d0
                           0000D1   638 _F1	=	0x00d1
                           0000D2   639 _OV	=	0x00d2
                           0000D3   640 _RS0	=	0x00d3
                           0000D4   641 _RS1	=	0x00d4
                           0000D5   642 _F0	=	0x00d5
                           0000D6   643 _AC	=	0x00d6
                           0000D7   644 _CY	=	0x00d7
                           0000D8   645 _T3OVFIF	=	0x00d8
                           0000D9   646 _T3CH0IF	=	0x00d9
                           0000DA   647 _T3CH1IF	=	0x00da
                           0000DB   648 _T4OVFIF	=	0x00db
                           0000DC   649 _T4CH0IF	=	0x00dc
                           0000DD   650 _T4CH1IF	=	0x00dd
                           0000DE   651 _OVFIM	=	0x00de
                           0000E0   652 _ACC_0	=	0x00e0
                           0000E1   653 _ACC_1	=	0x00e1
                           0000E2   654 _ACC_2	=	0x00e2
                           0000E3   655 _ACC_3	=	0x00e3
                           0000E4   656 _ACC_4	=	0x00e4
                           0000E5   657 _ACC_5	=	0x00e5
                           0000E6   658 _ACC_6	=	0x00e6
                           0000E7   659 _ACC_7	=	0x00e7
                           0000E8   660 _P2IF	=	0x00e8
                           0000E9   661 _UTX0IF	=	0x00e9
                           0000EA   662 _UTX1IF	=	0x00ea
                           0000EB   663 _P1IF	=	0x00eb
                           0000EC   664 _WDTIF	=	0x00ec
                           0000F0   665 _B_0	=	0x00f0
                           0000F1   666 _B_1	=	0x00f1
                           0000F2   667 _B_2	=	0x00f2
                           0000F3   668 _B_3	=	0x00f3
                           0000F4   669 _B_4	=	0x00f4
                           0000F5   670 _B_5	=	0x00f5
                           0000F6   671 _B_6	=	0x00f6
                           0000F7   672 _B_7	=	0x00f7
                           0000F8   673 _ACTIVE	=	0x00f8
                           0000F9   674 _TX_BYTE	=	0x00f9
                           0000FA   675 _RX_BYTE	=	0x00fa
                           0000FB   676 _ERR	=	0x00fb
                           0000FC   677 _FE	=	0x00fc
                           0000FD   678 _SLAVE	=	0x00fd
                           0000FE   679 _RE	=	0x00fe
                           0000FF   680 _MODE	=	0x00ff
                                    681 ;--------------------------------------------------------
                                    682 ; overlayable register banks
                                    683 ;--------------------------------------------------------
                                    684 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        685 	.ds 8
                                    686 ;--------------------------------------------------------
                                    687 ; internal ram data
                                    688 ;--------------------------------------------------------
                                    689 	.area DSEG    (DATA)
      00000E                        690 _callrx_sloc0_1_0:
      00000E                        691 	.ds 3
                                    692 ;--------------------------------------------------------
                                    693 ; overlayable items in internal ram 
                                    694 ;--------------------------------------------------------
                                    695 ;--------------------------------------------------------
                                    696 ; indirectly addressable internal ram data
                                    697 ;--------------------------------------------------------
                                    698 	.area ISEG    (DATA)
                                    699 ;--------------------------------------------------------
                                    700 ; absolute internal ram data
                                    701 ;--------------------------------------------------------
                                    702 	.area IABS    (ABS,DATA)
                                    703 	.area IABS    (ABS,DATA)
                                    704 ;--------------------------------------------------------
                                    705 ; bit data
                                    706 ;--------------------------------------------------------
                                    707 	.area BSEG    (BIT)
                                    708 ;--------------------------------------------------------
                                    709 ; paged external ram data
                                    710 ;--------------------------------------------------------
                                    711 	.area PSEG    (PAG,XDATA)
                                    712 ;--------------------------------------------------------
                                    713 ; external ram data
                                    714 ;--------------------------------------------------------
                                    715 	.area XSEG    (XDATA)
                           00DF02   716 _MDMCTRL0H	=	0xdf02
                           00DF00   717 _SYNC1	=	0xdf00
                           00DF01   718 _SYNC0	=	0xdf01
                           00DF02   719 _PKTLEN	=	0xdf02
                           00DF03   720 _PKTCTRL1	=	0xdf03
                           00DF04   721 _PKTCTRL0	=	0xdf04
                           00DF05   722 _ADDR	=	0xdf05
                           00DF06   723 _CHANNR	=	0xdf06
                           00DF07   724 _FSCTRL1	=	0xdf07
                           00DF08   725 _FSCTRL0	=	0xdf08
                           00DF09   726 _FREQ2	=	0xdf09
                           00DF0A   727 _FREQ1	=	0xdf0a
                           00DF0B   728 _FREQ0	=	0xdf0b
                           00DF0C   729 _MDMCFG4	=	0xdf0c
                           00DF0D   730 _MDMCFG3	=	0xdf0d
                           00DF0E   731 _MDMCFG2	=	0xdf0e
                           00DF0F   732 _MDMCFG1	=	0xdf0f
                           00DF10   733 _MDMCFG0	=	0xdf10
                           00DF11   734 _DEVIATN	=	0xdf11
                           00DF12   735 _MCSM2	=	0xdf12
                           00DF13   736 _MCSM1	=	0xdf13
                           00DF14   737 _MCSM0	=	0xdf14
                           00DF15   738 _FOCCFG	=	0xdf15
                           00DF16   739 _BSCFG	=	0xdf16
                           00DF17   740 _AGCCTRL2	=	0xdf17
                           00DF18   741 _AGCCTRL1	=	0xdf18
                           00DF19   742 _AGCCTRL0	=	0xdf19
                           00DF1A   743 _FREND1	=	0xdf1a
                           00DF1B   744 _FREND0	=	0xdf1b
                           00DF1C   745 _FSCAL3	=	0xdf1c
                           00DF1D   746 _FSCAL2	=	0xdf1d
                           00DF1E   747 _FSCAL1	=	0xdf1e
                           00DF1F   748 _FSCAL0	=	0xdf1f
                           00DF20   749 __XREGDF20	=	0xdf20
                           00DF21   750 __XREGDF21	=	0xdf21
                           00DF22   751 __XREGDF22	=	0xdf22
                           00DF23   752 _TEST2	=	0xdf23
                           00DF24   753 _TEST1	=	0xdf24
                           00DF25   754 _TEST0	=	0xdf25
                           00DF26   755 __XREGDF26	=	0xdf26
                           00DF27   756 _PA_TABLE7	=	0xdf27
                           00DF28   757 _PA_TABLE6	=	0xdf28
                           00DF29   758 _PA_TABLE5	=	0xdf29
                           00DF2A   759 _PA_TABLE4	=	0xdf2a
                           00DF2B   760 _PA_TABLE3	=	0xdf2b
                           00DF2C   761 _PA_TABLE2	=	0xdf2c
                           00DF2D   762 _PA_TABLE1	=	0xdf2d
                           00DF2E   763 _PA_TABLE0	=	0xdf2e
                           00DF2F   764 _IOCFG2	=	0xdf2f
                           00DF30   765 _IOCFG1	=	0xdf30
                           00DF31   766 _IOCFG0	=	0xdf31
                           00DF32   767 __XREGDF32	=	0xdf32
                           00DF33   768 __XREGDF33	=	0xdf33
                           00DF34   769 __XREGDF34	=	0xdf34
                           00DF35   770 __XREGDF35	=	0xdf35
                           00DF36   771 _PARTNUM	=	0xdf36
                           00DF37   772 _VERSION	=	0xdf37
                           00DF38   773 _FREQEST	=	0xdf38
                           00DF39   774 _LQI	=	0xdf39
                           00DF3A   775 _RSSI	=	0xdf3a
                           00DF3B   776 _MARCSTATE	=	0xdf3b
                           00DF3C   777 _PKTSTATUS	=	0xdf3c
                           00DF3D   778 _VCO_VC_DAC	=	0xdf3d
                           00DF40   779 _I2SCFG0	=	0xdf40
                           00DF41   780 _I2SCFG1	=	0xdf41
                           00DF42   781 _I2SDATL	=	0xdf42
                           00DF43   782 _I2SDATH	=	0xdf43
                           00DF44   783 _I2SWCNT	=	0xdf44
                           00DF45   784 _I2SSTAT	=	0xdf45
                           00DF46   785 _I2SCLKF0	=	0xdf46
                           00DF47   786 _I2SCLKF1	=	0xdf47
                           00DF48   787 _I2SCLKF2	=	0xdf48
                           00DF80   788 __NA_P0	=	0xdf80
                           00DF81   789 __NA_SP	=	0xdf81
                           00DF82   790 __NA_DPL0	=	0xdf82
                           00DF83   791 __NA_DPH0	=	0xdf83
                           00DF84   792 __NA_DPL1	=	0xdf84
                           00DF85   793 __NA_DPH1	=	0xdf85
                           00DF86   794 _X_U0CSR	=	0xdf86
                           00DF87   795 __NA_PCON	=	0xdf87
                           00DF88   796 __NA_TCON	=	0xdf88
                           00DF89   797 _X_P0IFG	=	0xdf89
                           00DF8A   798 _X_P1IFG	=	0xdf8a
                           00DF8B   799 _X_P2IFG	=	0xdf8b
                           00DF8C   800 _X_PICTL	=	0xdf8c
                           00DF8D   801 _X_P1IEN	=	0xdf8d
                           00DF8E   802 __X_SFR8E	=	0xdf8e
                           00DF8F   803 _X_P0INP	=	0xdf8f
                           00DF90   804 __NA_P1	=	0xdf90
                           00DF91   805 _X_RFIM	=	0xdf91
                           00DF92   806 __NA_DPS	=	0xdf92
                           00DF93   807 _X_MPAGE	=	0xdf93
                           00DF94   808 __X_SFR94	=	0xdf94
                           00DF95   809 __X_SFR95	=	0xdf95
                           00DF96   810 __X_SFR96	=	0xdf96
                           00DF97   811 __X_SFR97	=	0xdf97
                           00DF98   812 __NA_S0CON	=	0xdf98
                           00DF99   813 __X_SFR99	=	0xdf99
                           00DF9A   814 __NA_IEN2	=	0xdf9a
                           00DF9B   815 __NA_S1CON	=	0xdf9b
                           00DF9C   816 _X_T2CT	=	0xdf9c
                           00DF9D   817 _X_T2PR	=	0xdf9d
                           00DF9E   818 _X_T2CTL	=	0xdf9e
                           00DF9F   819 __X_SFR9F	=	0xdf9f
                           00DFA0   820 __NA_P2	=	0xdfa0
                           00DFA1   821 _X_WORIRQ	=	0xdfa1
                           00DFA2   822 _X_WORCTRL	=	0xdfa2
                           00DFA3   823 _X_WOREVT0	=	0xdfa3
                           00DFA4   824 _X_WOREVT1	=	0xdfa4
                           00DFA5   825 _X_WORTIME0	=	0xdfa5
                           00DFA6   826 _X_WORTIME1	=	0xdfa6
                           00DFA7   827 __X_SFRA7	=	0xdfa7
                           00DFA8   828 __NA_IEN0	=	0xdfa8
                           00DFA9   829 __NA_IP0	=	0xdfa9
                           00DFAA   830 __X_SFRAA	=	0xdfaa
                           00DFAB   831 _X_FWT	=	0xdfab
                           00DFAC   832 _X_FADDRL	=	0xdfac
                           00DFAD   833 _X_FADDRH	=	0xdfad
                           00DFAE   834 _X_FCTL	=	0xdfae
                           00DFAF   835 _X_FWDATA	=	0xdfaf
                           00DFB0   836 __X_SFRB0	=	0xdfb0
                           00DFB1   837 _X_ENCDI	=	0xdfb1
                           00DFB2   838 _X_ENCDO	=	0xdfb2
                           00DFB3   839 _X_ENCCS	=	0xdfb3
                           00DFB4   840 _X_ADCCON1	=	0xdfb4
                           00DFB5   841 _X_ADCCON2	=	0xdfb5
                           00DFB6   842 _X_ADCCON3	=	0xdfb6
                           00DFB7   843 __X_SFRB7	=	0xdfb7
                           00DFB8   844 __NA_IEN1	=	0xdfb8
                           00DFB9   845 __NA_IP1	=	0xdfb9
                           00DFBA   846 _X_ADCL	=	0xdfba
                           00DFBB   847 _X_ADCH	=	0xdfbb
                           00DFBC   848 _X_RNDL	=	0xdfbc
                           00DFBD   849 _X_RNDH	=	0xdfbd
                           00DFBE   850 _X_SLEEP	=	0xdfbe
                           00DFBF   851 __X_SFRBF	=	0xdfbf
                           00DFC0   852 __NA_IRCON	=	0xdfc0
                           00DFC1   853 _X_U0DBUF	=	0xdfc1
                           00DFC2   854 _X_U0BAUD	=	0xdfc2
                           00DFC3   855 __X_SFRC3	=	0xdfc3
                           00DFC4   856 _X_U0UCR	=	0xdfc4
                           00DFC5   857 _X_U0GCR	=	0xdfc5
                           00DFC6   858 _X_CLKCON	=	0xdfc6
                           00DFC7   859 _X_MEMCTR	=	0xdfc7
                           00DFC8   860 __X_SFRC8	=	0xdfc8
                           00DFC9   861 _X_WDCTL	=	0xdfc9
                           00DFCA   862 _X_T3CNT	=	0xdfca
                           00DFCB   863 _X_T3CTL	=	0xdfcb
                           00DFCC   864 _X_T3CCTL0	=	0xdfcc
                           00DFCD   865 _X_T3CC0	=	0xdfcd
                           00DFCE   866 _X_T3CCTL1	=	0xdfce
                           00DFCF   867 _X_T3CC1	=	0xdfcf
                           00DFD0   868 __NA_PSW	=	0xdfd0
                           00DFD1   869 _X_DMAIRQ	=	0xdfd1
                           00DFD2   870 _X_DMA1CFGL	=	0xdfd2
                           00DFD3   871 _X_DMA1CFGH	=	0xdfd3
                           00DFD4   872 _X_DMA0CFGL	=	0xdfd4
                           00DFD5   873 _X_DMA0CFGH	=	0xdfd5
                           00DFD6   874 _X_DMAARM	=	0xdfd6
                           00DFD7   875 _X_DMAREQ	=	0xdfd7
                           00DFD8   876 _X_TIMIF	=	0xdfd8
                           00DFD9   877 _X_RFD	=	0xdfd9
                           00DFDA   878 _X_T1CC0L	=	0xdfda
                           00DFDB   879 _X_T1CC0H	=	0xdfdb
                           00DFDC   880 _X_T1CC1L	=	0xdfdc
                           00DFDD   881 _X_T1CC1H	=	0xdfdd
                           00DFDE   882 _X_T1CC2L	=	0xdfde
                           00DFDF   883 _X_T1CC2H	=	0xdfdf
                           00DFE0   884 __NA_ACC	=	0xdfe0
                           00DFE1   885 _X_RFST	=	0xdfe1
                           00DFE2   886 _X_T1CNTL	=	0xdfe2
                           00DFE3   887 _X_T1CNTH	=	0xdfe3
                           00DFE4   888 _X_T1CTL	=	0xdfe4
                           00DFE5   889 _X_T1CCTL0	=	0xdfe5
                           00DFE6   890 _X_T1CCTL1	=	0xdfe6
                           00DFE7   891 _X_T1CCTL2	=	0xdfe7
                           00DFE8   892 __NA_IRCON2	=	0xdfe8
                           00DFE9   893 _X_RFIF	=	0xdfe9
                           00DFEA   894 _X_T4CNT	=	0xdfea
                           00DFEB   895 _X_T4CTL	=	0xdfeb
                           00DFEC   896 _X_T4CCTL0	=	0xdfec
                           00DFED   897 _X_T4CC0	=	0xdfed
                           00DFEE   898 _X_T4CCTL1	=	0xdfee
                           00DFEF   899 _X_T4CC1	=	0xdfef
                           00DFF0   900 __NA_B	=	0xdff0
                           00DFF1   901 _X_PERCFG	=	0xdff1
                           00DFF2   902 _X_ADCCFG	=	0xdff2
                           00DFF3   903 _X_P0SEL	=	0xdff3
                           00DFF4   904 _X_P1SEL	=	0xdff4
                           00DFF5   905 _X_P2SEL	=	0xdff5
                           00DFF6   906 _X_P1INP	=	0xdff6
                           00DFF7   907 _X_P2INP	=	0xdff7
                           00DFF8   908 _X_U1CSR	=	0xdff8
                           00DFF9   909 _X_U1DBUF	=	0xdff9
                           00DFFA   910 _X_U1BAUD	=	0xdffa
                           00DFFB   911 _X_U1UCR	=	0xdffb
                           00DFFC   912 _X_U1GCR	=	0xdffc
                           00DFFD   913 _X_P0DIR	=	0xdffd
                           00DFFE   914 _X_P1DIR	=	0xdffe
                           00DFFF   915 _X_P2DIR	=	0xdfff
      00F225                        916 _callrx_PARM_2:
      00F225                        917 	.ds 3
      00F228                        918 _callrx_PARM_3:
      00F228                        919 	.ds 3
      00F22B                        920 _callrx_PARM_4:
      00F22B                        921 	.ds 3
      00F22E                        922 _callrx_c_1_45:
      00F22E                        923 	.ds 3
                                    924 ;--------------------------------------------------------
                                    925 ; absolute external ram data
                                    926 ;--------------------------------------------------------
                                    927 	.area XABS    (ABS,XDATA)
                                    928 ;--------------------------------------------------------
                                    929 ; external initialized ram data
                                    930 ;--------------------------------------------------------
                                    931 	.area XISEG   (XDATA)
                                    932 	.area HOME    (CODE)
                                    933 	.area GSINIT0 (CODE)
                                    934 	.area GSINIT1 (CODE)
                                    935 	.area GSINIT2 (CODE)
                                    936 	.area GSINIT3 (CODE)
                                    937 	.area GSINIT4 (CODE)
                                    938 	.area GSINIT5 (CODE)
                                    939 	.area GSINIT  (CODE)
                                    940 	.area GSFINAL (CODE)
                                    941 	.area CSEG    (CODE)
                                    942 ;--------------------------------------------------------
                                    943 ; global & static initialisations
                                    944 ;--------------------------------------------------------
                                    945 	.area HOME    (CODE)
                                    946 	.area GSINIT  (CODE)
                                    947 	.area GSFINAL (CODE)
                                    948 	.area GSINIT  (CODE)
                                    949 ;--------------------------------------------------------
                                    950 ; Home
                                    951 ;--------------------------------------------------------
                                    952 	.area HOME    (CODE)
                                    953 	.area HOME    (CODE)
                                    954 ;--------------------------------------------------------
                                    955 ; code
                                    956 ;--------------------------------------------------------
                                    957 	.area CSEG    (CODE)
                                    958 ;------------------------------------------------------------
                                    959 ;Allocation info for local variables in function 'callrx'
                                    960 ;------------------------------------------------------------
                                    961 ;sloc0                     Allocated with name '_callrx_sloc0_1_0'
                                    962 ;state                     Allocated with name '_callrx_PARM_2'
                                    963 ;waitflag                  Allocated with name '_callrx_PARM_3'
                                    964 ;clearflag                 Allocated with name '_callrx_PARM_4'
                                    965 ;c                         Allocated with name '_callrx_c_1_45'
                                    966 ;------------------------------------------------------------
                                    967 ;	callrx.c:9: callrx(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
                                    968 ;	-----------------------------------------
                                    969 ;	 function callrx
                                    970 ;	-----------------------------------------
      000B69                        971 _callrx:
                           000007   972 	ar7 = 0x07
                           000006   973 	ar6 = 0x06
                           000005   974 	ar5 = 0x05
                           000004   975 	ar4 = 0x04
                           000003   976 	ar3 = 0x03
                           000002   977 	ar2 = 0x02
                           000001   978 	ar1 = 0x01
                           000000   979 	ar0 = 0x00
      000B69 AF F0            [24]  980 	mov	r7,b
      000B6B AE 83            [24]  981 	mov	r6,dph
      000B6D E5 82            [12]  982 	mov	a,dpl
      000B6F 90 F2 2E         [24]  983 	mov	dptr,#_callrx_c_1_45
      000B72 F0               [24]  984 	movx	@dptr,a
      000B73 EE               [12]  985 	mov	a,r6
      000B74 A3               [24]  986 	inc	dptr
      000B75 F0               [24]  987 	movx	@dptr,a
      000B76 EF               [12]  988 	mov	a,r7
      000B77 A3               [24]  989 	inc	dptr
      000B78 F0               [24]  990 	movx	@dptr,a
                                    991 ;	callrx.c:13: switch(*state){
      000B79 90 F2 25         [24]  992 	mov	dptr,#_callrx_PARM_2
      000B7C E0               [24]  993 	movx	a,@dptr
      000B7D FD               [12]  994 	mov	r5,a
      000B7E A3               [24]  995 	inc	dptr
      000B7F E0               [24]  996 	movx	a,@dptr
      000B80 FE               [12]  997 	mov	r6,a
      000B81 A3               [24]  998 	inc	dptr
      000B82 E0               [24]  999 	movx	a,@dptr
      000B83 FF               [12] 1000 	mov	r7,a
      000B84 8D 82            [24] 1001 	mov	dpl,r5
      000B86 8E 83            [24] 1002 	mov	dph,r6
      000B88 8F F0            [24] 1003 	mov	b,r7
      000B8A 12 1F 77         [24] 1004 	lcall	__gptrget
      000B8D FC               [12] 1005 	mov	r4,a
      000B8E 60 09            [24] 1006 	jz	00101$
      000B90 BC 03 03         [24] 1007 	cjne	r4,#0x03,00125$
      000B93 02 0C 18         [24] 1008 	ljmp	00104$
      000B96                       1009 00125$:
      000B96 02 0C FB         [24] 1010 	ljmp	00108$
                                   1011 ;	callrx.c:14: case Idle:
      000B99                       1012 00101$:
                                   1013 ;	callrx.c:15: rfrx();
      000B99 C0 07            [24] 1014 	push	ar7
      000B9B C0 06            [24] 1015 	push	ar6
      000B9D C0 05            [24] 1016 	push	ar5
      000B9F 12 04 D0         [24] 1017 	lcall	_rfrx
      000BA2 D0 05            [24] 1018 	pop	ar5
      000BA4 D0 06            [24] 1019 	pop	ar6
      000BA6 D0 07            [24] 1020 	pop	ar7
                                   1021 ;	callrx.c:16: *state = Waiting;
      000BA8 8D 82            [24] 1022 	mov	dpl,r5
      000BAA 8E 83            [24] 1023 	mov	dph,r6
      000BAC 8F F0            [24] 1024 	mov	b,r7
      000BAE 74 03            [12] 1025 	mov	a,#0x03
      000BB0 12 1D 9D         [24] 1026 	lcall	__gptrput
                                   1027 ;	callrx.c:17: *waitflag = Frfrx;
      000BB3 90 F2 28         [24] 1028 	mov	dptr,#_callrx_PARM_3
      000BB6 E0               [24] 1029 	movx	a,@dptr
      000BB7 F5 0E            [12] 1030 	mov	_callrx_sloc0_1_0,a
      000BB9 A3               [24] 1031 	inc	dptr
      000BBA E0               [24] 1032 	movx	a,@dptr
      000BBB F5 0F            [12] 1033 	mov	(_callrx_sloc0_1_0 + 1),a
      000BBD A3               [24] 1034 	inc	dptr
      000BBE E0               [24] 1035 	movx	a,@dptr
      000BBF F5 10            [12] 1036 	mov	(_callrx_sloc0_1_0 + 2),a
      000BC1 85 0E 82         [24] 1037 	mov	dpl,_callrx_sloc0_1_0
      000BC4 85 0F 83         [24] 1038 	mov	dph,(_callrx_sloc0_1_0 + 1)
      000BC7 85 10 F0         [24] 1039 	mov	b,(_callrx_sloc0_1_0 + 2)
      000BCA 74 04            [12] 1040 	mov	a,#0x04
      000BCC 12 1D 9D         [24] 1041 	lcall	__gptrput
                                   1042 ;	callrx.c:19: if(c->timeoutms > 0){
      000BCF 90 F2 2E         [24] 1043 	mov	dptr,#_callrx_c_1_45
      000BD2 E0               [24] 1044 	movx	a,@dptr
      000BD3 F8               [12] 1045 	mov	r0,a
      000BD4 A3               [24] 1046 	inc	dptr
      000BD5 E0               [24] 1047 	movx	a,@dptr
      000BD6 FA               [12] 1048 	mov	r2,a
      000BD7 A3               [24] 1049 	inc	dptr
      000BD8 E0               [24] 1050 	movx	a,@dptr
      000BD9 FB               [12] 1051 	mov	r3,a
      000BDA 74 03            [12] 1052 	mov	a,#0x03
      000BDC 28               [12] 1053 	add	a,r0
      000BDD F8               [12] 1054 	mov	r0,a
      000BDE E4               [12] 1055 	clr	a
      000BDF 3A               [12] 1056 	addc	a,r2
      000BE0 FA               [12] 1057 	mov	r2,a
      000BE1 88 82            [24] 1058 	mov	dpl,r0
      000BE3 8A 83            [24] 1059 	mov	dph,r2
      000BE5 8B F0            [24] 1060 	mov	b,r3
      000BE7 12 1F 77         [24] 1061 	lcall	__gptrget
      000BEA FA               [12] 1062 	mov	r2,a
      000BEB A3               [24] 1063 	inc	dptr
      000BEC 12 1F 77         [24] 1064 	lcall	__gptrget
      000BEF FB               [12] 1065 	mov	r3,a
      000BF0 4A               [12] 1066 	orl	a,r2
      000BF1 70 01            [24] 1067 	jnz	00126$
      000BF3 22               [24] 1068 	ret
      000BF4                       1069 00126$:
                                   1070 ;	callrx.c:20: alarm(c->timeoutms);
      000BF4 8A 82            [24] 1071 	mov	dpl,r2
      000BF6 8B 83            [24] 1072 	mov	dph,r3
      000BF8 12 08 19         [24] 1073 	lcall	_alarm
                                   1074 ;	callrx.c:21: *waitflag |= Falarm;
      000BFB 85 0E 82         [24] 1075 	mov	dpl,_callrx_sloc0_1_0
      000BFE 85 0F 83         [24] 1076 	mov	dph,(_callrx_sloc0_1_0 + 1)
      000C01 85 10 F0         [24] 1077 	mov	b,(_callrx_sloc0_1_0 + 2)
      000C04 12 1F 77         [24] 1078 	lcall	__gptrget
      000C07 FB               [12] 1079 	mov	r3,a
      000C08 43 03 20         [24] 1080 	orl	ar3,#0x20
      000C0B 85 0E 82         [24] 1081 	mov	dpl,_callrx_sloc0_1_0
      000C0E 85 0F 83         [24] 1082 	mov	dph,(_callrx_sloc0_1_0 + 1)
      000C11 85 10 F0         [24] 1083 	mov	b,(_callrx_sloc0_1_0 + 2)
      000C14 EB               [12] 1084 	mov	a,r3
                                   1085 ;	callrx.c:24: break;
      000C15 02 1D 9D         [24] 1086 	ljmp	__gptrput
                                   1087 ;	callrx.c:26: case Waiting:
      000C18                       1088 00104$:
                                   1089 ;	callrx.c:27: if(*waitflag&Falarm){
      000C18 90 F2 28         [24] 1090 	mov	dptr,#_callrx_PARM_3
      000C1B E0               [24] 1091 	movx	a,@dptr
      000C1C F5 0E            [12] 1092 	mov	_callrx_sloc0_1_0,a
      000C1E A3               [24] 1093 	inc	dptr
      000C1F E0               [24] 1094 	movx	a,@dptr
      000C20 F5 0F            [12] 1095 	mov	(_callrx_sloc0_1_0 + 1),a
      000C22 A3               [24] 1096 	inc	dptr
      000C23 E0               [24] 1097 	movx	a,@dptr
      000C24 F5 10            [12] 1098 	mov	(_callrx_sloc0_1_0 + 2),a
      000C26 85 0E 82         [24] 1099 	mov	dpl,_callrx_sloc0_1_0
      000C29 85 0F 83         [24] 1100 	mov	dph,(_callrx_sloc0_1_0 + 1)
      000C2C 85 10 F0         [24] 1101 	mov	b,(_callrx_sloc0_1_0 + 2)
      000C2F 12 1F 77         [24] 1102 	lcall	__gptrget
      000C32 F8               [12] 1103 	mov	r0,a
      000C33 30 E5 39         [24] 1104 	jnb	acc.5,00106$
                                   1105 ;	callrx.c:28: rfidle();
      000C36 C0 07            [24] 1106 	push	ar7
      000C38 C0 06            [24] 1107 	push	ar6
      000C3A C0 05            [24] 1108 	push	ar5
      000C3C 12 04 BF         [24] 1109 	lcall	_rfidle
      000C3F D0 05            [24] 1110 	pop	ar5
      000C41 D0 06            [24] 1111 	pop	ar6
      000C43 D0 07            [24] 1112 	pop	ar7
                                   1113 ;	callrx.c:29: c->type = Rerr;
      000C45 90 F2 2E         [24] 1114 	mov	dptr,#_callrx_c_1_45
      000C48 E0               [24] 1115 	movx	a,@dptr
      000C49 F8               [12] 1116 	mov	r0,a
      000C4A A3               [24] 1117 	inc	dptr
      000C4B E0               [24] 1118 	movx	a,@dptr
      000C4C FA               [12] 1119 	mov	r2,a
      000C4D A3               [24] 1120 	inc	dptr
      000C4E E0               [24] 1121 	movx	a,@dptr
      000C4F FB               [12] 1122 	mov	r3,a
      000C50 88 82            [24] 1123 	mov	dpl,r0
      000C52 8A 83            [24] 1124 	mov	dph,r2
      000C54 8B F0            [24] 1125 	mov	b,r3
      000C56 74 80            [12] 1126 	mov	a,#0x80
      000C58 12 1D 9D         [24] 1127 	lcall	__gptrput
                                   1128 ;	callrx.c:30: c->err = Etimeout;
      000C5B 74 02            [12] 1129 	mov	a,#0x02
      000C5D 28               [12] 1130 	add	a,r0
      000C5E F8               [12] 1131 	mov	r0,a
      000C5F E4               [12] 1132 	clr	a
      000C60 3A               [12] 1133 	addc	a,r2
      000C61 FA               [12] 1134 	mov	r2,a
      000C62 88 82            [24] 1135 	mov	dpl,r0
      000C64 8A 83            [24] 1136 	mov	dph,r2
      000C66 8B F0            [24] 1137 	mov	b,r3
      000C68 74 03            [12] 1138 	mov	a,#0x03
      000C6A 12 1D 9D         [24] 1139 	lcall	__gptrput
      000C6D 80 62            [24] 1140 	sjmp	00107$
      000C6F                       1141 00106$:
                                   1142 ;	callrx.c:32: memcpy(&c->pkt, rfrxbuf, sizeof c->pkt);
      000C6F C0 05            [24] 1143 	push	ar5
      000C71 C0 06            [24] 1144 	push	ar6
      000C73 C0 07            [24] 1145 	push	ar7
      000C75 90 F2 2E         [24] 1146 	mov	dptr,#_callrx_c_1_45
      000C78 E0               [24] 1147 	movx	a,@dptr
      000C79 F8               [12] 1148 	mov	r0,a
      000C7A A3               [24] 1149 	inc	dptr
      000C7B E0               [24] 1150 	movx	a,@dptr
      000C7C FA               [12] 1151 	mov	r2,a
      000C7D A3               [24] 1152 	inc	dptr
      000C7E E0               [24] 1153 	movx	a,@dptr
      000C7F FB               [12] 1154 	mov	r3,a
      000C80 74 08            [12] 1155 	mov	a,#0x08
      000C82 28               [12] 1156 	add	a,r0
      000C83 F9               [12] 1157 	mov	r1,a
      000C84 E4               [12] 1158 	clr	a
      000C85 3A               [12] 1159 	addc	a,r2
      000C86 FE               [12] 1160 	mov	r6,a
      000C87 8B 07            [24] 1161 	mov	ar7,r3
      000C89 90 F2 7F         [24] 1162 	mov	dptr,#_memcpy_PARM_2
      000C8C 74 68            [12] 1163 	mov	a,#_rfrxbuf
      000C8E F0               [24] 1164 	movx	@dptr,a
      000C8F 74 F1            [12] 1165 	mov	a,#(_rfrxbuf >> 8)
      000C91 A3               [24] 1166 	inc	dptr
      000C92 F0               [24] 1167 	movx	@dptr,a
      000C93 E4               [12] 1168 	clr	a
      000C94 A3               [24] 1169 	inc	dptr
      000C95 F0               [24] 1170 	movx	@dptr,a
      000C96 90 F2 82         [24] 1171 	mov	dptr,#_memcpy_PARM_3
      000C99 74 4E            [12] 1172 	mov	a,#0x4E
      000C9B F0               [24] 1173 	movx	@dptr,a
      000C9C E4               [12] 1174 	clr	a
      000C9D A3               [24] 1175 	inc	dptr
      000C9E F0               [24] 1176 	movx	@dptr,a
      000C9F 89 82            [24] 1177 	mov	dpl,r1
      000CA1 8E 83            [24] 1178 	mov	dph,r6
      000CA3 8F F0            [24] 1179 	mov	b,r7
      000CA5 C0 07            [24] 1180 	push	ar7
      000CA7 C0 06            [24] 1181 	push	ar6
      000CA9 C0 05            [24] 1182 	push	ar5
      000CAB C0 03            [24] 1183 	push	ar3
      000CAD C0 02            [24] 1184 	push	ar2
      000CAF C0 00            [24] 1185 	push	ar0
      000CB1 12 1C DD         [24] 1186 	lcall	_memcpy
      000CB4 D0 00            [24] 1187 	pop	ar0
      000CB6 D0 02            [24] 1188 	pop	ar2
      000CB8 D0 03            [24] 1189 	pop	ar3
      000CBA D0 05            [24] 1190 	pop	ar5
      000CBC D0 06            [24] 1191 	pop	ar6
      000CBE D0 07            [24] 1192 	pop	ar7
                                   1193 ;	callrx.c:33: c->type = Rrx;
      000CC0 88 82            [24] 1194 	mov	dpl,r0
      000CC2 8A 83            [24] 1195 	mov	dph,r2
      000CC4 8B F0            [24] 1196 	mov	b,r3
      000CC6 74 02            [12] 1197 	mov	a,#0x02
      000CC8 12 1D 9D         [24] 1198 	lcall	__gptrput
                                   1199 ;	callrx.c:42: }
      000CCB D0 07            [24] 1200 	pop	ar7
      000CCD D0 06            [24] 1201 	pop	ar6
      000CCF D0 05            [24] 1202 	pop	ar5
                                   1203 ;	callrx.c:33: c->type = Rrx;
      000CD1                       1204 00107$:
                                   1205 ;	callrx.c:35: alarm(0);
      000CD1 90 00 00         [24] 1206 	mov	dptr,#0x0000
      000CD4 C0 07            [24] 1207 	push	ar7
      000CD6 C0 06            [24] 1208 	push	ar6
      000CD8 C0 05            [24] 1209 	push	ar5
      000CDA 12 08 19         [24] 1210 	lcall	_alarm
      000CDD D0 05            [24] 1211 	pop	ar5
      000CDF D0 06            [24] 1212 	pop	ar6
      000CE1 D0 07            [24] 1213 	pop	ar7
                                   1214 ;	callrx.c:36: *state = Reply;
      000CE3 8D 82            [24] 1215 	mov	dpl,r5
      000CE5 8E 83            [24] 1216 	mov	dph,r6
      000CE7 8F F0            [24] 1217 	mov	b,r7
      000CE9 74 01            [12] 1218 	mov	a,#0x01
      000CEB 12 1D 9D         [24] 1219 	lcall	__gptrput
                                   1220 ;	callrx.c:37: *waitflag = 0;
      000CEE 85 0E 82         [24] 1221 	mov	dpl,_callrx_sloc0_1_0
      000CF1 85 0F 83         [24] 1222 	mov	dph,(_callrx_sloc0_1_0 + 1)
      000CF4 85 10 F0         [24] 1223 	mov	b,(_callrx_sloc0_1_0 + 2)
      000CF7 E4               [12] 1224 	clr	a
                                   1225 ;	callrx.c:38: break;
                                   1226 ;	callrx.c:40: default:
      000CF8 02 1D 9D         [24] 1227 	ljmp	__gptrput
      000CFB                       1228 00108$:
                                   1229 ;	callrx.c:41: panic("Unknown state %d", *state);
      000CFB 7F 00            [12] 1230 	mov	r7,#0x00
      000CFD C0 04            [24] 1231 	push	ar4
      000CFF C0 07            [24] 1232 	push	ar7
      000D01 74 28            [12] 1233 	mov	a,#___str_0
      000D03 C0 E0            [24] 1234 	push	acc
      000D05 74 20            [12] 1235 	mov	a,#(___str_0 >> 8)
      000D07 C0 E0            [24] 1236 	push	acc
      000D09 74 80            [12] 1237 	mov	a,#0x80
      000D0B C0 E0            [24] 1238 	push	acc
      000D0D 12 1B A6         [24] 1239 	lcall	_panic
      000D10 E5 81            [12] 1240 	mov	a,sp
      000D12 24 FB            [12] 1241 	add	a,#0xfb
      000D14 F5 81            [12] 1242 	mov	sp,a
                                   1243 ;	callrx.c:42: }
      000D16 22               [24] 1244 	ret
                                   1245 	.area CSEG    (CODE)
                                   1246 	.area CONST   (CODE)
      002028                       1247 ___str_0:
      002028 55 6E 6B 6E 6F 77 6E  1248 	.ascii "Unknown state %d"
             20 73 74 61 74 65 20
             25 64
      002038 00                    1249 	.db 0x00
                                   1250 	.area XINIT   (CODE)
                                   1251 	.area CABS    (ABS,CODE)
