                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 14:33:05 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module u
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _abort
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
                                    438 ;--------------------------------------------------------
                                    439 ; special function registers
                                    440 ;--------------------------------------------------------
                                    441 	.area RSEG    (ABS,DATA)
      000000                        442 	.org 0x0000
                           000080   443 _P0	=	0x0080
                           000081   444 _SP	=	0x0081
                           000082   445 _DPL0	=	0x0082
                           000083   446 _DPH0	=	0x0083
                           000084   447 _DPL1	=	0x0084
                           000085   448 _DPH1	=	0x0085
                           000086   449 _U0CSR	=	0x0086
                           000087   450 _PCON	=	0x0087
                           000088   451 _TCON	=	0x0088
                           000089   452 _P0IFG	=	0x0089
                           00008A   453 _P1IFG	=	0x008a
                           00008B   454 _P2IFG	=	0x008b
                           00008C   455 _PICTL	=	0x008c
                           00008D   456 _P1IEN	=	0x008d
                           00008E   457 __SFR8E	=	0x008e
                           00008F   458 _P0INP	=	0x008f
                           000090   459 _P1	=	0x0090
                           000091   460 _RFIM	=	0x0091
                           000092   461 _DPS	=	0x0092
                           000093   462 _MPAGE	=	0x0093
                           000093   463 __XPAGE	=	0x0093
                           000094   464 __SFR94	=	0x0094
                           000095   465 __SFR95	=	0x0095
                           000096   466 __SFR96	=	0x0096
                           000097   467 __SFR97	=	0x0097
                           000098   468 _S0CON	=	0x0098
                           000099   469 __SFR99	=	0x0099
                           00009A   470 _IEN2	=	0x009a
                           00009B   471 _S1CON	=	0x009b
                           00009C   472 _T2CT	=	0x009c
                           00009D   473 _T2PR	=	0x009d
                           00009E   474 _T2CTL	=	0x009e
                           00009F   475 __SFR9F	=	0x009f
                           0000A0   476 _P2	=	0x00a0
                           0000A1   477 _WORIRQ	=	0x00a1
                           0000A2   478 _WORCTRL	=	0x00a2
                           0000A3   479 _WOREVT0	=	0x00a3
                           0000A4   480 _WOREVT1	=	0x00a4
                           0000A5   481 _WORTIME0	=	0x00a5
                           0000A6   482 _WORTIME1	=	0x00a6
                           0000A7   483 __SFRA7	=	0x00a7
                           0000A8   484 _IEN0	=	0x00a8
                           0000A9   485 _IP0	=	0x00a9
                           0000AA   486 __SFRAA	=	0x00aa
                           0000AB   487 _FWT	=	0x00ab
                           0000AC   488 _FADDRL	=	0x00ac
                           0000AD   489 _FADDRH	=	0x00ad
                           0000AE   490 _FCTL	=	0x00ae
                           0000AF   491 _FWDATA	=	0x00af
                           0000B0   492 __SFRB0	=	0x00b0
                           0000B1   493 _ENCDI	=	0x00b1
                           0000B2   494 _ENCDO	=	0x00b2
                           0000B3   495 _ENCCS	=	0x00b3
                           0000B4   496 _ADCCON1	=	0x00b4
                           0000B5   497 _ADCCON2	=	0x00b5
                           0000B6   498 _ADCCON3	=	0x00b6
                           0000B7   499 __SFRB7	=	0x00b7
                           0000B8   500 _IEN1	=	0x00b8
                           0000B9   501 _IP1	=	0x00b9
                           0000BA   502 _ADCL	=	0x00ba
                           0000BB   503 _ADCH	=	0x00bb
                           0000BC   504 _RNDL	=	0x00bc
                           0000BD   505 _RNDH	=	0x00bd
                           0000BE   506 _SLEEP	=	0x00be
                           0000BF   507 __SFRBF	=	0x00bf
                           0000C0   508 _IRCON	=	0x00c0
                           0000C1   509 _U0DBUF	=	0x00c1
                           0000C2   510 _U0BAUD	=	0x00c2
                           0000C3   511 __SFRC3	=	0x00c3
                           0000C4   512 _U0UCR	=	0x00c4
                           0000C5   513 _U0GCR	=	0x00c5
                           0000C6   514 _CLKCON	=	0x00c6
                           0000C7   515 _MEMCTR	=	0x00c7
                           0000C8   516 __SFRC8	=	0x00c8
                           0000C9   517 _WDCTL	=	0x00c9
                           0000CA   518 _T3CNT	=	0x00ca
                           0000CB   519 _T3CTL	=	0x00cb
                           0000CC   520 _T3CCTL0	=	0x00cc
                           0000CD   521 _T3CC0	=	0x00cd
                           0000CE   522 _T3CCTL1	=	0x00ce
                           0000CF   523 _T3CC1	=	0x00cf
                           0000D0   524 _PSW	=	0x00d0
                           0000D1   525 _DMAIRQ	=	0x00d1
                           0000D2   526 _DMA1CFGL	=	0x00d2
                           0000D3   527 _DMA1CFGH	=	0x00d3
                           0000D4   528 _DMA0CFGL	=	0x00d4
                           0000D5   529 _DMA0CFGH	=	0x00d5
                           0000D6   530 _DMAARM	=	0x00d6
                           0000D7   531 _DMAREQ	=	0x00d7
                           0000D8   532 _TIMIF	=	0x00d8
                           0000D9   533 _RFD	=	0x00d9
                           0000DA   534 _T1CC0L	=	0x00da
                           0000DB   535 _T1CC0H	=	0x00db
                           0000DC   536 _T1CC1L	=	0x00dc
                           0000DD   537 _T1CC1H	=	0x00dd
                           0000DE   538 _T1CC2L	=	0x00de
                           0000DF   539 _T1CC2H	=	0x00df
                           0000E0   540 _ACC	=	0x00e0
                           0000E1   541 _RFST	=	0x00e1
                           0000E2   542 _T1CNTL	=	0x00e2
                           0000E3   543 _T1CNTH	=	0x00e3
                           0000E4   544 _T1CTL	=	0x00e4
                           0000E5   545 _T1CCTL0	=	0x00e5
                           0000E6   546 _T1CCTL1	=	0x00e6
                           0000E7   547 _T1CCTL2	=	0x00e7
                           0000E8   548 _IRCON2	=	0x00e8
                           0000E9   549 _RFIF	=	0x00e9
                           0000EA   550 _T4CNT	=	0x00ea
                           0000EB   551 _T4CTL	=	0x00eb
                           0000EC   552 _T4CCTL0	=	0x00ec
                           0000ED   553 _T4CC0	=	0x00ed
                           0000EE   554 _T4CCTL1	=	0x00ee
                           0000EF   555 _T4CC1	=	0x00ef
                           0000F0   556 _B	=	0x00f0
                           0000F1   557 _PERCFG	=	0x00f1
                           0000F2   558 _ADCCFG	=	0x00f2
                           0000F3   559 _P0SEL	=	0x00f3
                           0000F4   560 _P1SEL	=	0x00f4
                           0000F5   561 _P2SEL	=	0x00f5
                           0000F6   562 _P1INP	=	0x00f6
                           0000F7   563 _P2INP	=	0x00f7
                           0000F8   564 _U1CSR	=	0x00f8
                           0000F9   565 _U1DBUF	=	0x00f9
                           0000FA   566 _U1BAUD	=	0x00fa
                           0000FB   567 _U1UCR	=	0x00fb
                           0000FC   568 _U1GCR	=	0x00fc
                           0000FD   569 _P0DIR	=	0x00fd
                           0000FE   570 _P1DIR	=	0x00fe
                           0000FF   571 _P2DIR	=	0x00ff
                                    572 ;--------------------------------------------------------
                                    573 ; special function bits
                                    574 ;--------------------------------------------------------
                                    575 	.area RSEG    (ABS,DATA)
      000000                        576 	.org 0x0000
                           000080   577 _P0_0	=	0x0080
                           000081   578 _P0_1	=	0x0081
                           000082   579 _P0_2	=	0x0082
                           000083   580 _P0_3	=	0x0083
                           000084   581 _P0_4	=	0x0084
                           000085   582 _P0_5	=	0x0085
                           000086   583 _P0_6	=	0x0086
                           000087   584 _P0_7	=	0x0087
                           000088   585 _IT0	=	0x0088
                           000089   586 _RFTXRXIF	=	0x0089
                           00008A   587 _IT1	=	0x008a
                           00008B   588 _URX0IF	=	0x008b
                           00008D   589 _ADCIF	=	0x008d
                           00008F   590 _URX1IF	=	0x008f
                           000090   591 _P1_0	=	0x0090
                           000091   592 _P1_1	=	0x0091
                           000092   593 _P1_2	=	0x0092
                           000093   594 _P1_3	=	0x0093
                           000094   595 _P1_4	=	0x0094
                           000095   596 _P1_5	=	0x0095
                           000096   597 _P1_6	=	0x0096
                           000097   598 _P1_7	=	0x0097
                           000098   599 _ENCIF_0	=	0x0098
                           000099   600 _ENCIF_1	=	0x0099
                           0000A0   601 _P2_0	=	0x00a0
                           0000A1   602 _P2_1	=	0x00a1
                           0000A2   603 _P2_2	=	0x00a2
                           0000A3   604 _P2_3	=	0x00a3
                           0000A4   605 _P2_4	=	0x00a4
                           0000A5   606 _P2_5	=	0x00a5
                           0000A6   607 _P2_6	=	0x00a6
                           0000A7   608 _P2_7	=	0x00a7
                           0000A8   609 _RFTXRXIE	=	0x00a8
                           0000A9   610 _ADCIE	=	0x00a9
                           0000AA   611 _URX0IE	=	0x00aa
                           0000AB   612 _URX1IE	=	0x00ab
                           0000AC   613 _ENCIE	=	0x00ac
                           0000AD   614 _STIE	=	0x00ad
                           0000AF   615 _EA	=	0x00af
                           0000B8   616 _DMAIE	=	0x00b8
                           0000B9   617 _T1IE	=	0x00b9
                           0000BA   618 _T2IE	=	0x00ba
                           0000BB   619 _T3IE	=	0x00bb
                           0000BC   620 _T4IE	=	0x00bc
                           0000BD   621 _P0IE	=	0x00bd
                           0000C0   622 _DMAIF	=	0x00c0
                           0000C1   623 _T1IF	=	0x00c1
                           0000C2   624 _T2IF	=	0x00c2
                           0000C3   625 _T3IF	=	0x00c3
                           0000C4   626 _T4IF	=	0x00c4
                           0000C5   627 _P0IF	=	0x00c5
                           0000C7   628 _STIF	=	0x00c7
                           0000D0   629 _P	=	0x00d0
                           0000D1   630 _F1	=	0x00d1
                           0000D2   631 _OV	=	0x00d2
                           0000D3   632 _RS0	=	0x00d3
                           0000D4   633 _RS1	=	0x00d4
                           0000D5   634 _F0	=	0x00d5
                           0000D6   635 _AC	=	0x00d6
                           0000D7   636 _CY	=	0x00d7
                           0000D8   637 _T3OVFIF	=	0x00d8
                           0000D9   638 _T3CH0IF	=	0x00d9
                           0000DA   639 _T3CH1IF	=	0x00da
                           0000DB   640 _T4OVFIF	=	0x00db
                           0000DC   641 _T4CH0IF	=	0x00dc
                           0000DD   642 _T4CH1IF	=	0x00dd
                           0000DE   643 _OVFIM	=	0x00de
                           0000E0   644 _ACC_0	=	0x00e0
                           0000E1   645 _ACC_1	=	0x00e1
                           0000E2   646 _ACC_2	=	0x00e2
                           0000E3   647 _ACC_3	=	0x00e3
                           0000E4   648 _ACC_4	=	0x00e4
                           0000E5   649 _ACC_5	=	0x00e5
                           0000E6   650 _ACC_6	=	0x00e6
                           0000E7   651 _ACC_7	=	0x00e7
                           0000E8   652 _P2IF	=	0x00e8
                           0000E9   653 _UTX0IF	=	0x00e9
                           0000EA   654 _UTX1IF	=	0x00ea
                           0000EB   655 _P1IF	=	0x00eb
                           0000EC   656 _WDTIF	=	0x00ec
                           0000F0   657 _B_0	=	0x00f0
                           0000F1   658 _B_1	=	0x00f1
                           0000F2   659 _B_2	=	0x00f2
                           0000F3   660 _B_3	=	0x00f3
                           0000F4   661 _B_4	=	0x00f4
                           0000F5   662 _B_5	=	0x00f5
                           0000F6   663 _B_6	=	0x00f6
                           0000F7   664 _B_7	=	0x00f7
                           0000F8   665 _ACTIVE	=	0x00f8
                           0000F9   666 _TX_BYTE	=	0x00f9
                           0000FA   667 _RX_BYTE	=	0x00fa
                           0000FB   668 _ERR	=	0x00fb
                           0000FC   669 _FE	=	0x00fc
                           0000FD   670 _SLAVE	=	0x00fd
                           0000FE   671 _RE	=	0x00fe
                           0000FF   672 _MODE	=	0x00ff
                                    673 ;--------------------------------------------------------
                                    674 ; overlayable register banks
                                    675 ;--------------------------------------------------------
                                    676 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        677 	.ds 8
                                    678 ;--------------------------------------------------------
                                    679 ; internal ram data
                                    680 ;--------------------------------------------------------
                                    681 	.area DSEG    (DATA)
                                    682 ;--------------------------------------------------------
                                    683 ; overlayable items in internal ram 
                                    684 ;--------------------------------------------------------
                                    685 ;--------------------------------------------------------
                                    686 ; indirectly addressable internal ram data
                                    687 ;--------------------------------------------------------
                                    688 	.area ISEG    (DATA)
                                    689 ;--------------------------------------------------------
                                    690 ; absolute internal ram data
                                    691 ;--------------------------------------------------------
                                    692 	.area IABS    (ABS,DATA)
                                    693 	.area IABS    (ABS,DATA)
                                    694 ;--------------------------------------------------------
                                    695 ; bit data
                                    696 ;--------------------------------------------------------
                                    697 	.area BSEG    (BIT)
                                    698 ;--------------------------------------------------------
                                    699 ; paged external ram data
                                    700 ;--------------------------------------------------------
                                    701 	.area PSEG    (PAG,XDATA)
                                    702 ;--------------------------------------------------------
                                    703 ; external ram data
                                    704 ;--------------------------------------------------------
                                    705 	.area XSEG    (XDATA)
                           00DF02   706 _MDMCTRL0H	=	0xdf02
                           00DF00   707 _SYNC1	=	0xdf00
                           00DF01   708 _SYNC0	=	0xdf01
                           00DF02   709 _PKTLEN	=	0xdf02
                           00DF03   710 _PKTCTRL1	=	0xdf03
                           00DF04   711 _PKTCTRL0	=	0xdf04
                           00DF05   712 _ADDR	=	0xdf05
                           00DF06   713 _CHANNR	=	0xdf06
                           00DF07   714 _FSCTRL1	=	0xdf07
                           00DF08   715 _FSCTRL0	=	0xdf08
                           00DF09   716 _FREQ2	=	0xdf09
                           00DF0A   717 _FREQ1	=	0xdf0a
                           00DF0B   718 _FREQ0	=	0xdf0b
                           00DF0C   719 _MDMCFG4	=	0xdf0c
                           00DF0D   720 _MDMCFG3	=	0xdf0d
                           00DF0E   721 _MDMCFG2	=	0xdf0e
                           00DF0F   722 _MDMCFG1	=	0xdf0f
                           00DF10   723 _MDMCFG0	=	0xdf10
                           00DF11   724 _DEVIATN	=	0xdf11
                           00DF12   725 _MCSM2	=	0xdf12
                           00DF13   726 _MCSM1	=	0xdf13
                           00DF14   727 _MCSM0	=	0xdf14
                           00DF15   728 _FOCCFG	=	0xdf15
                           00DF16   729 _BSCFG	=	0xdf16
                           00DF17   730 _AGCCTRL2	=	0xdf17
                           00DF18   731 _AGCCTRL1	=	0xdf18
                           00DF19   732 _AGCCTRL0	=	0xdf19
                           00DF1A   733 _FREND1	=	0xdf1a
                           00DF1B   734 _FREND0	=	0xdf1b
                           00DF1C   735 _FSCAL3	=	0xdf1c
                           00DF1D   736 _FSCAL2	=	0xdf1d
                           00DF1E   737 _FSCAL1	=	0xdf1e
                           00DF1F   738 _FSCAL0	=	0xdf1f
                           00DF20   739 __XREGDF20	=	0xdf20
                           00DF21   740 __XREGDF21	=	0xdf21
                           00DF22   741 __XREGDF22	=	0xdf22
                           00DF23   742 _TEST2	=	0xdf23
                           00DF24   743 _TEST1	=	0xdf24
                           00DF25   744 _TEST0	=	0xdf25
                           00DF26   745 __XREGDF26	=	0xdf26
                           00DF27   746 _PA_TABLE7	=	0xdf27
                           00DF28   747 _PA_TABLE6	=	0xdf28
                           00DF29   748 _PA_TABLE5	=	0xdf29
                           00DF2A   749 _PA_TABLE4	=	0xdf2a
                           00DF2B   750 _PA_TABLE3	=	0xdf2b
                           00DF2C   751 _PA_TABLE2	=	0xdf2c
                           00DF2D   752 _PA_TABLE1	=	0xdf2d
                           00DF2E   753 _PA_TABLE0	=	0xdf2e
                           00DF2F   754 _IOCFG2	=	0xdf2f
                           00DF30   755 _IOCFG1	=	0xdf30
                           00DF31   756 _IOCFG0	=	0xdf31
                           00DF32   757 __XREGDF32	=	0xdf32
                           00DF33   758 __XREGDF33	=	0xdf33
                           00DF34   759 __XREGDF34	=	0xdf34
                           00DF35   760 __XREGDF35	=	0xdf35
                           00DF36   761 _PARTNUM	=	0xdf36
                           00DF37   762 _VERSION	=	0xdf37
                           00DF38   763 _FREQEST	=	0xdf38
                           00DF39   764 _LQI	=	0xdf39
                           00DF3A   765 _RSSI	=	0xdf3a
                           00DF3B   766 _MARCSTATE	=	0xdf3b
                           00DF3C   767 _PKTSTATUS	=	0xdf3c
                           00DF3D   768 _VCO_VC_DAC	=	0xdf3d
                           00DF40   769 _I2SCFG0	=	0xdf40
                           00DF41   770 _I2SCFG1	=	0xdf41
                           00DF42   771 _I2SDATL	=	0xdf42
                           00DF43   772 _I2SDATH	=	0xdf43
                           00DF44   773 _I2SWCNT	=	0xdf44
                           00DF45   774 _I2SSTAT	=	0xdf45
                           00DF46   775 _I2SCLKF0	=	0xdf46
                           00DF47   776 _I2SCLKF1	=	0xdf47
                           00DF48   777 _I2SCLKF2	=	0xdf48
                           00DF80   778 __NA_P0	=	0xdf80
                           00DF81   779 __NA_SP	=	0xdf81
                           00DF82   780 __NA_DPL0	=	0xdf82
                           00DF83   781 __NA_DPH0	=	0xdf83
                           00DF84   782 __NA_DPL1	=	0xdf84
                           00DF85   783 __NA_DPH1	=	0xdf85
                           00DF86   784 _X_U0CSR	=	0xdf86
                           00DF87   785 __NA_PCON	=	0xdf87
                           00DF88   786 __NA_TCON	=	0xdf88
                           00DF89   787 _X_P0IFG	=	0xdf89
                           00DF8A   788 _X_P1IFG	=	0xdf8a
                           00DF8B   789 _X_P2IFG	=	0xdf8b
                           00DF8C   790 _X_PICTL	=	0xdf8c
                           00DF8D   791 _X_P1IEN	=	0xdf8d
                           00DF8E   792 __X_SFR8E	=	0xdf8e
                           00DF8F   793 _X_P0INP	=	0xdf8f
                           00DF90   794 __NA_P1	=	0xdf90
                           00DF91   795 _X_RFIM	=	0xdf91
                           00DF92   796 __NA_DPS	=	0xdf92
                           00DF93   797 _X_MPAGE	=	0xdf93
                           00DF94   798 __X_SFR94	=	0xdf94
                           00DF95   799 __X_SFR95	=	0xdf95
                           00DF96   800 __X_SFR96	=	0xdf96
                           00DF97   801 __X_SFR97	=	0xdf97
                           00DF98   802 __NA_S0CON	=	0xdf98
                           00DF99   803 __X_SFR99	=	0xdf99
                           00DF9A   804 __NA_IEN2	=	0xdf9a
                           00DF9B   805 __NA_S1CON	=	0xdf9b
                           00DF9C   806 _X_T2CT	=	0xdf9c
                           00DF9D   807 _X_T2PR	=	0xdf9d
                           00DF9E   808 _X_T2CTL	=	0xdf9e
                           00DF9F   809 __X_SFR9F	=	0xdf9f
                           00DFA0   810 __NA_P2	=	0xdfa0
                           00DFA1   811 _X_WORIRQ	=	0xdfa1
                           00DFA2   812 _X_WORCTRL	=	0xdfa2
                           00DFA3   813 _X_WOREVT0	=	0xdfa3
                           00DFA4   814 _X_WOREVT1	=	0xdfa4
                           00DFA5   815 _X_WORTIME0	=	0xdfa5
                           00DFA6   816 _X_WORTIME1	=	0xdfa6
                           00DFA7   817 __X_SFRA7	=	0xdfa7
                           00DFA8   818 __NA_IEN0	=	0xdfa8
                           00DFA9   819 __NA_IP0	=	0xdfa9
                           00DFAA   820 __X_SFRAA	=	0xdfaa
                           00DFAB   821 _X_FWT	=	0xdfab
                           00DFAC   822 _X_FADDRL	=	0xdfac
                           00DFAD   823 _X_FADDRH	=	0xdfad
                           00DFAE   824 _X_FCTL	=	0xdfae
                           00DFAF   825 _X_FWDATA	=	0xdfaf
                           00DFB0   826 __X_SFRB0	=	0xdfb0
                           00DFB1   827 _X_ENCDI	=	0xdfb1
                           00DFB2   828 _X_ENCDO	=	0xdfb2
                           00DFB3   829 _X_ENCCS	=	0xdfb3
                           00DFB4   830 _X_ADCCON1	=	0xdfb4
                           00DFB5   831 _X_ADCCON2	=	0xdfb5
                           00DFB6   832 _X_ADCCON3	=	0xdfb6
                           00DFB7   833 __X_SFRB7	=	0xdfb7
                           00DFB8   834 __NA_IEN1	=	0xdfb8
                           00DFB9   835 __NA_IP1	=	0xdfb9
                           00DFBA   836 _X_ADCL	=	0xdfba
                           00DFBB   837 _X_ADCH	=	0xdfbb
                           00DFBC   838 _X_RNDL	=	0xdfbc
                           00DFBD   839 _X_RNDH	=	0xdfbd
                           00DFBE   840 _X_SLEEP	=	0xdfbe
                           00DFBF   841 __X_SFRBF	=	0xdfbf
                           00DFC0   842 __NA_IRCON	=	0xdfc0
                           00DFC1   843 _X_U0DBUF	=	0xdfc1
                           00DFC2   844 _X_U0BAUD	=	0xdfc2
                           00DFC3   845 __X_SFRC3	=	0xdfc3
                           00DFC4   846 _X_U0UCR	=	0xdfc4
                           00DFC5   847 _X_U0GCR	=	0xdfc5
                           00DFC6   848 _X_CLKCON	=	0xdfc6
                           00DFC7   849 _X_MEMCTR	=	0xdfc7
                           00DFC8   850 __X_SFRC8	=	0xdfc8
                           00DFC9   851 _X_WDCTL	=	0xdfc9
                           00DFCA   852 _X_T3CNT	=	0xdfca
                           00DFCB   853 _X_T3CTL	=	0xdfcb
                           00DFCC   854 _X_T3CCTL0	=	0xdfcc
                           00DFCD   855 _X_T3CC0	=	0xdfcd
                           00DFCE   856 _X_T3CCTL1	=	0xdfce
                           00DFCF   857 _X_T3CC1	=	0xdfcf
                           00DFD0   858 __NA_PSW	=	0xdfd0
                           00DFD1   859 _X_DMAIRQ	=	0xdfd1
                           00DFD2   860 _X_DMA1CFGL	=	0xdfd2
                           00DFD3   861 _X_DMA1CFGH	=	0xdfd3
                           00DFD4   862 _X_DMA0CFGL	=	0xdfd4
                           00DFD5   863 _X_DMA0CFGH	=	0xdfd5
                           00DFD6   864 _X_DMAARM	=	0xdfd6
                           00DFD7   865 _X_DMAREQ	=	0xdfd7
                           00DFD8   866 _X_TIMIF	=	0xdfd8
                           00DFD9   867 _X_RFD	=	0xdfd9
                           00DFDA   868 _X_T1CC0L	=	0xdfda
                           00DFDB   869 _X_T1CC0H	=	0xdfdb
                           00DFDC   870 _X_T1CC1L	=	0xdfdc
                           00DFDD   871 _X_T1CC1H	=	0xdfdd
                           00DFDE   872 _X_T1CC2L	=	0xdfde
                           00DFDF   873 _X_T1CC2H	=	0xdfdf
                           00DFE0   874 __NA_ACC	=	0xdfe0
                           00DFE1   875 _X_RFST	=	0xdfe1
                           00DFE2   876 _X_T1CNTL	=	0xdfe2
                           00DFE3   877 _X_T1CNTH	=	0xdfe3
                           00DFE4   878 _X_T1CTL	=	0xdfe4
                           00DFE5   879 _X_T1CCTL0	=	0xdfe5
                           00DFE6   880 _X_T1CCTL1	=	0xdfe6
                           00DFE7   881 _X_T1CCTL2	=	0xdfe7
                           00DFE8   882 __NA_IRCON2	=	0xdfe8
                           00DFE9   883 _X_RFIF	=	0xdfe9
                           00DFEA   884 _X_T4CNT	=	0xdfea
                           00DFEB   885 _X_T4CTL	=	0xdfeb
                           00DFEC   886 _X_T4CCTL0	=	0xdfec
                           00DFED   887 _X_T4CC0	=	0xdfed
                           00DFEE   888 _X_T4CCTL1	=	0xdfee
                           00DFEF   889 _X_T4CC1	=	0xdfef
                           00DFF0   890 __NA_B	=	0xdff0
                           00DFF1   891 _X_PERCFG	=	0xdff1
                           00DFF2   892 _X_ADCCFG	=	0xdff2
                           00DFF3   893 _X_P0SEL	=	0xdff3
                           00DFF4   894 _X_P1SEL	=	0xdff4
                           00DFF5   895 _X_P2SEL	=	0xdff5
                           00DFF6   896 _X_P1INP	=	0xdff6
                           00DFF7   897 _X_P2INP	=	0xdff7
                           00DFF8   898 _X_U1CSR	=	0xdff8
                           00DFF9   899 _X_U1DBUF	=	0xdff9
                           00DFFA   900 _X_U1BAUD	=	0xdffa
                           00DFFB   901 _X_U1UCR	=	0xdffb
                           00DFFC   902 _X_U1GCR	=	0xdffc
                           00DFFD   903 _X_P0DIR	=	0xdffd
                           00DFFE   904 _X_P1DIR	=	0xdffe
                           00DFFF   905 _X_P2DIR	=	0xdfff
                                    906 ;--------------------------------------------------------
                                    907 ; absolute external ram data
                                    908 ;--------------------------------------------------------
                                    909 	.area XABS    (ABS,XDATA)
                                    910 ;--------------------------------------------------------
                                    911 ; external initialized ram data
                                    912 ;--------------------------------------------------------
                                    913 	.area XISEG   (XDATA)
                                    914 	.area HOME    (CODE)
                                    915 	.area GSINIT0 (CODE)
                                    916 	.area GSINIT1 (CODE)
                                    917 	.area GSINIT2 (CODE)
                                    918 	.area GSINIT3 (CODE)
                                    919 	.area GSINIT4 (CODE)
                                    920 	.area GSINIT5 (CODE)
                                    921 	.area GSINIT  (CODE)
                                    922 	.area GSFINAL (CODE)
                                    923 	.area CSEG    (CODE)
                                    924 ;--------------------------------------------------------
                                    925 ; global & static initialisations
                                    926 ;--------------------------------------------------------
                                    927 	.area HOME    (CODE)
                                    928 	.area GSINIT  (CODE)
                                    929 	.area GSFINAL (CODE)
                                    930 	.area GSINIT  (CODE)
                                    931 ;--------------------------------------------------------
                                    932 ; Home
                                    933 ;--------------------------------------------------------
                                    934 	.area HOME    (CODE)
                                    935 	.area HOME    (CODE)
                                    936 ;--------------------------------------------------------
                                    937 ; code
                                    938 ;--------------------------------------------------------
                                    939 	.area CSEG    (CODE)
                                    940 ;------------------------------------------------------------
                                    941 ;Allocation info for local variables in function 'abort'
                                    942 ;------------------------------------------------------------
                                    943 ;	u.c:6: abort()
                                    944 ;	-----------------------------------------
                                    945 ;	 function abort
                                    946 ;	-----------------------------------------
      001315                        947 _abort:
                           000007   948 	ar7 = 0x07
                           000006   949 	ar6 = 0x06
                           000005   950 	ar5 = 0x05
                           000004   951 	ar4 = 0x04
                           000003   952 	ar3 = 0x03
                           000002   953 	ar2 = 0x02
                           000001   954 	ar1 = 0x01
                           000000   955 	ar0 = 0x00
                                    956 ;	u.c:8: flag |= Fpanic;
      001315 90 F0 00         [24]  957 	mov	dptr,#_flag
      001318 E0               [24]  958 	movx	a,@dptr
      001319 FF               [12]  959 	mov	r7,a
      00131A 74 40            [12]  960 	mov	a,#0x40
      00131C 4F               [12]  961 	orl	a,r7
      00131D F0               [24]  962 	movx	@dptr,a
      00131E 22               [24]  963 	ret
                                    964 	.area CSEG    (CODE)
                                    965 	.area CONST   (CODE)
                                    966 	.area XINIT   (CODE)
                                    967 	.area CABS    (ABS,CODE)
