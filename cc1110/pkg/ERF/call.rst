                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 14:33:04 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module call
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _callping
                                     13 	.globl _calltxrx
                                     14 	.globl _calltx
                                     15 	.globl _callrx
                                     16 	.globl _MODE
                                     17 	.globl _RE
                                     18 	.globl _SLAVE
                                     19 	.globl _FE
                                     20 	.globl _ERR
                                     21 	.globl _RX_BYTE
                                     22 	.globl _TX_BYTE
                                     23 	.globl _ACTIVE
                                     24 	.globl _B_7
                                     25 	.globl _B_6
                                     26 	.globl _B_5
                                     27 	.globl _B_4
                                     28 	.globl _B_3
                                     29 	.globl _B_2
                                     30 	.globl _B_1
                                     31 	.globl _B_0
                                     32 	.globl _WDTIF
                                     33 	.globl _P1IF
                                     34 	.globl _UTX1IF
                                     35 	.globl _UTX0IF
                                     36 	.globl _P2IF
                                     37 	.globl _ACC_7
                                     38 	.globl _ACC_6
                                     39 	.globl _ACC_5
                                     40 	.globl _ACC_4
                                     41 	.globl _ACC_3
                                     42 	.globl _ACC_2
                                     43 	.globl _ACC_1
                                     44 	.globl _ACC_0
                                     45 	.globl _OVFIM
                                     46 	.globl _T4CH1IF
                                     47 	.globl _T4CH0IF
                                     48 	.globl _T4OVFIF
                                     49 	.globl _T3CH1IF
                                     50 	.globl _T3CH0IF
                                     51 	.globl _T3OVFIF
                                     52 	.globl _CY
                                     53 	.globl _AC
                                     54 	.globl _F0
                                     55 	.globl _RS1
                                     56 	.globl _RS0
                                     57 	.globl _OV
                                     58 	.globl _F1
                                     59 	.globl _P
                                     60 	.globl _STIF
                                     61 	.globl _P0IF
                                     62 	.globl _T4IF
                                     63 	.globl _T3IF
                                     64 	.globl _T2IF
                                     65 	.globl _T1IF
                                     66 	.globl _DMAIF
                                     67 	.globl _P0IE
                                     68 	.globl _T4IE
                                     69 	.globl _T3IE
                                     70 	.globl _T2IE
                                     71 	.globl _T1IE
                                     72 	.globl _DMAIE
                                     73 	.globl _EA
                                     74 	.globl _STIE
                                     75 	.globl _ENCIE
                                     76 	.globl _URX1IE
                                     77 	.globl _URX0IE
                                     78 	.globl _ADCIE
                                     79 	.globl _RFTXRXIE
                                     80 	.globl _P2_7
                                     81 	.globl _P2_6
                                     82 	.globl _P2_5
                                     83 	.globl _P2_4
                                     84 	.globl _P2_3
                                     85 	.globl _P2_2
                                     86 	.globl _P2_1
                                     87 	.globl _P2_0
                                     88 	.globl _ENCIF_1
                                     89 	.globl _ENCIF_0
                                     90 	.globl _P1_7
                                     91 	.globl _P1_6
                                     92 	.globl _P1_5
                                     93 	.globl _P1_4
                                     94 	.globl _P1_3
                                     95 	.globl _P1_2
                                     96 	.globl _P1_1
                                     97 	.globl _P1_0
                                     98 	.globl _URX1IF
                                     99 	.globl _ADCIF
                                    100 	.globl _URX0IF
                                    101 	.globl _IT1
                                    102 	.globl _RFTXRXIF
                                    103 	.globl _IT0
                                    104 	.globl _P0_7
                                    105 	.globl _P0_6
                                    106 	.globl _P0_5
                                    107 	.globl _P0_4
                                    108 	.globl _P0_3
                                    109 	.globl _P0_2
                                    110 	.globl _P0_1
                                    111 	.globl _P0_0
                                    112 	.globl _P2DIR
                                    113 	.globl _P1DIR
                                    114 	.globl _P0DIR
                                    115 	.globl _U1GCR
                                    116 	.globl _U1UCR
                                    117 	.globl _U1BAUD
                                    118 	.globl _U1DBUF
                                    119 	.globl _U1CSR
                                    120 	.globl _P2INP
                                    121 	.globl _P1INP
                                    122 	.globl _P2SEL
                                    123 	.globl _P1SEL
                                    124 	.globl _P0SEL
                                    125 	.globl _ADCCFG
                                    126 	.globl _PERCFG
                                    127 	.globl _B
                                    128 	.globl _T4CC1
                                    129 	.globl _T4CCTL1
                                    130 	.globl _T4CC0
                                    131 	.globl _T4CCTL0
                                    132 	.globl _T4CTL
                                    133 	.globl _T4CNT
                                    134 	.globl _RFIF
                                    135 	.globl _IRCON2
                                    136 	.globl _T1CCTL2
                                    137 	.globl _T1CCTL1
                                    138 	.globl _T1CCTL0
                                    139 	.globl _T1CTL
                                    140 	.globl _T1CNTH
                                    141 	.globl _T1CNTL
                                    142 	.globl _RFST
                                    143 	.globl _ACC
                                    144 	.globl _T1CC2H
                                    145 	.globl _T1CC2L
                                    146 	.globl _T1CC1H
                                    147 	.globl _T1CC1L
                                    148 	.globl _T1CC0H
                                    149 	.globl _T1CC0L
                                    150 	.globl _RFD
                                    151 	.globl _TIMIF
                                    152 	.globl _DMAREQ
                                    153 	.globl _DMAARM
                                    154 	.globl _DMA0CFGH
                                    155 	.globl _DMA0CFGL
                                    156 	.globl _DMA1CFGH
                                    157 	.globl _DMA1CFGL
                                    158 	.globl _DMAIRQ
                                    159 	.globl _PSW
                                    160 	.globl _T3CC1
                                    161 	.globl _T3CCTL1
                                    162 	.globl _T3CC0
                                    163 	.globl _T3CCTL0
                                    164 	.globl _T3CTL
                                    165 	.globl _T3CNT
                                    166 	.globl _WDCTL
                                    167 	.globl __SFRC8
                                    168 	.globl _MEMCTR
                                    169 	.globl _CLKCON
                                    170 	.globl _U0GCR
                                    171 	.globl _U0UCR
                                    172 	.globl __SFRC3
                                    173 	.globl _U0BAUD
                                    174 	.globl _U0DBUF
                                    175 	.globl _IRCON
                                    176 	.globl __SFRBF
                                    177 	.globl _SLEEP
                                    178 	.globl _RNDH
                                    179 	.globl _RNDL
                                    180 	.globl _ADCH
                                    181 	.globl _ADCL
                                    182 	.globl _IP1
                                    183 	.globl _IEN1
                                    184 	.globl __SFRB7
                                    185 	.globl _ADCCON3
                                    186 	.globl _ADCCON2
                                    187 	.globl _ADCCON1
                                    188 	.globl _ENCCS
                                    189 	.globl _ENCDO
                                    190 	.globl _ENCDI
                                    191 	.globl __SFRB0
                                    192 	.globl _FWDATA
                                    193 	.globl _FCTL
                                    194 	.globl _FADDRH
                                    195 	.globl _FADDRL
                                    196 	.globl _FWT
                                    197 	.globl __SFRAA
                                    198 	.globl _IP0
                                    199 	.globl _IEN0
                                    200 	.globl __SFRA7
                                    201 	.globl _WORTIME1
                                    202 	.globl _WORTIME0
                                    203 	.globl _WOREVT1
                                    204 	.globl _WOREVT0
                                    205 	.globl _WORCTRL
                                    206 	.globl _WORIRQ
                                    207 	.globl _P2
                                    208 	.globl __SFR9F
                                    209 	.globl _T2CTL
                                    210 	.globl _T2PR
                                    211 	.globl _T2CT
                                    212 	.globl _S1CON
                                    213 	.globl _IEN2
                                    214 	.globl __SFR99
                                    215 	.globl _S0CON
                                    216 	.globl __SFR97
                                    217 	.globl __SFR96
                                    218 	.globl __SFR95
                                    219 	.globl __SFR94
                                    220 	.globl __XPAGE
                                    221 	.globl _MPAGE
                                    222 	.globl _DPS
                                    223 	.globl _RFIM
                                    224 	.globl _P1
                                    225 	.globl _P0INP
                                    226 	.globl __SFR8E
                                    227 	.globl _P1IEN
                                    228 	.globl _PICTL
                                    229 	.globl _P2IFG
                                    230 	.globl _P1IFG
                                    231 	.globl _P0IFG
                                    232 	.globl _TCON
                                    233 	.globl _PCON
                                    234 	.globl _U0CSR
                                    235 	.globl _DPH1
                                    236 	.globl _DPL1
                                    237 	.globl _DPH0
                                    238 	.globl _DPL0
                                    239 	.globl _SP
                                    240 	.globl _P0
                                    241 	.globl _call_PARM_4
                                    242 	.globl _call_PARM_3
                                    243 	.globl _call_PARM_2
                                    244 	.globl _X_P2DIR
                                    245 	.globl _X_P1DIR
                                    246 	.globl _X_P0DIR
                                    247 	.globl _X_U1GCR
                                    248 	.globl _X_U1UCR
                                    249 	.globl _X_U1BAUD
                                    250 	.globl _X_U1DBUF
                                    251 	.globl _X_U1CSR
                                    252 	.globl _X_P2INP
                                    253 	.globl _X_P1INP
                                    254 	.globl _X_P2SEL
                                    255 	.globl _X_P1SEL
                                    256 	.globl _X_P0SEL
                                    257 	.globl _X_ADCCFG
                                    258 	.globl _X_PERCFG
                                    259 	.globl __NA_B
                                    260 	.globl _X_T4CC1
                                    261 	.globl _X_T4CCTL1
                                    262 	.globl _X_T4CC0
                                    263 	.globl _X_T4CCTL0
                                    264 	.globl _X_T4CTL
                                    265 	.globl _X_T4CNT
                                    266 	.globl _X_RFIF
                                    267 	.globl __NA_IRCON2
                                    268 	.globl _X_T1CCTL2
                                    269 	.globl _X_T1CCTL1
                                    270 	.globl _X_T1CCTL0
                                    271 	.globl _X_T1CTL
                                    272 	.globl _X_T1CNTH
                                    273 	.globl _X_T1CNTL
                                    274 	.globl _X_RFST
                                    275 	.globl __NA_ACC
                                    276 	.globl _X_T1CC2H
                                    277 	.globl _X_T1CC2L
                                    278 	.globl _X_T1CC1H
                                    279 	.globl _X_T1CC1L
                                    280 	.globl _X_T1CC0H
                                    281 	.globl _X_T1CC0L
                                    282 	.globl _X_RFD
                                    283 	.globl _X_TIMIF
                                    284 	.globl _X_DMAREQ
                                    285 	.globl _X_DMAARM
                                    286 	.globl _X_DMA0CFGH
                                    287 	.globl _X_DMA0CFGL
                                    288 	.globl _X_DMA1CFGH
                                    289 	.globl _X_DMA1CFGL
                                    290 	.globl _X_DMAIRQ
                                    291 	.globl __NA_PSW
                                    292 	.globl _X_T3CC1
                                    293 	.globl _X_T3CCTL1
                                    294 	.globl _X_T3CC0
                                    295 	.globl _X_T3CCTL0
                                    296 	.globl _X_T3CTL
                                    297 	.globl _X_T3CNT
                                    298 	.globl _X_WDCTL
                                    299 	.globl __X_SFRC8
                                    300 	.globl _X_MEMCTR
                                    301 	.globl _X_CLKCON
                                    302 	.globl _X_U0GCR
                                    303 	.globl _X_U0UCR
                                    304 	.globl __X_SFRC3
                                    305 	.globl _X_U0BAUD
                                    306 	.globl _X_U0DBUF
                                    307 	.globl __NA_IRCON
                                    308 	.globl __X_SFRBF
                                    309 	.globl _X_SLEEP
                                    310 	.globl _X_RNDH
                                    311 	.globl _X_RNDL
                                    312 	.globl _X_ADCH
                                    313 	.globl _X_ADCL
                                    314 	.globl __NA_IP1
                                    315 	.globl __NA_IEN1
                                    316 	.globl __X_SFRB7
                                    317 	.globl _X_ADCCON3
                                    318 	.globl _X_ADCCON2
                                    319 	.globl _X_ADCCON1
                                    320 	.globl _X_ENCCS
                                    321 	.globl _X_ENCDO
                                    322 	.globl _X_ENCDI
                                    323 	.globl __X_SFRB0
                                    324 	.globl _X_FWDATA
                                    325 	.globl _X_FCTL
                                    326 	.globl _X_FADDRH
                                    327 	.globl _X_FADDRL
                                    328 	.globl _X_FWT
                                    329 	.globl __X_SFRAA
                                    330 	.globl __NA_IP0
                                    331 	.globl __NA_IEN0
                                    332 	.globl __X_SFRA7
                                    333 	.globl _X_WORTIME1
                                    334 	.globl _X_WORTIME0
                                    335 	.globl _X_WOREVT1
                                    336 	.globl _X_WOREVT0
                                    337 	.globl _X_WORCTRL
                                    338 	.globl _X_WORIRQ
                                    339 	.globl __NA_P2
                                    340 	.globl __X_SFR9F
                                    341 	.globl _X_T2CTL
                                    342 	.globl _X_T2PR
                                    343 	.globl _X_T2CT
                                    344 	.globl __NA_S1CON
                                    345 	.globl __NA_IEN2
                                    346 	.globl __X_SFR99
                                    347 	.globl __NA_S0CON
                                    348 	.globl __X_SFR97
                                    349 	.globl __X_SFR96
                                    350 	.globl __X_SFR95
                                    351 	.globl __X_SFR94
                                    352 	.globl _X_MPAGE
                                    353 	.globl __NA_DPS
                                    354 	.globl _X_RFIM
                                    355 	.globl __NA_P1
                                    356 	.globl _X_P0INP
                                    357 	.globl __X_SFR8E
                                    358 	.globl _X_P1IEN
                                    359 	.globl _X_PICTL
                                    360 	.globl _X_P2IFG
                                    361 	.globl _X_P1IFG
                                    362 	.globl _X_P0IFG
                                    363 	.globl __NA_TCON
                                    364 	.globl __NA_PCON
                                    365 	.globl _X_U0CSR
                                    366 	.globl __NA_DPH1
                                    367 	.globl __NA_DPL1
                                    368 	.globl __NA_DPH0
                                    369 	.globl __NA_DPL0
                                    370 	.globl __NA_SP
                                    371 	.globl __NA_P0
                                    372 	.globl _I2SCLKF2
                                    373 	.globl _I2SCLKF1
                                    374 	.globl _I2SCLKF0
                                    375 	.globl _I2SSTAT
                                    376 	.globl _I2SWCNT
                                    377 	.globl _I2SDATH
                                    378 	.globl _I2SDATL
                                    379 	.globl _I2SCFG1
                                    380 	.globl _I2SCFG0
                                    381 	.globl _VCO_VC_DAC
                                    382 	.globl _PKTSTATUS
                                    383 	.globl _MARCSTATE
                                    384 	.globl _RSSI
                                    385 	.globl _LQI
                                    386 	.globl _FREQEST
                                    387 	.globl _VERSION
                                    388 	.globl _PARTNUM
                                    389 	.globl __XREGDF35
                                    390 	.globl __XREGDF34
                                    391 	.globl __XREGDF33
                                    392 	.globl __XREGDF32
                                    393 	.globl _IOCFG0
                                    394 	.globl _IOCFG1
                                    395 	.globl _IOCFG2
                                    396 	.globl _PA_TABLE0
                                    397 	.globl _PA_TABLE1
                                    398 	.globl _PA_TABLE2
                                    399 	.globl _PA_TABLE3
                                    400 	.globl _PA_TABLE4
                                    401 	.globl _PA_TABLE5
                                    402 	.globl _PA_TABLE6
                                    403 	.globl _PA_TABLE7
                                    404 	.globl __XREGDF26
                                    405 	.globl _TEST0
                                    406 	.globl _TEST1
                                    407 	.globl _TEST2
                                    408 	.globl __XREGDF22
                                    409 	.globl __XREGDF21
                                    410 	.globl __XREGDF20
                                    411 	.globl _FSCAL0
                                    412 	.globl _FSCAL1
                                    413 	.globl _FSCAL2
                                    414 	.globl _FSCAL3
                                    415 	.globl _FREND0
                                    416 	.globl _FREND1
                                    417 	.globl _AGCCTRL0
                                    418 	.globl _AGCCTRL1
                                    419 	.globl _AGCCTRL2
                                    420 	.globl _BSCFG
                                    421 	.globl _FOCCFG
                                    422 	.globl _MCSM0
                                    423 	.globl _MCSM1
                                    424 	.globl _MCSM2
                                    425 	.globl _DEVIATN
                                    426 	.globl _MDMCFG0
                                    427 	.globl _MDMCFG1
                                    428 	.globl _MDMCFG2
                                    429 	.globl _MDMCFG3
                                    430 	.globl _MDMCFG4
                                    431 	.globl _FREQ0
                                    432 	.globl _FREQ1
                                    433 	.globl _FREQ2
                                    434 	.globl _FSCTRL0
                                    435 	.globl _FSCTRL1
                                    436 	.globl _CHANNR
                                    437 	.globl _ADDR
                                    438 	.globl _PKTCTRL0
                                    439 	.globl _PKTCTRL1
                                    440 	.globl _PKTLEN
                                    441 	.globl _SYNC0
                                    442 	.globl _SYNC1
                                    443 	.globl _MDMCTRL0H
                                    444 	.globl _call
                                    445 ;--------------------------------------------------------
                                    446 ; special function registers
                                    447 ;--------------------------------------------------------
                                    448 	.area RSEG    (ABS,DATA)
      000000                        449 	.org 0x0000
                           000080   450 _P0	=	0x0080
                           000081   451 _SP	=	0x0081
                           000082   452 _DPL0	=	0x0082
                           000083   453 _DPH0	=	0x0083
                           000084   454 _DPL1	=	0x0084
                           000085   455 _DPH1	=	0x0085
                           000086   456 _U0CSR	=	0x0086
                           000087   457 _PCON	=	0x0087
                           000088   458 _TCON	=	0x0088
                           000089   459 _P0IFG	=	0x0089
                           00008A   460 _P1IFG	=	0x008a
                           00008B   461 _P2IFG	=	0x008b
                           00008C   462 _PICTL	=	0x008c
                           00008D   463 _P1IEN	=	0x008d
                           00008E   464 __SFR8E	=	0x008e
                           00008F   465 _P0INP	=	0x008f
                           000090   466 _P1	=	0x0090
                           000091   467 _RFIM	=	0x0091
                           000092   468 _DPS	=	0x0092
                           000093   469 _MPAGE	=	0x0093
                           000093   470 __XPAGE	=	0x0093
                           000094   471 __SFR94	=	0x0094
                           000095   472 __SFR95	=	0x0095
                           000096   473 __SFR96	=	0x0096
                           000097   474 __SFR97	=	0x0097
                           000098   475 _S0CON	=	0x0098
                           000099   476 __SFR99	=	0x0099
                           00009A   477 _IEN2	=	0x009a
                           00009B   478 _S1CON	=	0x009b
                           00009C   479 _T2CT	=	0x009c
                           00009D   480 _T2PR	=	0x009d
                           00009E   481 _T2CTL	=	0x009e
                           00009F   482 __SFR9F	=	0x009f
                           0000A0   483 _P2	=	0x00a0
                           0000A1   484 _WORIRQ	=	0x00a1
                           0000A2   485 _WORCTRL	=	0x00a2
                           0000A3   486 _WOREVT0	=	0x00a3
                           0000A4   487 _WOREVT1	=	0x00a4
                           0000A5   488 _WORTIME0	=	0x00a5
                           0000A6   489 _WORTIME1	=	0x00a6
                           0000A7   490 __SFRA7	=	0x00a7
                           0000A8   491 _IEN0	=	0x00a8
                           0000A9   492 _IP0	=	0x00a9
                           0000AA   493 __SFRAA	=	0x00aa
                           0000AB   494 _FWT	=	0x00ab
                           0000AC   495 _FADDRL	=	0x00ac
                           0000AD   496 _FADDRH	=	0x00ad
                           0000AE   497 _FCTL	=	0x00ae
                           0000AF   498 _FWDATA	=	0x00af
                           0000B0   499 __SFRB0	=	0x00b0
                           0000B1   500 _ENCDI	=	0x00b1
                           0000B2   501 _ENCDO	=	0x00b2
                           0000B3   502 _ENCCS	=	0x00b3
                           0000B4   503 _ADCCON1	=	0x00b4
                           0000B5   504 _ADCCON2	=	0x00b5
                           0000B6   505 _ADCCON3	=	0x00b6
                           0000B7   506 __SFRB7	=	0x00b7
                           0000B8   507 _IEN1	=	0x00b8
                           0000B9   508 _IP1	=	0x00b9
                           0000BA   509 _ADCL	=	0x00ba
                           0000BB   510 _ADCH	=	0x00bb
                           0000BC   511 _RNDL	=	0x00bc
                           0000BD   512 _RNDH	=	0x00bd
                           0000BE   513 _SLEEP	=	0x00be
                           0000BF   514 __SFRBF	=	0x00bf
                           0000C0   515 _IRCON	=	0x00c0
                           0000C1   516 _U0DBUF	=	0x00c1
                           0000C2   517 _U0BAUD	=	0x00c2
                           0000C3   518 __SFRC3	=	0x00c3
                           0000C4   519 _U0UCR	=	0x00c4
                           0000C5   520 _U0GCR	=	0x00c5
                           0000C6   521 _CLKCON	=	0x00c6
                           0000C7   522 _MEMCTR	=	0x00c7
                           0000C8   523 __SFRC8	=	0x00c8
                           0000C9   524 _WDCTL	=	0x00c9
                           0000CA   525 _T3CNT	=	0x00ca
                           0000CB   526 _T3CTL	=	0x00cb
                           0000CC   527 _T3CCTL0	=	0x00cc
                           0000CD   528 _T3CC0	=	0x00cd
                           0000CE   529 _T3CCTL1	=	0x00ce
                           0000CF   530 _T3CC1	=	0x00cf
                           0000D0   531 _PSW	=	0x00d0
                           0000D1   532 _DMAIRQ	=	0x00d1
                           0000D2   533 _DMA1CFGL	=	0x00d2
                           0000D3   534 _DMA1CFGH	=	0x00d3
                           0000D4   535 _DMA0CFGL	=	0x00d4
                           0000D5   536 _DMA0CFGH	=	0x00d5
                           0000D6   537 _DMAARM	=	0x00d6
                           0000D7   538 _DMAREQ	=	0x00d7
                           0000D8   539 _TIMIF	=	0x00d8
                           0000D9   540 _RFD	=	0x00d9
                           0000DA   541 _T1CC0L	=	0x00da
                           0000DB   542 _T1CC0H	=	0x00db
                           0000DC   543 _T1CC1L	=	0x00dc
                           0000DD   544 _T1CC1H	=	0x00dd
                           0000DE   545 _T1CC2L	=	0x00de
                           0000DF   546 _T1CC2H	=	0x00df
                           0000E0   547 _ACC	=	0x00e0
                           0000E1   548 _RFST	=	0x00e1
                           0000E2   549 _T1CNTL	=	0x00e2
                           0000E3   550 _T1CNTH	=	0x00e3
                           0000E4   551 _T1CTL	=	0x00e4
                           0000E5   552 _T1CCTL0	=	0x00e5
                           0000E6   553 _T1CCTL1	=	0x00e6
                           0000E7   554 _T1CCTL2	=	0x00e7
                           0000E8   555 _IRCON2	=	0x00e8
                           0000E9   556 _RFIF	=	0x00e9
                           0000EA   557 _T4CNT	=	0x00ea
                           0000EB   558 _T4CTL	=	0x00eb
                           0000EC   559 _T4CCTL0	=	0x00ec
                           0000ED   560 _T4CC0	=	0x00ed
                           0000EE   561 _T4CCTL1	=	0x00ee
                           0000EF   562 _T4CC1	=	0x00ef
                           0000F0   563 _B	=	0x00f0
                           0000F1   564 _PERCFG	=	0x00f1
                           0000F2   565 _ADCCFG	=	0x00f2
                           0000F3   566 _P0SEL	=	0x00f3
                           0000F4   567 _P1SEL	=	0x00f4
                           0000F5   568 _P2SEL	=	0x00f5
                           0000F6   569 _P1INP	=	0x00f6
                           0000F7   570 _P2INP	=	0x00f7
                           0000F8   571 _U1CSR	=	0x00f8
                           0000F9   572 _U1DBUF	=	0x00f9
                           0000FA   573 _U1BAUD	=	0x00fa
                           0000FB   574 _U1UCR	=	0x00fb
                           0000FC   575 _U1GCR	=	0x00fc
                           0000FD   576 _P0DIR	=	0x00fd
                           0000FE   577 _P1DIR	=	0x00fe
                           0000FF   578 _P2DIR	=	0x00ff
                                    579 ;--------------------------------------------------------
                                    580 ; special function bits
                                    581 ;--------------------------------------------------------
                                    582 	.area RSEG    (ABS,DATA)
      000000                        583 	.org 0x0000
                           000080   584 _P0_0	=	0x0080
                           000081   585 _P0_1	=	0x0081
                           000082   586 _P0_2	=	0x0082
                           000083   587 _P0_3	=	0x0083
                           000084   588 _P0_4	=	0x0084
                           000085   589 _P0_5	=	0x0085
                           000086   590 _P0_6	=	0x0086
                           000087   591 _P0_7	=	0x0087
                           000088   592 _IT0	=	0x0088
                           000089   593 _RFTXRXIF	=	0x0089
                           00008A   594 _IT1	=	0x008a
                           00008B   595 _URX0IF	=	0x008b
                           00008D   596 _ADCIF	=	0x008d
                           00008F   597 _URX1IF	=	0x008f
                           000090   598 _P1_0	=	0x0090
                           000091   599 _P1_1	=	0x0091
                           000092   600 _P1_2	=	0x0092
                           000093   601 _P1_3	=	0x0093
                           000094   602 _P1_4	=	0x0094
                           000095   603 _P1_5	=	0x0095
                           000096   604 _P1_6	=	0x0096
                           000097   605 _P1_7	=	0x0097
                           000098   606 _ENCIF_0	=	0x0098
                           000099   607 _ENCIF_1	=	0x0099
                           0000A0   608 _P2_0	=	0x00a0
                           0000A1   609 _P2_1	=	0x00a1
                           0000A2   610 _P2_2	=	0x00a2
                           0000A3   611 _P2_3	=	0x00a3
                           0000A4   612 _P2_4	=	0x00a4
                           0000A5   613 _P2_5	=	0x00a5
                           0000A6   614 _P2_6	=	0x00a6
                           0000A7   615 _P2_7	=	0x00a7
                           0000A8   616 _RFTXRXIE	=	0x00a8
                           0000A9   617 _ADCIE	=	0x00a9
                           0000AA   618 _URX0IE	=	0x00aa
                           0000AB   619 _URX1IE	=	0x00ab
                           0000AC   620 _ENCIE	=	0x00ac
                           0000AD   621 _STIE	=	0x00ad
                           0000AF   622 _EA	=	0x00af
                           0000B8   623 _DMAIE	=	0x00b8
                           0000B9   624 _T1IE	=	0x00b9
                           0000BA   625 _T2IE	=	0x00ba
                           0000BB   626 _T3IE	=	0x00bb
                           0000BC   627 _T4IE	=	0x00bc
                           0000BD   628 _P0IE	=	0x00bd
                           0000C0   629 _DMAIF	=	0x00c0
                           0000C1   630 _T1IF	=	0x00c1
                           0000C2   631 _T2IF	=	0x00c2
                           0000C3   632 _T3IF	=	0x00c3
                           0000C4   633 _T4IF	=	0x00c4
                           0000C5   634 _P0IF	=	0x00c5
                           0000C7   635 _STIF	=	0x00c7
                           0000D0   636 _P	=	0x00d0
                           0000D1   637 _F1	=	0x00d1
                           0000D2   638 _OV	=	0x00d2
                           0000D3   639 _RS0	=	0x00d3
                           0000D4   640 _RS1	=	0x00d4
                           0000D5   641 _F0	=	0x00d5
                           0000D6   642 _AC	=	0x00d6
                           0000D7   643 _CY	=	0x00d7
                           0000D8   644 _T3OVFIF	=	0x00d8
                           0000D9   645 _T3CH0IF	=	0x00d9
                           0000DA   646 _T3CH1IF	=	0x00da
                           0000DB   647 _T4OVFIF	=	0x00db
                           0000DC   648 _T4CH0IF	=	0x00dc
                           0000DD   649 _T4CH1IF	=	0x00dd
                           0000DE   650 _OVFIM	=	0x00de
                           0000E0   651 _ACC_0	=	0x00e0
                           0000E1   652 _ACC_1	=	0x00e1
                           0000E2   653 _ACC_2	=	0x00e2
                           0000E3   654 _ACC_3	=	0x00e3
                           0000E4   655 _ACC_4	=	0x00e4
                           0000E5   656 _ACC_5	=	0x00e5
                           0000E6   657 _ACC_6	=	0x00e6
                           0000E7   658 _ACC_7	=	0x00e7
                           0000E8   659 _P2IF	=	0x00e8
                           0000E9   660 _UTX0IF	=	0x00e9
                           0000EA   661 _UTX1IF	=	0x00ea
                           0000EB   662 _P1IF	=	0x00eb
                           0000EC   663 _WDTIF	=	0x00ec
                           0000F0   664 _B_0	=	0x00f0
                           0000F1   665 _B_1	=	0x00f1
                           0000F2   666 _B_2	=	0x00f2
                           0000F3   667 _B_3	=	0x00f3
                           0000F4   668 _B_4	=	0x00f4
                           0000F5   669 _B_5	=	0x00f5
                           0000F6   670 _B_6	=	0x00f6
                           0000F7   671 _B_7	=	0x00f7
                           0000F8   672 _ACTIVE	=	0x00f8
                           0000F9   673 _TX_BYTE	=	0x00f9
                           0000FA   674 _RX_BYTE	=	0x00fa
                           0000FB   675 _ERR	=	0x00fb
                           0000FC   676 _FE	=	0x00fc
                           0000FD   677 _SLAVE	=	0x00fd
                           0000FE   678 _RE	=	0x00fe
                           0000FF   679 _MODE	=	0x00ff
                                    680 ;--------------------------------------------------------
                                    681 ; overlayable register banks
                                    682 ;--------------------------------------------------------
                                    683 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        684 	.ds 8
                                    685 ;--------------------------------------------------------
                                    686 ; internal ram data
                                    687 ;--------------------------------------------------------
                                    688 	.area DSEG    (DATA)
      000008                        689 _call_sloc0_1_0:
      000008                        690 	.ds 3
      00000B                        691 _call_sloc1_1_0:
      00000B                        692 	.ds 3
                                    693 ;--------------------------------------------------------
                                    694 ; overlayable items in internal ram 
                                    695 ;--------------------------------------------------------
                                    696 ;--------------------------------------------------------
                                    697 ; indirectly addressable internal ram data
                                    698 ;--------------------------------------------------------
                                    699 	.area ISEG    (DATA)
                                    700 ;--------------------------------------------------------
                                    701 ; absolute internal ram data
                                    702 ;--------------------------------------------------------
                                    703 	.area IABS    (ABS,DATA)
                                    704 	.area IABS    (ABS,DATA)
                                    705 ;--------------------------------------------------------
                                    706 ; bit data
                                    707 ;--------------------------------------------------------
                                    708 	.area BSEG    (BIT)
                                    709 ;--------------------------------------------------------
                                    710 ; paged external ram data
                                    711 ;--------------------------------------------------------
                                    712 	.area PSEG    (PAG,XDATA)
                                    713 ;--------------------------------------------------------
                                    714 ; external ram data
                                    715 ;--------------------------------------------------------
                                    716 	.area XSEG    (XDATA)
                           00DF02   717 _MDMCTRL0H	=	0xdf02
                           00DF00   718 _SYNC1	=	0xdf00
                           00DF01   719 _SYNC0	=	0xdf01
                           00DF02   720 _PKTLEN	=	0xdf02
                           00DF03   721 _PKTCTRL1	=	0xdf03
                           00DF04   722 _PKTCTRL0	=	0xdf04
                           00DF05   723 _ADDR	=	0xdf05
                           00DF06   724 _CHANNR	=	0xdf06
                           00DF07   725 _FSCTRL1	=	0xdf07
                           00DF08   726 _FSCTRL0	=	0xdf08
                           00DF09   727 _FREQ2	=	0xdf09
                           00DF0A   728 _FREQ1	=	0xdf0a
                           00DF0B   729 _FREQ0	=	0xdf0b
                           00DF0C   730 _MDMCFG4	=	0xdf0c
                           00DF0D   731 _MDMCFG3	=	0xdf0d
                           00DF0E   732 _MDMCFG2	=	0xdf0e
                           00DF0F   733 _MDMCFG1	=	0xdf0f
                           00DF10   734 _MDMCFG0	=	0xdf10
                           00DF11   735 _DEVIATN	=	0xdf11
                           00DF12   736 _MCSM2	=	0xdf12
                           00DF13   737 _MCSM1	=	0xdf13
                           00DF14   738 _MCSM0	=	0xdf14
                           00DF15   739 _FOCCFG	=	0xdf15
                           00DF16   740 _BSCFG	=	0xdf16
                           00DF17   741 _AGCCTRL2	=	0xdf17
                           00DF18   742 _AGCCTRL1	=	0xdf18
                           00DF19   743 _AGCCTRL0	=	0xdf19
                           00DF1A   744 _FREND1	=	0xdf1a
                           00DF1B   745 _FREND0	=	0xdf1b
                           00DF1C   746 _FSCAL3	=	0xdf1c
                           00DF1D   747 _FSCAL2	=	0xdf1d
                           00DF1E   748 _FSCAL1	=	0xdf1e
                           00DF1F   749 _FSCAL0	=	0xdf1f
                           00DF20   750 __XREGDF20	=	0xdf20
                           00DF21   751 __XREGDF21	=	0xdf21
                           00DF22   752 __XREGDF22	=	0xdf22
                           00DF23   753 _TEST2	=	0xdf23
                           00DF24   754 _TEST1	=	0xdf24
                           00DF25   755 _TEST0	=	0xdf25
                           00DF26   756 __XREGDF26	=	0xdf26
                           00DF27   757 _PA_TABLE7	=	0xdf27
                           00DF28   758 _PA_TABLE6	=	0xdf28
                           00DF29   759 _PA_TABLE5	=	0xdf29
                           00DF2A   760 _PA_TABLE4	=	0xdf2a
                           00DF2B   761 _PA_TABLE3	=	0xdf2b
                           00DF2C   762 _PA_TABLE2	=	0xdf2c
                           00DF2D   763 _PA_TABLE1	=	0xdf2d
                           00DF2E   764 _PA_TABLE0	=	0xdf2e
                           00DF2F   765 _IOCFG2	=	0xdf2f
                           00DF30   766 _IOCFG1	=	0xdf30
                           00DF31   767 _IOCFG0	=	0xdf31
                           00DF32   768 __XREGDF32	=	0xdf32
                           00DF33   769 __XREGDF33	=	0xdf33
                           00DF34   770 __XREGDF34	=	0xdf34
                           00DF35   771 __XREGDF35	=	0xdf35
                           00DF36   772 _PARTNUM	=	0xdf36
                           00DF37   773 _VERSION	=	0xdf37
                           00DF38   774 _FREQEST	=	0xdf38
                           00DF39   775 _LQI	=	0xdf39
                           00DF3A   776 _RSSI	=	0xdf3a
                           00DF3B   777 _MARCSTATE	=	0xdf3b
                           00DF3C   778 _PKTSTATUS	=	0xdf3c
                           00DF3D   779 _VCO_VC_DAC	=	0xdf3d
                           00DF40   780 _I2SCFG0	=	0xdf40
                           00DF41   781 _I2SCFG1	=	0xdf41
                           00DF42   782 _I2SDATL	=	0xdf42
                           00DF43   783 _I2SDATH	=	0xdf43
                           00DF44   784 _I2SWCNT	=	0xdf44
                           00DF45   785 _I2SSTAT	=	0xdf45
                           00DF46   786 _I2SCLKF0	=	0xdf46
                           00DF47   787 _I2SCLKF1	=	0xdf47
                           00DF48   788 _I2SCLKF2	=	0xdf48
                           00DF80   789 __NA_P0	=	0xdf80
                           00DF81   790 __NA_SP	=	0xdf81
                           00DF82   791 __NA_DPL0	=	0xdf82
                           00DF83   792 __NA_DPH0	=	0xdf83
                           00DF84   793 __NA_DPL1	=	0xdf84
                           00DF85   794 __NA_DPH1	=	0xdf85
                           00DF86   795 _X_U0CSR	=	0xdf86
                           00DF87   796 __NA_PCON	=	0xdf87
                           00DF88   797 __NA_TCON	=	0xdf88
                           00DF89   798 _X_P0IFG	=	0xdf89
                           00DF8A   799 _X_P1IFG	=	0xdf8a
                           00DF8B   800 _X_P2IFG	=	0xdf8b
                           00DF8C   801 _X_PICTL	=	0xdf8c
                           00DF8D   802 _X_P1IEN	=	0xdf8d
                           00DF8E   803 __X_SFR8E	=	0xdf8e
                           00DF8F   804 _X_P0INP	=	0xdf8f
                           00DF90   805 __NA_P1	=	0xdf90
                           00DF91   806 _X_RFIM	=	0xdf91
                           00DF92   807 __NA_DPS	=	0xdf92
                           00DF93   808 _X_MPAGE	=	0xdf93
                           00DF94   809 __X_SFR94	=	0xdf94
                           00DF95   810 __X_SFR95	=	0xdf95
                           00DF96   811 __X_SFR96	=	0xdf96
                           00DF97   812 __X_SFR97	=	0xdf97
                           00DF98   813 __NA_S0CON	=	0xdf98
                           00DF99   814 __X_SFR99	=	0xdf99
                           00DF9A   815 __NA_IEN2	=	0xdf9a
                           00DF9B   816 __NA_S1CON	=	0xdf9b
                           00DF9C   817 _X_T2CT	=	0xdf9c
                           00DF9D   818 _X_T2PR	=	0xdf9d
                           00DF9E   819 _X_T2CTL	=	0xdf9e
                           00DF9F   820 __X_SFR9F	=	0xdf9f
                           00DFA0   821 __NA_P2	=	0xdfa0
                           00DFA1   822 _X_WORIRQ	=	0xdfa1
                           00DFA2   823 _X_WORCTRL	=	0xdfa2
                           00DFA3   824 _X_WOREVT0	=	0xdfa3
                           00DFA4   825 _X_WOREVT1	=	0xdfa4
                           00DFA5   826 _X_WORTIME0	=	0xdfa5
                           00DFA6   827 _X_WORTIME1	=	0xdfa6
                           00DFA7   828 __X_SFRA7	=	0xdfa7
                           00DFA8   829 __NA_IEN0	=	0xdfa8
                           00DFA9   830 __NA_IP0	=	0xdfa9
                           00DFAA   831 __X_SFRAA	=	0xdfaa
                           00DFAB   832 _X_FWT	=	0xdfab
                           00DFAC   833 _X_FADDRL	=	0xdfac
                           00DFAD   834 _X_FADDRH	=	0xdfad
                           00DFAE   835 _X_FCTL	=	0xdfae
                           00DFAF   836 _X_FWDATA	=	0xdfaf
                           00DFB0   837 __X_SFRB0	=	0xdfb0
                           00DFB1   838 _X_ENCDI	=	0xdfb1
                           00DFB2   839 _X_ENCDO	=	0xdfb2
                           00DFB3   840 _X_ENCCS	=	0xdfb3
                           00DFB4   841 _X_ADCCON1	=	0xdfb4
                           00DFB5   842 _X_ADCCON2	=	0xdfb5
                           00DFB6   843 _X_ADCCON3	=	0xdfb6
                           00DFB7   844 __X_SFRB7	=	0xdfb7
                           00DFB8   845 __NA_IEN1	=	0xdfb8
                           00DFB9   846 __NA_IP1	=	0xdfb9
                           00DFBA   847 _X_ADCL	=	0xdfba
                           00DFBB   848 _X_ADCH	=	0xdfbb
                           00DFBC   849 _X_RNDL	=	0xdfbc
                           00DFBD   850 _X_RNDH	=	0xdfbd
                           00DFBE   851 _X_SLEEP	=	0xdfbe
                           00DFBF   852 __X_SFRBF	=	0xdfbf
                           00DFC0   853 __NA_IRCON	=	0xdfc0
                           00DFC1   854 _X_U0DBUF	=	0xdfc1
                           00DFC2   855 _X_U0BAUD	=	0xdfc2
                           00DFC3   856 __X_SFRC3	=	0xdfc3
                           00DFC4   857 _X_U0UCR	=	0xdfc4
                           00DFC5   858 _X_U0GCR	=	0xdfc5
                           00DFC6   859 _X_CLKCON	=	0xdfc6
                           00DFC7   860 _X_MEMCTR	=	0xdfc7
                           00DFC8   861 __X_SFRC8	=	0xdfc8
                           00DFC9   862 _X_WDCTL	=	0xdfc9
                           00DFCA   863 _X_T3CNT	=	0xdfca
                           00DFCB   864 _X_T3CTL	=	0xdfcb
                           00DFCC   865 _X_T3CCTL0	=	0xdfcc
                           00DFCD   866 _X_T3CC0	=	0xdfcd
                           00DFCE   867 _X_T3CCTL1	=	0xdfce
                           00DFCF   868 _X_T3CC1	=	0xdfcf
                           00DFD0   869 __NA_PSW	=	0xdfd0
                           00DFD1   870 _X_DMAIRQ	=	0xdfd1
                           00DFD2   871 _X_DMA1CFGL	=	0xdfd2
                           00DFD3   872 _X_DMA1CFGH	=	0xdfd3
                           00DFD4   873 _X_DMA0CFGL	=	0xdfd4
                           00DFD5   874 _X_DMA0CFGH	=	0xdfd5
                           00DFD6   875 _X_DMAARM	=	0xdfd6
                           00DFD7   876 _X_DMAREQ	=	0xdfd7
                           00DFD8   877 _X_TIMIF	=	0xdfd8
                           00DFD9   878 _X_RFD	=	0xdfd9
                           00DFDA   879 _X_T1CC0L	=	0xdfda
                           00DFDB   880 _X_T1CC0H	=	0xdfdb
                           00DFDC   881 _X_T1CC1L	=	0xdfdc
                           00DFDD   882 _X_T1CC1H	=	0xdfdd
                           00DFDE   883 _X_T1CC2L	=	0xdfde
                           00DFDF   884 _X_T1CC2H	=	0xdfdf
                           00DFE0   885 __NA_ACC	=	0xdfe0
                           00DFE1   886 _X_RFST	=	0xdfe1
                           00DFE2   887 _X_T1CNTL	=	0xdfe2
                           00DFE3   888 _X_T1CNTH	=	0xdfe3
                           00DFE4   889 _X_T1CTL	=	0xdfe4
                           00DFE5   890 _X_T1CCTL0	=	0xdfe5
                           00DFE6   891 _X_T1CCTL1	=	0xdfe6
                           00DFE7   892 _X_T1CCTL2	=	0xdfe7
                           00DFE8   893 __NA_IRCON2	=	0xdfe8
                           00DFE9   894 _X_RFIF	=	0xdfe9
                           00DFEA   895 _X_T4CNT	=	0xdfea
                           00DFEB   896 _X_T4CTL	=	0xdfeb
                           00DFEC   897 _X_T4CCTL0	=	0xdfec
                           00DFED   898 _X_T4CC0	=	0xdfed
                           00DFEE   899 _X_T4CCTL1	=	0xdfee
                           00DFEF   900 _X_T4CC1	=	0xdfef
                           00DFF0   901 __NA_B	=	0xdff0
                           00DFF1   902 _X_PERCFG	=	0xdff1
                           00DFF2   903 _X_ADCCFG	=	0xdff2
                           00DFF3   904 _X_P0SEL	=	0xdff3
                           00DFF4   905 _X_P1SEL	=	0xdff4
                           00DFF5   906 _X_P2SEL	=	0xdff5
                           00DFF6   907 _X_P1INP	=	0xdff6
                           00DFF7   908 _X_P2INP	=	0xdff7
                           00DFF8   909 _X_U1CSR	=	0xdff8
                           00DFF9   910 _X_U1DBUF	=	0xdff9
                           00DFFA   911 _X_U1BAUD	=	0xdffa
                           00DFFB   912 _X_U1UCR	=	0xdffb
                           00DFFC   913 _X_U1GCR	=	0xdffc
                           00DFFD   914 _X_P0DIR	=	0xdffd
                           00DFFE   915 _X_P1DIR	=	0xdffe
                           00DFFF   916 _X_P2DIR	=	0xdfff
      00F219                        917 _call_PARM_2:
      00F219                        918 	.ds 3
      00F21C                        919 _call_PARM_3:
      00F21C                        920 	.ds 3
      00F21F                        921 _call_PARM_4:
      00F21F                        922 	.ds 3
      00F222                        923 _call_c_1_50:
      00F222                        924 	.ds 3
                                    925 ;--------------------------------------------------------
                                    926 ; absolute external ram data
                                    927 ;--------------------------------------------------------
                                    928 	.area XABS    (ABS,XDATA)
                                    929 ;--------------------------------------------------------
                                    930 ; external initialized ram data
                                    931 ;--------------------------------------------------------
                                    932 	.area XISEG   (XDATA)
                                    933 	.area HOME    (CODE)
                                    934 	.area GSINIT0 (CODE)
                                    935 	.area GSINIT1 (CODE)
                                    936 	.area GSINIT2 (CODE)
                                    937 	.area GSINIT3 (CODE)
                                    938 	.area GSINIT4 (CODE)
                                    939 	.area GSINIT5 (CODE)
                                    940 	.area GSINIT  (CODE)
                                    941 	.area GSFINAL (CODE)
                                    942 	.area CSEG    (CODE)
                                    943 ;--------------------------------------------------------
                                    944 ; global & static initialisations
                                    945 ;--------------------------------------------------------
                                    946 	.area HOME    (CODE)
                                    947 	.area GSINIT  (CODE)
                                    948 	.area GSFINAL (CODE)
                                    949 	.area GSINIT  (CODE)
                                    950 ;--------------------------------------------------------
                                    951 ; Home
                                    952 ;--------------------------------------------------------
                                    953 	.area HOME    (CODE)
                                    954 	.area HOME    (CODE)
                                    955 ;--------------------------------------------------------
                                    956 ; code
                                    957 ;--------------------------------------------------------
                                    958 	.area CSEG    (CODE)
                                    959 ;------------------------------------------------------------
                                    960 ;Allocation info for local variables in function 'call'
                                    961 ;------------------------------------------------------------
                                    962 ;sloc0                     Allocated with name '_call_sloc0_1_0'
                                    963 ;sloc1                     Allocated with name '_call_sloc1_1_0'
                                    964 ;state                     Allocated with name '_call_PARM_2'
                                    965 ;waitflag                  Allocated with name '_call_PARM_3'
                                    966 ;clearflag                 Allocated with name '_call_PARM_4'
                                    967 ;c                         Allocated with name '_call_c_1_50'
                                    968 ;------------------------------------------------------------
                                    969 ;	call.c:10: call(Rcall *c, uint8 *state, uint8 *waitflag, uint8 *clearflag)
                                    970 ;	-----------------------------------------
                                    971 ;	 function call
                                    972 ;	-----------------------------------------
      00099C                        973 _call:
                           000007   974 	ar7 = 0x07
                           000006   975 	ar6 = 0x06
                           000005   976 	ar5 = 0x05
                           000004   977 	ar4 = 0x04
                           000003   978 	ar3 = 0x03
                           000002   979 	ar2 = 0x02
                           000001   980 	ar1 = 0x01
                           000000   981 	ar0 = 0x00
      00099C AF F0            [24]  982 	mov	r7,b
      00099E AE 83            [24]  983 	mov	r6,dph
      0009A0 E5 82            [12]  984 	mov	a,dpl
      0009A2 90 F2 22         [24]  985 	mov	dptr,#_call_c_1_50
      0009A5 F0               [24]  986 	movx	@dptr,a
      0009A6 EE               [12]  987 	mov	a,r6
      0009A7 A3               [24]  988 	inc	dptr
      0009A8 F0               [24]  989 	movx	@dptr,a
      0009A9 EF               [12]  990 	mov	a,r7
      0009AA A3               [24]  991 	inc	dptr
      0009AB F0               [24]  992 	movx	@dptr,a
                                    993 ;	call.c:12: switch(c->type){
      0009AC 90 F2 22         [24]  994 	mov	dptr,#_call_c_1_50
      0009AF E0               [24]  995 	movx	a,@dptr
      0009B0 FD               [12]  996 	mov	r5,a
      0009B1 A3               [24]  997 	inc	dptr
      0009B2 E0               [24]  998 	movx	a,@dptr
      0009B3 FE               [12]  999 	mov	r6,a
      0009B4 A3               [24] 1000 	inc	dptr
      0009B5 E0               [24] 1001 	movx	a,@dptr
      0009B6 FF               [12] 1002 	mov	r7,a
      0009B7 8D 82            [24] 1003 	mov	dpl,r5
      0009B9 8E 83            [24] 1004 	mov	dph,r6
      0009BB 8F F0            [24] 1005 	mov	b,r7
      0009BD 12 1F 73         [24] 1006 	lcall	__gptrget
      0009C0 FC               [12] 1007 	mov	r4,a
      0009C1 BC 01 02         [24] 1008 	cjne	r4,#0x01,00121$
      0009C4 80 47            [24] 1009 	sjmp	00102$
      0009C6                       1010 00121$:
      0009C6 BC 03 03         [24] 1011 	cjne	r4,#0x03,00122$
      0009C9 02 0A 64         [24] 1012 	ljmp	00103$
      0009CC                       1013 00122$:
      0009CC BC 05 03         [24] 1014 	cjne	r4,#0x05,00123$
      0009CF 02 0A BB         [24] 1015 	ljmp	00104$
      0009D2                       1016 00123$:
      0009D2 BC 07 03         [24] 1017 	cjne	r4,#0x07,00124$
      0009D5 02 0B 12         [24] 1018 	ljmp	00105$
      0009D8                       1019 00124$:
                                   1020 ;	call.c:14: c->type = Rerr;
      0009D8 8D 82            [24] 1021 	mov	dpl,r5
      0009DA 8E 83            [24] 1022 	mov	dph,r6
      0009DC 8F F0            [24] 1023 	mov	b,r7
      0009DE 74 80            [12] 1024 	mov	a,#0x80
      0009E0 12 1D 99         [24] 1025 	lcall	__gptrput
                                   1026 ;	call.c:15: c->err = Ebadcall;
      0009E3 74 02            [12] 1027 	mov	a,#0x02
      0009E5 2D               [12] 1028 	add	a,r5
      0009E6 FA               [12] 1029 	mov	r2,a
      0009E7 E4               [12] 1030 	clr	a
      0009E8 3E               [12] 1031 	addc	a,r6
      0009E9 FB               [12] 1032 	mov	r3,a
      0009EA 8F 04            [24] 1033 	mov	ar4,r7
      0009EC 8A 82            [24] 1034 	mov	dpl,r2
      0009EE 8B 83            [24] 1035 	mov	dph,r3
      0009F0 8C F0            [24] 1036 	mov	b,r4
      0009F2 74 02            [12] 1037 	mov	a,#0x02
      0009F4 12 1D 99         [24] 1038 	lcall	__gptrput
                                   1039 ;	call.c:16: *state = Reply;
      0009F7 90 F2 19         [24] 1040 	mov	dptr,#_call_PARM_2
      0009FA E0               [24] 1041 	movx	a,@dptr
      0009FB FA               [12] 1042 	mov	r2,a
      0009FC A3               [24] 1043 	inc	dptr
      0009FD E0               [24] 1044 	movx	a,@dptr
      0009FE FB               [12] 1045 	mov	r3,a
      0009FF A3               [24] 1046 	inc	dptr
      000A00 E0               [24] 1047 	movx	a,@dptr
      000A01 FC               [12] 1048 	mov	r4,a
      000A02 8A 82            [24] 1049 	mov	dpl,r2
      000A04 8B 83            [24] 1050 	mov	dph,r3
      000A06 8C F0            [24] 1051 	mov	b,r4
      000A08 74 01            [12] 1052 	mov	a,#0x01
                                   1053 ;	call.c:17: return;
      000A0A 02 1D 99         [24] 1054 	ljmp	__gptrput
                                   1055 ;	call.c:19: case Trx:		callrx(c, state, waitflag, clearflag); break;
      000A0D                       1056 00102$:
      000A0D 90 F2 19         [24] 1057 	mov	dptr,#_call_PARM_2
      000A10 E0               [24] 1058 	movx	a,@dptr
      000A11 F5 08            [12] 1059 	mov	_call_sloc0_1_0,a
      000A13 A3               [24] 1060 	inc	dptr
      000A14 E0               [24] 1061 	movx	a,@dptr
      000A15 F5 09            [12] 1062 	mov	(_call_sloc0_1_0 + 1),a
      000A17 A3               [24] 1063 	inc	dptr
      000A18 E0               [24] 1064 	movx	a,@dptr
      000A19 F5 0A            [12] 1065 	mov	(_call_sloc0_1_0 + 2),a
      000A1B 90 F2 1C         [24] 1066 	mov	dptr,#_call_PARM_3
      000A1E E0               [24] 1067 	movx	a,@dptr
      000A1F F5 0B            [12] 1068 	mov	_call_sloc1_1_0,a
      000A21 A3               [24] 1069 	inc	dptr
      000A22 E0               [24] 1070 	movx	a,@dptr
      000A23 F5 0C            [12] 1071 	mov	(_call_sloc1_1_0 + 1),a
      000A25 A3               [24] 1072 	inc	dptr
      000A26 E0               [24] 1073 	movx	a,@dptr
      000A27 F5 0D            [12] 1074 	mov	(_call_sloc1_1_0 + 2),a
      000A29 90 F2 1F         [24] 1075 	mov	dptr,#_call_PARM_4
      000A2C E0               [24] 1076 	movx	a,@dptr
      000A2D FA               [12] 1077 	mov	r2,a
      000A2E A3               [24] 1078 	inc	dptr
      000A2F E0               [24] 1079 	movx	a,@dptr
      000A30 FB               [12] 1080 	mov	r3,a
      000A31 A3               [24] 1081 	inc	dptr
      000A32 E0               [24] 1082 	movx	a,@dptr
      000A33 FC               [12] 1083 	mov	r4,a
      000A34 90 F2 25         [24] 1084 	mov	dptr,#_callrx_PARM_2
      000A37 E5 08            [12] 1085 	mov	a,_call_sloc0_1_0
      000A39 F0               [24] 1086 	movx	@dptr,a
      000A3A E5 09            [12] 1087 	mov	a,(_call_sloc0_1_0 + 1)
      000A3C A3               [24] 1088 	inc	dptr
      000A3D F0               [24] 1089 	movx	@dptr,a
      000A3E E5 0A            [12] 1090 	mov	a,(_call_sloc0_1_0 + 2)
      000A40 A3               [24] 1091 	inc	dptr
      000A41 F0               [24] 1092 	movx	@dptr,a
      000A42 90 F2 28         [24] 1093 	mov	dptr,#_callrx_PARM_3
      000A45 E5 0B            [12] 1094 	mov	a,_call_sloc1_1_0
      000A47 F0               [24] 1095 	movx	@dptr,a
      000A48 E5 0C            [12] 1096 	mov	a,(_call_sloc1_1_0 + 1)
      000A4A A3               [24] 1097 	inc	dptr
      000A4B F0               [24] 1098 	movx	@dptr,a
      000A4C E5 0D            [12] 1099 	mov	a,(_call_sloc1_1_0 + 2)
      000A4E A3               [24] 1100 	inc	dptr
      000A4F F0               [24] 1101 	movx	@dptr,a
      000A50 90 F2 2B         [24] 1102 	mov	dptr,#_callrx_PARM_4
      000A53 EA               [12] 1103 	mov	a,r2
      000A54 F0               [24] 1104 	movx	@dptr,a
      000A55 EB               [12] 1105 	mov	a,r3
      000A56 A3               [24] 1106 	inc	dptr
      000A57 F0               [24] 1107 	movx	@dptr,a
      000A58 EC               [12] 1108 	mov	a,r4
      000A59 A3               [24] 1109 	inc	dptr
      000A5A F0               [24] 1110 	movx	@dptr,a
      000A5B 8D 82            [24] 1111 	mov	dpl,r5
      000A5D 8E 83            [24] 1112 	mov	dph,r6
      000A5F 8F F0            [24] 1113 	mov	b,r7
      000A61 02 0B 69         [24] 1114 	ljmp	_callrx
                                   1115 ;	call.c:20: case Ttx:		calltx(c, state, waitflag, clearflag); break;
      000A64                       1116 00103$:
      000A64 90 F2 19         [24] 1117 	mov	dptr,#_call_PARM_2
      000A67 E0               [24] 1118 	movx	a,@dptr
      000A68 F5 0B            [12] 1119 	mov	_call_sloc1_1_0,a
      000A6A A3               [24] 1120 	inc	dptr
      000A6B E0               [24] 1121 	movx	a,@dptr
      000A6C F5 0C            [12] 1122 	mov	(_call_sloc1_1_0 + 1),a
      000A6E A3               [24] 1123 	inc	dptr
      000A6F E0               [24] 1124 	movx	a,@dptr
      000A70 F5 0D            [12] 1125 	mov	(_call_sloc1_1_0 + 2),a
      000A72 90 F2 1C         [24] 1126 	mov	dptr,#_call_PARM_3
      000A75 E0               [24] 1127 	movx	a,@dptr
      000A76 F5 08            [12] 1128 	mov	_call_sloc0_1_0,a
      000A78 A3               [24] 1129 	inc	dptr
      000A79 E0               [24] 1130 	movx	a,@dptr
      000A7A F5 09            [12] 1131 	mov	(_call_sloc0_1_0 + 1),a
      000A7C A3               [24] 1132 	inc	dptr
      000A7D E0               [24] 1133 	movx	a,@dptr
      000A7E F5 0A            [12] 1134 	mov	(_call_sloc0_1_0 + 2),a
      000A80 90 F2 1F         [24] 1135 	mov	dptr,#_call_PARM_4
      000A83 E0               [24] 1136 	movx	a,@dptr
      000A84 FA               [12] 1137 	mov	r2,a
      000A85 A3               [24] 1138 	inc	dptr
      000A86 E0               [24] 1139 	movx	a,@dptr
      000A87 FB               [12] 1140 	mov	r3,a
      000A88 A3               [24] 1141 	inc	dptr
      000A89 E0               [24] 1142 	movx	a,@dptr
      000A8A FC               [12] 1143 	mov	r4,a
      000A8B 90 F2 31         [24] 1144 	mov	dptr,#_calltx_PARM_2
      000A8E E5 0B            [12] 1145 	mov	a,_call_sloc1_1_0
      000A90 F0               [24] 1146 	movx	@dptr,a
      000A91 E5 0C            [12] 1147 	mov	a,(_call_sloc1_1_0 + 1)
      000A93 A3               [24] 1148 	inc	dptr
      000A94 F0               [24] 1149 	movx	@dptr,a
      000A95 E5 0D            [12] 1150 	mov	a,(_call_sloc1_1_0 + 2)
      000A97 A3               [24] 1151 	inc	dptr
      000A98 F0               [24] 1152 	movx	@dptr,a
      000A99 90 F2 34         [24] 1153 	mov	dptr,#_calltx_PARM_3
      000A9C E5 08            [12] 1154 	mov	a,_call_sloc0_1_0
      000A9E F0               [24] 1155 	movx	@dptr,a
      000A9F E5 09            [12] 1156 	mov	a,(_call_sloc0_1_0 + 1)
      000AA1 A3               [24] 1157 	inc	dptr
      000AA2 F0               [24] 1158 	movx	@dptr,a
      000AA3 E5 0A            [12] 1159 	mov	a,(_call_sloc0_1_0 + 2)
      000AA5 A3               [24] 1160 	inc	dptr
      000AA6 F0               [24] 1161 	movx	@dptr,a
      000AA7 90 F2 37         [24] 1162 	mov	dptr,#_calltx_PARM_4
      000AAA EA               [12] 1163 	mov	a,r2
      000AAB F0               [24] 1164 	movx	@dptr,a
      000AAC EB               [12] 1165 	mov	a,r3
      000AAD A3               [24] 1166 	inc	dptr
      000AAE F0               [24] 1167 	movx	@dptr,a
      000AAF EC               [12] 1168 	mov	a,r4
      000AB0 A3               [24] 1169 	inc	dptr
      000AB1 F0               [24] 1170 	movx	@dptr,a
      000AB2 8D 82            [24] 1171 	mov	dpl,r5
      000AB4 8E 83            [24] 1172 	mov	dph,r6
      000AB6 8F F0            [24] 1173 	mov	b,r7
      000AB8 02 0D 17         [24] 1174 	ljmp	_calltx
                                   1175 ;	call.c:21: case Ttxrx:	calltxrx(c, state, waitflag, clearflag); break;
      000ABB                       1176 00104$:
      000ABB 90 F2 19         [24] 1177 	mov	dptr,#_call_PARM_2
      000ABE E0               [24] 1178 	movx	a,@dptr
      000ABF F5 0B            [12] 1179 	mov	_call_sloc1_1_0,a
      000AC1 A3               [24] 1180 	inc	dptr
      000AC2 E0               [24] 1181 	movx	a,@dptr
      000AC3 F5 0C            [12] 1182 	mov	(_call_sloc1_1_0 + 1),a
      000AC5 A3               [24] 1183 	inc	dptr
      000AC6 E0               [24] 1184 	movx	a,@dptr
      000AC7 F5 0D            [12] 1185 	mov	(_call_sloc1_1_0 + 2),a
      000AC9 90 F2 1C         [24] 1186 	mov	dptr,#_call_PARM_3
      000ACC E0               [24] 1187 	movx	a,@dptr
      000ACD F5 08            [12] 1188 	mov	_call_sloc0_1_0,a
      000ACF A3               [24] 1189 	inc	dptr
      000AD0 E0               [24] 1190 	movx	a,@dptr
      000AD1 F5 09            [12] 1191 	mov	(_call_sloc0_1_0 + 1),a
      000AD3 A3               [24] 1192 	inc	dptr
      000AD4 E0               [24] 1193 	movx	a,@dptr
      000AD5 F5 0A            [12] 1194 	mov	(_call_sloc0_1_0 + 2),a
      000AD7 90 F2 1F         [24] 1195 	mov	dptr,#_call_PARM_4
      000ADA E0               [24] 1196 	movx	a,@dptr
      000ADB FA               [12] 1197 	mov	r2,a
      000ADC A3               [24] 1198 	inc	dptr
      000ADD E0               [24] 1199 	movx	a,@dptr
      000ADE FB               [12] 1200 	mov	r3,a
      000ADF A3               [24] 1201 	inc	dptr
      000AE0 E0               [24] 1202 	movx	a,@dptr
      000AE1 FC               [12] 1203 	mov	r4,a
      000AE2 90 F2 3D         [24] 1204 	mov	dptr,#_calltxrx_PARM_2
      000AE5 E5 0B            [12] 1205 	mov	a,_call_sloc1_1_0
      000AE7 F0               [24] 1206 	movx	@dptr,a
      000AE8 E5 0C            [12] 1207 	mov	a,(_call_sloc1_1_0 + 1)
      000AEA A3               [24] 1208 	inc	dptr
      000AEB F0               [24] 1209 	movx	@dptr,a
      000AEC E5 0D            [12] 1210 	mov	a,(_call_sloc1_1_0 + 2)
      000AEE A3               [24] 1211 	inc	dptr
      000AEF F0               [24] 1212 	movx	@dptr,a
      000AF0 90 F2 40         [24] 1213 	mov	dptr,#_calltxrx_PARM_3
      000AF3 E5 08            [12] 1214 	mov	a,_call_sloc0_1_0
      000AF5 F0               [24] 1215 	movx	@dptr,a
      000AF6 E5 09            [12] 1216 	mov	a,(_call_sloc0_1_0 + 1)
      000AF8 A3               [24] 1217 	inc	dptr
      000AF9 F0               [24] 1218 	movx	@dptr,a
      000AFA E5 0A            [12] 1219 	mov	a,(_call_sloc0_1_0 + 2)
      000AFC A3               [24] 1220 	inc	dptr
      000AFD F0               [24] 1221 	movx	@dptr,a
      000AFE 90 F2 43         [24] 1222 	mov	dptr,#_calltxrx_PARM_4
      000B01 EA               [12] 1223 	mov	a,r2
      000B02 F0               [24] 1224 	movx	@dptr,a
      000B03 EB               [12] 1225 	mov	a,r3
      000B04 A3               [24] 1226 	inc	dptr
      000B05 F0               [24] 1227 	movx	@dptr,a
      000B06 EC               [12] 1228 	mov	a,r4
      000B07 A3               [24] 1229 	inc	dptr
      000B08 F0               [24] 1230 	movx	@dptr,a
      000B09 8D 82            [24] 1231 	mov	dpl,r5
      000B0B 8E 83            [24] 1232 	mov	dph,r6
      000B0D 8F F0            [24] 1233 	mov	b,r7
                                   1234 ;	call.c:22: case Tping:	callping(c, state, waitflag, clearflag); break;
      000B0F 02 0E B1         [24] 1235 	ljmp	_calltxrx
      000B12                       1236 00105$:
      000B12 90 F2 19         [24] 1237 	mov	dptr,#_call_PARM_2
      000B15 E0               [24] 1238 	movx	a,@dptr
      000B16 F5 0B            [12] 1239 	mov	_call_sloc1_1_0,a
      000B18 A3               [24] 1240 	inc	dptr
      000B19 E0               [24] 1241 	movx	a,@dptr
      000B1A F5 0C            [12] 1242 	mov	(_call_sloc1_1_0 + 1),a
      000B1C A3               [24] 1243 	inc	dptr
      000B1D E0               [24] 1244 	movx	a,@dptr
      000B1E F5 0D            [12] 1245 	mov	(_call_sloc1_1_0 + 2),a
      000B20 90 F2 1C         [24] 1246 	mov	dptr,#_call_PARM_3
      000B23 E0               [24] 1247 	movx	a,@dptr
      000B24 F5 08            [12] 1248 	mov	_call_sloc0_1_0,a
      000B26 A3               [24] 1249 	inc	dptr
      000B27 E0               [24] 1250 	movx	a,@dptr
      000B28 F5 09            [12] 1251 	mov	(_call_sloc0_1_0 + 1),a
      000B2A A3               [24] 1252 	inc	dptr
      000B2B E0               [24] 1253 	movx	a,@dptr
      000B2C F5 0A            [12] 1254 	mov	(_call_sloc0_1_0 + 2),a
      000B2E 90 F2 1F         [24] 1255 	mov	dptr,#_call_PARM_4
      000B31 E0               [24] 1256 	movx	a,@dptr
      000B32 FA               [12] 1257 	mov	r2,a
      000B33 A3               [24] 1258 	inc	dptr
      000B34 E0               [24] 1259 	movx	a,@dptr
      000B35 FB               [12] 1260 	mov	r3,a
      000B36 A3               [24] 1261 	inc	dptr
      000B37 E0               [24] 1262 	movx	a,@dptr
      000B38 FC               [12] 1263 	mov	r4,a
      000B39 90 F2 49         [24] 1264 	mov	dptr,#_callping_PARM_2
      000B3C E5 0B            [12] 1265 	mov	a,_call_sloc1_1_0
      000B3E F0               [24] 1266 	movx	@dptr,a
      000B3F E5 0C            [12] 1267 	mov	a,(_call_sloc1_1_0 + 1)
      000B41 A3               [24] 1268 	inc	dptr
      000B42 F0               [24] 1269 	movx	@dptr,a
      000B43 E5 0D            [12] 1270 	mov	a,(_call_sloc1_1_0 + 2)
      000B45 A3               [24] 1271 	inc	dptr
      000B46 F0               [24] 1272 	movx	@dptr,a
      000B47 90 F2 4C         [24] 1273 	mov	dptr,#_callping_PARM_3
      000B4A E5 08            [12] 1274 	mov	a,_call_sloc0_1_0
      000B4C F0               [24] 1275 	movx	@dptr,a
      000B4D E5 09            [12] 1276 	mov	a,(_call_sloc0_1_0 + 1)
      000B4F A3               [24] 1277 	inc	dptr
      000B50 F0               [24] 1278 	movx	@dptr,a
      000B51 E5 0A            [12] 1279 	mov	a,(_call_sloc0_1_0 + 2)
      000B53 A3               [24] 1280 	inc	dptr
      000B54 F0               [24] 1281 	movx	@dptr,a
      000B55 90 F2 4F         [24] 1282 	mov	dptr,#_callping_PARM_4
      000B58 EA               [12] 1283 	mov	a,r2
      000B59 F0               [24] 1284 	movx	@dptr,a
      000B5A EB               [12] 1285 	mov	a,r3
      000B5B A3               [24] 1286 	inc	dptr
      000B5C F0               [24] 1287 	movx	@dptr,a
      000B5D EC               [12] 1288 	mov	a,r4
      000B5E A3               [24] 1289 	inc	dptr
      000B5F F0               [24] 1290 	movx	@dptr,a
      000B60 8D 82            [24] 1291 	mov	dpl,r5
      000B62 8E 83            [24] 1292 	mov	dph,r6
      000B64 8F F0            [24] 1293 	mov	b,r7
                                   1294 ;	call.c:23: }
      000B66 02 11 4B         [24] 1295 	ljmp	_callping
                                   1296 	.area CSEG    (CODE)
                                   1297 	.area CONST   (CODE)
                                   1298 	.area XINIT   (CODE)
                                   1299 	.area CABS    (ABS,CODE)
