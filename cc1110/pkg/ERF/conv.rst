                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 14:33:05 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module conv
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _memcpy
                                     13 	.globl _convR2M_PARM_3
                                     14 	.globl _convR2M_PARM_2
                                     15 	.globl _convM2R_PARM_3
                                     16 	.globl _convM2R_PARM_2
                                     17 	.globl _convM2R
                                     18 	.globl _convR2M
                                     19 ;--------------------------------------------------------
                                     20 ; special function registers
                                     21 ;--------------------------------------------------------
                                     22 	.area RSEG    (ABS,DATA)
      000000                         23 	.org 0x0000
                                     24 ;--------------------------------------------------------
                                     25 ; special function bits
                                     26 ;--------------------------------------------------------
                                     27 	.area RSEG    (ABS,DATA)
      000000                         28 	.org 0x0000
                                     29 ;--------------------------------------------------------
                                     30 ; overlayable register banks
                                     31 ;--------------------------------------------------------
                                     32 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                         33 	.ds 8
                                     34 ;--------------------------------------------------------
                                     35 ; internal ram data
                                     36 ;--------------------------------------------------------
                                     37 	.area DSEG    (DATA)
      000021                         38 _convM2R_sloc0_1_0:
      000021                         39 	.ds 3
      000024                         40 _convM2R_sloc1_1_0:
      000024                         41 	.ds 2
      000026                         42 _convM2R_sloc2_1_0:
      000026                         43 	.ds 3
      000029                         44 _convR2M_sloc0_1_0:
      000029                         45 	.ds 3
      00002C                         46 _convR2M_sloc1_1_0:
      00002C                         47 	.ds 3
      00002F                         48 _convR2M_sloc2_1_0:
      00002F                         49 	.ds 1
      000030                         50 _convR2M_sloc3_1_0:
      000030                         51 	.ds 3
      000033                         52 _convR2M_sloc4_1_0:
      000033                         53 	.ds 3
                                     54 ;--------------------------------------------------------
                                     55 ; overlayable items in internal ram 
                                     56 ;--------------------------------------------------------
                                     57 ;--------------------------------------------------------
                                     58 ; indirectly addressable internal ram data
                                     59 ;--------------------------------------------------------
                                     60 	.area ISEG    (DATA)
                                     61 ;--------------------------------------------------------
                                     62 ; absolute internal ram data
                                     63 ;--------------------------------------------------------
                                     64 	.area IABS    (ABS,DATA)
                                     65 	.area IABS    (ABS,DATA)
                                     66 ;--------------------------------------------------------
                                     67 ; bit data
                                     68 ;--------------------------------------------------------
                                     69 	.area BSEG    (BIT)
                                     70 ;--------------------------------------------------------
                                     71 ; paged external ram data
                                     72 ;--------------------------------------------------------
                                     73 	.area PSEG    (PAG,XDATA)
                                     74 ;--------------------------------------------------------
                                     75 ; external ram data
                                     76 ;--------------------------------------------------------
                                     77 	.area XSEG    (XDATA)
      00F265                         78 _convM2R_PARM_2:
      00F265                         79 	.ds 1
      00F266                         80 _convM2R_PARM_3:
      00F266                         81 	.ds 3
      00F269                         82 _convM2R_p_1_113:
      00F269                         83 	.ds 3
      00F26C                         84 _convM2R_size_1_114:
      00F26C                         85 	.ds 1
      00F26D                         86 _convR2M_PARM_2:
      00F26D                         87 	.ds 3
      00F270                         88 _convR2M_PARM_3:
      00F270                         89 	.ds 1
      00F271                         90 _convR2M_r_1_116:
      00F271                         91 	.ds 3
      00F274                         92 _convR2M_p_1_117:
      00F274                         93 	.ds 3
      00F277                         94 _convR2M_size_1_117:
      00F277                         95 	.ds 1
                                     96 ;--------------------------------------------------------
                                     97 ; absolute external ram data
                                     98 ;--------------------------------------------------------
                                     99 	.area XABS    (ABS,XDATA)
                                    100 ;--------------------------------------------------------
                                    101 ; external initialized ram data
                                    102 ;--------------------------------------------------------
                                    103 	.area XISEG   (XDATA)
                                    104 	.area HOME    (CODE)
                                    105 	.area GSINIT0 (CODE)
                                    106 	.area GSINIT1 (CODE)
                                    107 	.area GSINIT2 (CODE)
                                    108 	.area GSINIT3 (CODE)
                                    109 	.area GSINIT4 (CODE)
                                    110 	.area GSINIT5 (CODE)
                                    111 	.area GSINIT  (CODE)
                                    112 	.area GSFINAL (CODE)
                                    113 	.area CSEG    (CODE)
                                    114 ;--------------------------------------------------------
                                    115 ; global & static initialisations
                                    116 ;--------------------------------------------------------
                                    117 	.area HOME    (CODE)
                                    118 	.area GSINIT  (CODE)
                                    119 	.area GSFINAL (CODE)
                                    120 	.area GSINIT  (CODE)
                                    121 ;--------------------------------------------------------
                                    122 ; Home
                                    123 ;--------------------------------------------------------
                                    124 	.area HOME    (CODE)
                                    125 	.area HOME    (CODE)
                                    126 ;--------------------------------------------------------
                                    127 ; code
                                    128 ;--------------------------------------------------------
                                    129 	.area CSEG    (CODE)
                                    130 ;------------------------------------------------------------
                                    131 ;Allocation info for local variables in function 'convM2R'
                                    132 ;------------------------------------------------------------
                                    133 ;sloc0                     Allocated with name '_convM2R_sloc0_1_0'
                                    134 ;sloc1                     Allocated with name '_convM2R_sloc1_1_0'
                                    135 ;sloc2                     Allocated with name '_convM2R_sloc2_1_0'
                                    136 ;n                         Allocated with name '_convM2R_PARM_2'
                                    137 ;r                         Allocated with name '_convM2R_PARM_3'
                                    138 ;p                         Allocated with name '_convM2R_p_1_113'
                                    139 ;size                      Allocated with name '_convM2R_size_1_114'
                                    140 ;------------------------------------------------------------
                                    141 ;	../libradio/conv.c:6: convM2R(uint8 *p, uint8 n, Rcall *r)
                                    142 ;	-----------------------------------------
                                    143 ;	 function convM2R
                                    144 ;	-----------------------------------------
      00131F                        145 _convM2R:
                           000007   146 	ar7 = 0x07
                           000006   147 	ar6 = 0x06
                           000005   148 	ar5 = 0x05
                           000004   149 	ar4 = 0x04
                           000003   150 	ar3 = 0x03
                           000002   151 	ar2 = 0x02
                           000001   152 	ar1 = 0x01
                           000000   153 	ar0 = 0x00
      00131F AF F0            [24]  154 	mov	r7,b
      001321 AE 83            [24]  155 	mov	r6,dph
      001323 E5 82            [12]  156 	mov	a,dpl
      001325 90 F2 69         [24]  157 	mov	dptr,#_convM2R_p_1_113
      001328 F0               [24]  158 	movx	@dptr,a
      001329 EE               [12]  159 	mov	a,r6
      00132A A3               [24]  160 	inc	dptr
      00132B F0               [24]  161 	movx	@dptr,a
      00132C EF               [12]  162 	mov	a,r7
      00132D A3               [24]  163 	inc	dptr
      00132E F0               [24]  164 	movx	@dptr,a
                                    165 ;	../libradio/conv.c:10: if(n == 0) return 0;
      00132F 90 F2 65         [24]  166 	mov	dptr,#_convM2R_PARM_2
      001332 E0               [24]  167 	movx	a,@dptr
      001333 FF               [12]  168 	mov	r7,a
      001334 70 04            [24]  169 	jnz	00102$
      001336 90 00 00         [24]  170 	mov	dptr,#0x0000
      001339 22               [24]  171 	ret
      00133A                        172 00102$:
                                    173 ;	../libradio/conv.c:11: size = U8GET(p);
      00133A 90 F2 69         [24]  174 	mov	dptr,#_convM2R_p_1_113
      00133D E0               [24]  175 	movx	a,@dptr
      00133E FC               [12]  176 	mov	r4,a
      00133F A3               [24]  177 	inc	dptr
      001340 E0               [24]  178 	movx	a,@dptr
      001341 FD               [12]  179 	mov	r5,a
      001342 A3               [24]  180 	inc	dptr
      001343 E0               [24]  181 	movx	a,@dptr
      001344 FE               [12]  182 	mov	r6,a
      001345 8C 82            [24]  183 	mov	dpl,r4
      001347 8D 83            [24]  184 	mov	dph,r5
      001349 8E F0            [24]  185 	mov	b,r6
      00134B 12 1F 73         [24]  186 	lcall	__gptrget
      00134E FB               [12]  187 	mov	r3,a
      00134F 90 F2 6C         [24]  188 	mov	dptr,#_convM2R_size_1_114
      001352 F0               [24]  189 	movx	@dptr,a
                                    190 ;	../libradio/conv.c:12: p += 1;
      001353 90 F2 69         [24]  191 	mov	dptr,#_convM2R_p_1_113
      001356 74 01            [12]  192 	mov	a,#0x01
      001358 2C               [12]  193 	add	a,r4
      001359 F0               [24]  194 	movx	@dptr,a
      00135A E4               [12]  195 	clr	a
      00135B 3D               [12]  196 	addc	a,r5
      00135C A3               [24]  197 	inc	dptr
      00135D F0               [24]  198 	movx	@dptr,a
      00135E EE               [12]  199 	mov	a,r6
      00135F A3               [24]  200 	inc	dptr
      001360 F0               [24]  201 	movx	@dptr,a
                                    202 ;	../libradio/conv.c:14: if(n < size)
      001361 90 F2 6C         [24]  203 	mov	dptr,#_convM2R_size_1_114
      001364 E0               [24]  204 	movx	a,@dptr
      001365 FE               [12]  205 	mov	r6,a
      001366 C3               [12]  206 	clr	c
      001367 EF               [12]  207 	mov	a,r7
      001368 9E               [12]  208 	subb	a,r6
      001369 50 04            [24]  209 	jnc	00104$
                                    210 ;	../libradio/conv.c:15: return 0;
      00136B 90 00 00         [24]  211 	mov	dptr,#0x0000
      00136E 22               [24]  212 	ret
      00136F                        213 00104$:
                                    214 ;	../libradio/conv.c:17: r->type = U8GET(p);
      00136F C0 06            [24]  215 	push	ar6
      001371 90 F2 66         [24]  216 	mov	dptr,#_convM2R_PARM_3
      001374 E0               [24]  217 	movx	a,@dptr
      001375 FC               [12]  218 	mov	r4,a
      001376 A3               [24]  219 	inc	dptr
      001377 E0               [24]  220 	movx	a,@dptr
      001378 FD               [12]  221 	mov	r5,a
      001379 A3               [24]  222 	inc	dptr
      00137A E0               [24]  223 	movx	a,@dptr
      00137B FF               [12]  224 	mov	r7,a
      00137C 90 F2 69         [24]  225 	mov	dptr,#_convM2R_p_1_113
      00137F E0               [24]  226 	movx	a,@dptr
      001380 F9               [12]  227 	mov	r1,a
      001381 A3               [24]  228 	inc	dptr
      001382 E0               [24]  229 	movx	a,@dptr
      001383 FA               [12]  230 	mov	r2,a
      001384 A3               [24]  231 	inc	dptr
      001385 E0               [24]  232 	movx	a,@dptr
      001386 FB               [12]  233 	mov	r3,a
      001387 89 82            [24]  234 	mov	dpl,r1
      001389 8A 83            [24]  235 	mov	dph,r2
      00138B 8B F0            [24]  236 	mov	b,r3
      00138D 12 1F 73         [24]  237 	lcall	__gptrget
      001390 F8               [12]  238 	mov	r0,a
      001391 8C 82            [24]  239 	mov	dpl,r4
      001393 8D 83            [24]  240 	mov	dph,r5
      001395 8F F0            [24]  241 	mov	b,r7
      001397 12 1D 99         [24]  242 	lcall	__gptrput
                                    243 ;	../libradio/conv.c:18: p+= 1;
      00139A 90 F2 69         [24]  244 	mov	dptr,#_convM2R_p_1_113
      00139D 74 01            [12]  245 	mov	a,#0x01
      00139F 29               [12]  246 	add	a,r1
      0013A0 F0               [24]  247 	movx	@dptr,a
      0013A1 E4               [12]  248 	clr	a
      0013A2 3A               [12]  249 	addc	a,r2
      0013A3 A3               [24]  250 	inc	dptr
      0013A4 F0               [24]  251 	movx	@dptr,a
      0013A5 EB               [12]  252 	mov	a,r3
      0013A6 A3               [24]  253 	inc	dptr
      0013A7 F0               [24]  254 	movx	@dptr,a
                                    255 ;	../libradio/conv.c:19: r->flag = U8GET(p);
      0013A8 74 01            [12]  256 	mov	a,#0x01
      0013AA 2C               [12]  257 	add	a,r4
      0013AB F5 21            [12]  258 	mov	_convM2R_sloc0_1_0,a
      0013AD E4               [12]  259 	clr	a
      0013AE 3D               [12]  260 	addc	a,r5
      0013AF F5 22            [12]  261 	mov	(_convM2R_sloc0_1_0 + 1),a
      0013B1 8F 23            [24]  262 	mov	(_convM2R_sloc0_1_0 + 2),r7
      0013B3 90 F2 69         [24]  263 	mov	dptr,#_convM2R_p_1_113
      0013B6 E0               [24]  264 	movx	a,@dptr
      0013B7 FA               [12]  265 	mov	r2,a
      0013B8 A3               [24]  266 	inc	dptr
      0013B9 E0               [24]  267 	movx	a,@dptr
      0013BA FB               [12]  268 	mov	r3,a
      0013BB A3               [24]  269 	inc	dptr
      0013BC E0               [24]  270 	movx	a,@dptr
      0013BD FE               [12]  271 	mov	r6,a
      0013BE 8A 82            [24]  272 	mov	dpl,r2
      0013C0 8B 83            [24]  273 	mov	dph,r3
      0013C2 8E F0            [24]  274 	mov	b,r6
      0013C4 12 1F 73         [24]  275 	lcall	__gptrget
      0013C7 F9               [12]  276 	mov	r1,a
      0013C8 85 21 82         [24]  277 	mov	dpl,_convM2R_sloc0_1_0
      0013CB 85 22 83         [24]  278 	mov	dph,(_convM2R_sloc0_1_0 + 1)
      0013CE 85 23 F0         [24]  279 	mov	b,(_convM2R_sloc0_1_0 + 2)
      0013D1 12 1D 99         [24]  280 	lcall	__gptrput
                                    281 ;	../libradio/conv.c:20: p += 1;
      0013D4 90 F2 69         [24]  282 	mov	dptr,#_convM2R_p_1_113
      0013D7 74 01            [12]  283 	mov	a,#0x01
      0013D9 2A               [12]  284 	add	a,r2
      0013DA F0               [24]  285 	movx	@dptr,a
      0013DB E4               [12]  286 	clr	a
      0013DC 3B               [12]  287 	addc	a,r3
      0013DD A3               [24]  288 	inc	dptr
      0013DE F0               [24]  289 	movx	@dptr,a
      0013DF EE               [12]  290 	mov	a,r6
      0013E0 A3               [24]  291 	inc	dptr
      0013E1 F0               [24]  292 	movx	@dptr,a
                                    293 ;	../libradio/conv.c:22: switch(r->type){
      0013E2 8C 82            [24]  294 	mov	dpl,r4
      0013E4 8D 83            [24]  295 	mov	dph,r5
      0013E6 8F F0            [24]  296 	mov	b,r7
      0013E8 12 1F 73         [24]  297 	lcall	__gptrget
      0013EB F5 21            [12]  298 	mov	_convM2R_sloc0_1_0,a
      0013ED B8 01 04         [24]  299 	cjne	r0,#0x01,00153$
      0013F0 D0 06            [24]  300 	pop	ar6
      0013F2 80 46            [24]  301 	sjmp	00109$
      0013F4                        302 00153$:
      0013F4 D0 06            [24]  303 	pop	ar6
      0013F6 74 02            [12]  304 	mov	a,#0x02
      0013F8 B5 21 03         [24]  305 	cjne	a,_convM2R_sloc0_1_0,00154$
      0013FB 02 16 07         [24]  306 	ljmp	00113$
      0013FE                        307 00154$:
      0013FE 74 03            [12]  308 	mov	a,#0x03
      001400 B5 21 03         [24]  309 	cjne	a,_convM2R_sloc0_1_0,00155$
      001403 02 15 95         [24]  310 	ljmp	00111$
      001406                        311 00155$:
      001406 74 04            [12]  312 	mov	a,#0x04
      001408 B5 21 03         [24]  313 	cjne	a,_convM2R_sloc0_1_0,00156$
      00140B 02 16 94         [24]  314 	ljmp	00115$
      00140E                        315 00156$:
      00140E 74 05            [12]  316 	mov	a,#0x05
      001410 B5 21 03         [24]  317 	cjne	a,_convM2R_sloc0_1_0,00157$
      001413 02 14 E9         [24]  318 	ljmp	00110$
      001416                        319 00157$:
      001416 74 06            [12]  320 	mov	a,#0x06
      001418 B5 21 03         [24]  321 	cjne	a,_convM2R_sloc0_1_0,00158$
      00141B 02 16 07         [24]  322 	ljmp	00113$
      00141E                        323 00158$:
      00141E 74 07            [12]  324 	mov	a,#0x07
      001420 B5 21 03         [24]  325 	cjne	a,_convM2R_sloc0_1_0,00159$
      001423 02 16 94         [24]  326 	ljmp	00115$
      001426                        327 00159$:
      001426 74 08            [12]  328 	mov	a,#0x08
      001428 B5 21 03         [24]  329 	cjne	a,_convM2R_sloc0_1_0,00160$
      00142B 02 16 94         [24]  330 	ljmp	00115$
      00142E                        331 00160$:
      00142E 74 80            [12]  332 	mov	a,#0x80
      001430 B5 21 03         [24]  333 	cjne	a,_convM2R_sloc0_1_0,00161$
      001433 02 16 61         [24]  334 	ljmp	00114$
      001436                        335 00161$:
                                    336 ;	../libradio/conv.c:23: default: return 0;
      001436 90 00 00         [24]  337 	mov	dptr,#0x0000
      001439 22               [24]  338 	ret
                                    339 ;	../libradio/conv.c:30: case Trx:
      00143A                        340 00109$:
                                    341 ;	../libradio/conv.c:31: r->timeoutms = U16GET(p);
      00143A C0 06            [24]  342 	push	ar6
      00143C 74 03            [12]  343 	mov	a,#0x03
      00143E 2C               [12]  344 	add	a,r4
      00143F F5 21            [12]  345 	mov	_convM2R_sloc0_1_0,a
      001441 E4               [12]  346 	clr	a
      001442 3D               [12]  347 	addc	a,r5
      001443 F5 22            [12]  348 	mov	(_convM2R_sloc0_1_0 + 1),a
      001445 8F 23            [24]  349 	mov	(_convM2R_sloc0_1_0 + 2),r7
      001447 90 F2 69         [24]  350 	mov	dptr,#_convM2R_p_1_113
      00144A E0               [24]  351 	movx	a,@dptr
      00144B F5 26            [12]  352 	mov	_convM2R_sloc2_1_0,a
      00144D A3               [24]  353 	inc	dptr
      00144E E0               [24]  354 	movx	a,@dptr
      00144F F5 27            [12]  355 	mov	(_convM2R_sloc2_1_0 + 1),a
      001451 A3               [24]  356 	inc	dptr
      001452 E0               [24]  357 	movx	a,@dptr
      001453 F5 28            [12]  358 	mov	(_convM2R_sloc2_1_0 + 2),a
      001455 85 26 82         [24]  359 	mov	dpl,_convM2R_sloc2_1_0
      001458 85 27 83         [24]  360 	mov	dph,(_convM2R_sloc2_1_0 + 1)
      00145B 85 28 F0         [24]  361 	mov	b,(_convM2R_sloc2_1_0 + 2)
      00145E 12 1F 73         [24]  362 	lcall	__gptrget
      001461 F9               [12]  363 	mov	r1,a
      001462 7A 00            [12]  364 	mov	r2,#0x00
      001464 89 25            [24]  365 	mov	(_convM2R_sloc1_1_0 + 1),r1
                                    366 ;	1-genFromRTrack replaced	mov	_convM2R_sloc1_1_0,#0x00
      001466 8A 24            [24]  367 	mov	_convM2R_sloc1_1_0,r2
      001468 74 01            [12]  368 	mov	a,#0x01
      00146A 25 26            [12]  369 	add	a,_convM2R_sloc2_1_0
      00146C F9               [12]  370 	mov	r1,a
      00146D E4               [12]  371 	clr	a
      00146E 35 27            [12]  372 	addc	a,(_convM2R_sloc2_1_0 + 1)
      001470 FA               [12]  373 	mov	r2,a
      001471 AE 28            [24]  374 	mov	r6,(_convM2R_sloc2_1_0 + 2)
      001473 89 82            [24]  375 	mov	dpl,r1
      001475 8A 83            [24]  376 	mov	dph,r2
      001477 8E F0            [24]  377 	mov	b,r6
      001479 12 1F 73         [24]  378 	lcall	__gptrget
      00147C F9               [12]  379 	mov	r1,a
      00147D 7E 00            [12]  380 	mov	r6,#0x00
      00147F E5 24            [12]  381 	mov	a,_convM2R_sloc1_1_0
      001481 42 01            [12]  382 	orl	ar1,a
      001483 E5 25            [12]  383 	mov	a,(_convM2R_sloc1_1_0 + 1)
      001485 42 06            [12]  384 	orl	ar6,a
      001487 85 21 82         [24]  385 	mov	dpl,_convM2R_sloc0_1_0
      00148A 85 22 83         [24]  386 	mov	dph,(_convM2R_sloc0_1_0 + 1)
      00148D 85 23 F0         [24]  387 	mov	b,(_convM2R_sloc0_1_0 + 2)
      001490 E9               [12]  388 	mov	a,r1
      001491 12 1D 99         [24]  389 	lcall	__gptrput
      001494 A3               [24]  390 	inc	dptr
      001495 EE               [12]  391 	mov	a,r6
      001496 12 1D 99         [24]  392 	lcall	__gptrput
                                    393 ;	../libradio/conv.c:32: p += 2;
      001499 90 F2 69         [24]  394 	mov	dptr,#_convM2R_p_1_113
      00149C 74 02            [12]  395 	mov	a,#0x02
      00149E 25 26            [12]  396 	add	a,_convM2R_sloc2_1_0
      0014A0 F0               [24]  397 	movx	@dptr,a
      0014A1 E4               [12]  398 	clr	a
      0014A2 35 27            [12]  399 	addc	a,(_convM2R_sloc2_1_0 + 1)
      0014A4 A3               [24]  400 	inc	dptr
      0014A5 F0               [24]  401 	movx	@dptr,a
      0014A6 E5 28            [12]  402 	mov	a,(_convM2R_sloc2_1_0 + 2)
      0014A8 A3               [24]  403 	inc	dptr
      0014A9 F0               [24]  404 	movx	@dptr,a
                                    405 ;	../libradio/conv.c:33: r->filterbyte3 = U8GET(p);
      0014AA 74 07            [12]  406 	mov	a,#0x07
      0014AC 2C               [12]  407 	add	a,r4
      0014AD F5 26            [12]  408 	mov	_convM2R_sloc2_1_0,a
      0014AF E4               [12]  409 	clr	a
      0014B0 3D               [12]  410 	addc	a,r5
      0014B1 F5 27            [12]  411 	mov	(_convM2R_sloc2_1_0 + 1),a
      0014B3 8F 28            [24]  412 	mov	(_convM2R_sloc2_1_0 + 2),r7
      0014B5 90 F2 69         [24]  413 	mov	dptr,#_convM2R_p_1_113
      0014B8 E0               [24]  414 	movx	a,@dptr
      0014B9 F8               [12]  415 	mov	r0,a
      0014BA A3               [24]  416 	inc	dptr
      0014BB E0               [24]  417 	movx	a,@dptr
      0014BC F9               [12]  418 	mov	r1,a
      0014BD A3               [24]  419 	inc	dptr
      0014BE E0               [24]  420 	movx	a,@dptr
      0014BF FE               [12]  421 	mov	r6,a
      0014C0 88 82            [24]  422 	mov	dpl,r0
      0014C2 89 83            [24]  423 	mov	dph,r1
      0014C4 8E F0            [24]  424 	mov	b,r6
      0014C6 12 1F 73         [24]  425 	lcall	__gptrget
      0014C9 FB               [12]  426 	mov	r3,a
      0014CA 85 26 82         [24]  427 	mov	dpl,_convM2R_sloc2_1_0
      0014CD 85 27 83         [24]  428 	mov	dph,(_convM2R_sloc2_1_0 + 1)
      0014D0 85 28 F0         [24]  429 	mov	b,(_convM2R_sloc2_1_0 + 2)
      0014D3 12 1D 99         [24]  430 	lcall	__gptrput
                                    431 ;	../libradio/conv.c:34: p += 1;
      0014D6 90 F2 69         [24]  432 	mov	dptr,#_convM2R_p_1_113
      0014D9 74 01            [12]  433 	mov	a,#0x01
      0014DB 28               [12]  434 	add	a,r0
      0014DC F0               [24]  435 	movx	@dptr,a
      0014DD E4               [12]  436 	clr	a
      0014DE 39               [12]  437 	addc	a,r1
      0014DF A3               [24]  438 	inc	dptr
      0014E0 F0               [24]  439 	movx	@dptr,a
      0014E1 EE               [12]  440 	mov	a,r6
      0014E2 A3               [24]  441 	inc	dptr
      0014E3 F0               [24]  442 	movx	@dptr,a
                                    443 ;	../libradio/conv.c:35: break;
      0014E4 D0 06            [24]  444 	pop	ar6
      0014E6 02 16 94         [24]  445 	ljmp	00115$
                                    446 ;	../libradio/conv.c:37: case Ttxrx:
      0014E9                        447 00110$:
                                    448 ;	../libradio/conv.c:38: r->timeoutms = U16GET(p);
      0014E9 C0 06            [24]  449 	push	ar6
      0014EB 74 03            [12]  450 	mov	a,#0x03
      0014ED 2C               [12]  451 	add	a,r4
      0014EE F5 26            [12]  452 	mov	_convM2R_sloc2_1_0,a
      0014F0 E4               [12]  453 	clr	a
      0014F1 3D               [12]  454 	addc	a,r5
      0014F2 F5 27            [12]  455 	mov	(_convM2R_sloc2_1_0 + 1),a
      0014F4 8F 28            [24]  456 	mov	(_convM2R_sloc2_1_0 + 2),r7
      0014F6 90 F2 69         [24]  457 	mov	dptr,#_convM2R_p_1_113
      0014F9 E0               [24]  458 	movx	a,@dptr
      0014FA F5 21            [12]  459 	mov	_convM2R_sloc0_1_0,a
      0014FC A3               [24]  460 	inc	dptr
      0014FD E0               [24]  461 	movx	a,@dptr
      0014FE F5 22            [12]  462 	mov	(_convM2R_sloc0_1_0 + 1),a
      001500 A3               [24]  463 	inc	dptr
      001501 E0               [24]  464 	movx	a,@dptr
      001502 F5 23            [12]  465 	mov	(_convM2R_sloc0_1_0 + 2),a
      001504 85 21 82         [24]  466 	mov	dpl,_convM2R_sloc0_1_0
      001507 85 22 83         [24]  467 	mov	dph,(_convM2R_sloc0_1_0 + 1)
      00150A 85 23 F0         [24]  468 	mov	b,(_convM2R_sloc0_1_0 + 2)
      00150D 12 1F 73         [24]  469 	lcall	__gptrget
      001510 F9               [12]  470 	mov	r1,a
      001511 7A 00            [12]  471 	mov	r2,#0x00
      001513 89 25            [24]  472 	mov	(_convM2R_sloc1_1_0 + 1),r1
                                    473 ;	1-genFromRTrack replaced	mov	_convM2R_sloc1_1_0,#0x00
      001515 8A 24            [24]  474 	mov	_convM2R_sloc1_1_0,r2
      001517 74 01            [12]  475 	mov	a,#0x01
      001519 25 21            [12]  476 	add	a,_convM2R_sloc0_1_0
      00151B F9               [12]  477 	mov	r1,a
      00151C E4               [12]  478 	clr	a
      00151D 35 22            [12]  479 	addc	a,(_convM2R_sloc0_1_0 + 1)
      00151F FA               [12]  480 	mov	r2,a
      001520 AE 23            [24]  481 	mov	r6,(_convM2R_sloc0_1_0 + 2)
      001522 89 82            [24]  482 	mov	dpl,r1
      001524 8A 83            [24]  483 	mov	dph,r2
      001526 8E F0            [24]  484 	mov	b,r6
      001528 12 1F 73         [24]  485 	lcall	__gptrget
      00152B F9               [12]  486 	mov	r1,a
      00152C 7E 00            [12]  487 	mov	r6,#0x00
      00152E E5 24            [12]  488 	mov	a,_convM2R_sloc1_1_0
      001530 42 01            [12]  489 	orl	ar1,a
      001532 E5 25            [12]  490 	mov	a,(_convM2R_sloc1_1_0 + 1)
      001534 42 06            [12]  491 	orl	ar6,a
      001536 85 26 82         [24]  492 	mov	dpl,_convM2R_sloc2_1_0
      001539 85 27 83         [24]  493 	mov	dph,(_convM2R_sloc2_1_0 + 1)
      00153C 85 28 F0         [24]  494 	mov	b,(_convM2R_sloc2_1_0 + 2)
      00153F E9               [12]  495 	mov	a,r1
      001540 12 1D 99         [24]  496 	lcall	__gptrput
      001543 A3               [24]  497 	inc	dptr
      001544 EE               [12]  498 	mov	a,r6
      001545 12 1D 99         [24]  499 	lcall	__gptrput
                                    500 ;	../libradio/conv.c:39: p += 2;
      001548 90 F2 69         [24]  501 	mov	dptr,#_convM2R_p_1_113
      00154B 74 02            [12]  502 	mov	a,#0x02
      00154D 25 21            [12]  503 	add	a,_convM2R_sloc0_1_0
      00154F F0               [24]  504 	movx	@dptr,a
      001550 E4               [12]  505 	clr	a
      001551 35 22            [12]  506 	addc	a,(_convM2R_sloc0_1_0 + 1)
      001553 A3               [24]  507 	inc	dptr
      001554 F0               [24]  508 	movx	@dptr,a
      001555 E5 23            [12]  509 	mov	a,(_convM2R_sloc0_1_0 + 2)
      001557 A3               [24]  510 	inc	dptr
      001558 F0               [24]  511 	movx	@dptr,a
                                    512 ;	../libradio/conv.c:40: r->filterbyte3 = U8GET(p);
      001559 74 07            [12]  513 	mov	a,#0x07
      00155B 2C               [12]  514 	add	a,r4
      00155C F5 26            [12]  515 	mov	_convM2R_sloc2_1_0,a
      00155E E4               [12]  516 	clr	a
      00155F 3D               [12]  517 	addc	a,r5
      001560 F5 27            [12]  518 	mov	(_convM2R_sloc2_1_0 + 1),a
      001562 8F 28            [24]  519 	mov	(_convM2R_sloc2_1_0 + 2),r7
      001564 90 F2 69         [24]  520 	mov	dptr,#_convM2R_p_1_113
      001567 E0               [24]  521 	movx	a,@dptr
      001568 F8               [12]  522 	mov	r0,a
      001569 A3               [24]  523 	inc	dptr
      00156A E0               [24]  524 	movx	a,@dptr
      00156B F9               [12]  525 	mov	r1,a
      00156C A3               [24]  526 	inc	dptr
      00156D E0               [24]  527 	movx	a,@dptr
      00156E FE               [12]  528 	mov	r6,a
      00156F 88 82            [24]  529 	mov	dpl,r0
      001571 89 83            [24]  530 	mov	dph,r1
      001573 8E F0            [24]  531 	mov	b,r6
      001575 12 1F 73         [24]  532 	lcall	__gptrget
      001578 FB               [12]  533 	mov	r3,a
      001579 85 26 82         [24]  534 	mov	dpl,_convM2R_sloc2_1_0
      00157C 85 27 83         [24]  535 	mov	dph,(_convM2R_sloc2_1_0 + 1)
      00157F 85 28 F0         [24]  536 	mov	b,(_convM2R_sloc2_1_0 + 2)
      001582 12 1D 99         [24]  537 	lcall	__gptrput
                                    538 ;	../libradio/conv.c:41: p += 1;
      001585 90 F2 69         [24]  539 	mov	dptr,#_convM2R_p_1_113
      001588 74 01            [12]  540 	mov	a,#0x01
      00158A 28               [12]  541 	add	a,r0
      00158B F0               [24]  542 	movx	@dptr,a
      00158C E4               [12]  543 	clr	a
      00158D 39               [12]  544 	addc	a,r1
      00158E A3               [24]  545 	inc	dptr
      00158F F0               [24]  546 	movx	@dptr,a
      001590 EE               [12]  547 	mov	a,r6
      001591 A3               [24]  548 	inc	dptr
      001592 F0               [24]  549 	movx	@dptr,a
                                    550 ;	../libradio/conv.c:57: return size;
      001593 D0 06            [24]  551 	pop	ar6
                                    552 ;	../libradio/conv.c:43: case Ttx:
      001595                        553 00111$:
                                    554 ;	../libradio/conv.c:44: r->preamblems = U16GET(p);
      001595 C0 06            [24]  555 	push	ar6
      001597 74 05            [12]  556 	mov	a,#0x05
      001599 2C               [12]  557 	add	a,r4
      00159A F5 26            [12]  558 	mov	_convM2R_sloc2_1_0,a
      00159C E4               [12]  559 	clr	a
      00159D 3D               [12]  560 	addc	a,r5
      00159E F5 27            [12]  561 	mov	(_convM2R_sloc2_1_0 + 1),a
      0015A0 8F 28            [24]  562 	mov	(_convM2R_sloc2_1_0 + 2),r7
      0015A2 90 F2 69         [24]  563 	mov	dptr,#_convM2R_p_1_113
      0015A5 E0               [24]  564 	movx	a,@dptr
      0015A6 F5 21            [12]  565 	mov	_convM2R_sloc0_1_0,a
      0015A8 A3               [24]  566 	inc	dptr
      0015A9 E0               [24]  567 	movx	a,@dptr
      0015AA F5 22            [12]  568 	mov	(_convM2R_sloc0_1_0 + 1),a
      0015AC A3               [24]  569 	inc	dptr
      0015AD E0               [24]  570 	movx	a,@dptr
      0015AE F5 23            [12]  571 	mov	(_convM2R_sloc0_1_0 + 2),a
      0015B0 85 21 82         [24]  572 	mov	dpl,_convM2R_sloc0_1_0
      0015B3 85 22 83         [24]  573 	mov	dph,(_convM2R_sloc0_1_0 + 1)
      0015B6 85 23 F0         [24]  574 	mov	b,(_convM2R_sloc0_1_0 + 2)
      0015B9 12 1F 73         [24]  575 	lcall	__gptrget
      0015BC F9               [12]  576 	mov	r1,a
      0015BD 7E 00            [12]  577 	mov	r6,#0x00
      0015BF 89 25            [24]  578 	mov	(_convM2R_sloc1_1_0 + 1),r1
                                    579 ;	1-genFromRTrack replaced	mov	_convM2R_sloc1_1_0,#0x00
      0015C1 8E 24            [24]  580 	mov	_convM2R_sloc1_1_0,r6
      0015C3 74 01            [12]  581 	mov	a,#0x01
      0015C5 25 21            [12]  582 	add	a,_convM2R_sloc0_1_0
      0015C7 F9               [12]  583 	mov	r1,a
      0015C8 E4               [12]  584 	clr	a
      0015C9 35 22            [12]  585 	addc	a,(_convM2R_sloc0_1_0 + 1)
      0015CB FB               [12]  586 	mov	r3,a
      0015CC AE 23            [24]  587 	mov	r6,(_convM2R_sloc0_1_0 + 2)
      0015CE 89 82            [24]  588 	mov	dpl,r1
      0015D0 8B 83            [24]  589 	mov	dph,r3
      0015D2 8E F0            [24]  590 	mov	b,r6
      0015D4 12 1F 73         [24]  591 	lcall	__gptrget
      0015D7 F9               [12]  592 	mov	r1,a
      0015D8 7E 00            [12]  593 	mov	r6,#0x00
      0015DA E5 24            [12]  594 	mov	a,_convM2R_sloc1_1_0
      0015DC 42 01            [12]  595 	orl	ar1,a
      0015DE E5 25            [12]  596 	mov	a,(_convM2R_sloc1_1_0 + 1)
      0015E0 42 06            [12]  597 	orl	ar6,a
      0015E2 85 26 82         [24]  598 	mov	dpl,_convM2R_sloc2_1_0
      0015E5 85 27 83         [24]  599 	mov	dph,(_convM2R_sloc2_1_0 + 1)
      0015E8 85 28 F0         [24]  600 	mov	b,(_convM2R_sloc2_1_0 + 2)
      0015EB E9               [12]  601 	mov	a,r1
      0015EC 12 1D 99         [24]  602 	lcall	__gptrput
      0015EF A3               [24]  603 	inc	dptr
      0015F0 EE               [12]  604 	mov	a,r6
      0015F1 12 1D 99         [24]  605 	lcall	__gptrput
                                    606 ;	../libradio/conv.c:45: p += 2;
      0015F4 90 F2 69         [24]  607 	mov	dptr,#_convM2R_p_1_113
      0015F7 74 02            [12]  608 	mov	a,#0x02
      0015F9 25 21            [12]  609 	add	a,_convM2R_sloc0_1_0
      0015FB F0               [24]  610 	movx	@dptr,a
      0015FC E4               [12]  611 	clr	a
      0015FD 35 22            [12]  612 	addc	a,(_convM2R_sloc0_1_0 + 1)
      0015FF A3               [24]  613 	inc	dptr
      001600 F0               [24]  614 	movx	@dptr,a
      001601 E5 23            [12]  615 	mov	a,(_convM2R_sloc0_1_0 + 2)
      001603 A3               [24]  616 	inc	dptr
      001604 F0               [24]  617 	movx	@dptr,a
                                    618 ;	../libradio/conv.c:57: return size;
      001605 D0 06            [24]  619 	pop	ar6
                                    620 ;	../libradio/conv.c:47: case Rtxrx:
      001607                        621 00113$:
                                    622 ;	../libradio/conv.c:48: memcpy(r->pkt, p, sizeof r->pkt);
      001607 C0 06            [24]  623 	push	ar6
      001609 74 08            [12]  624 	mov	a,#0x08
      00160B 2C               [12]  625 	add	a,r4
      00160C F9               [12]  626 	mov	r1,a
      00160D E4               [12]  627 	clr	a
      00160E 3D               [12]  628 	addc	a,r5
      00160F FA               [12]  629 	mov	r2,a
      001610 8F 03            [24]  630 	mov	ar3,r7
      001612 89 26            [24]  631 	mov	_convM2R_sloc2_1_0,r1
      001614 8A 27            [24]  632 	mov	(_convM2R_sloc2_1_0 + 1),r2
      001616 8B 28            [24]  633 	mov	(_convM2R_sloc2_1_0 + 2),r3
      001618 90 F2 69         [24]  634 	mov	dptr,#_convM2R_p_1_113
      00161B E0               [24]  635 	movx	a,@dptr
      00161C F8               [12]  636 	mov	r0,a
      00161D A3               [24]  637 	inc	dptr
      00161E E0               [24]  638 	movx	a,@dptr
      00161F FB               [12]  639 	mov	r3,a
      001620 A3               [24]  640 	inc	dptr
      001621 E0               [24]  641 	movx	a,@dptr
      001622 FE               [12]  642 	mov	r6,a
      001623 90 F2 7F         [24]  643 	mov	dptr,#_memcpy_PARM_2
      001626 E8               [12]  644 	mov	a,r0
      001627 F0               [24]  645 	movx	@dptr,a
      001628 EB               [12]  646 	mov	a,r3
      001629 A3               [24]  647 	inc	dptr
      00162A F0               [24]  648 	movx	@dptr,a
      00162B EE               [12]  649 	mov	a,r6
      00162C A3               [24]  650 	inc	dptr
      00162D F0               [24]  651 	movx	@dptr,a
      00162E 90 F2 82         [24]  652 	mov	dptr,#_memcpy_PARM_3
      001631 74 4E            [12]  653 	mov	a,#0x4E
      001633 F0               [24]  654 	movx	@dptr,a
      001634 E4               [12]  655 	clr	a
      001635 A3               [24]  656 	inc	dptr
      001636 F0               [24]  657 	movx	@dptr,a
      001637 85 26 82         [24]  658 	mov	dpl,_convM2R_sloc2_1_0
      00163A 85 27 83         [24]  659 	mov	dph,(_convM2R_sloc2_1_0 + 1)
      00163D 85 28 F0         [24]  660 	mov	b,(_convM2R_sloc2_1_0 + 2)
      001640 C0 06            [24]  661 	push	ar6
      001642 C0 03            [24]  662 	push	ar3
      001644 C0 00            [24]  663 	push	ar0
      001646 12 1C D9         [24]  664 	lcall	_memcpy
      001649 D0 00            [24]  665 	pop	ar0
      00164B D0 03            [24]  666 	pop	ar3
      00164D D0 06            [24]  667 	pop	ar6
                                    668 ;	../libradio/conv.c:49: p += sizeof r->pkt;
      00164F 90 F2 69         [24]  669 	mov	dptr,#_convM2R_p_1_113
      001652 74 4E            [12]  670 	mov	a,#0x4E
      001654 28               [12]  671 	add	a,r0
      001655 F0               [24]  672 	movx	@dptr,a
      001656 E4               [12]  673 	clr	a
      001657 3B               [12]  674 	addc	a,r3
      001658 A3               [24]  675 	inc	dptr
      001659 F0               [24]  676 	movx	@dptr,a
      00165A EE               [12]  677 	mov	a,r6
      00165B A3               [24]  678 	inc	dptr
      00165C F0               [24]  679 	movx	@dptr,a
                                    680 ;	../libradio/conv.c:50: break;
      00165D D0 06            [24]  681 	pop	ar6
                                    682 ;	../libradio/conv.c:52: case Rerr:
      00165F 80 33            [24]  683 	sjmp	00115$
      001661                        684 00114$:
                                    685 ;	../libradio/conv.c:53: r->err = U8GET(p);
      001661 74 02            [12]  686 	mov	a,#0x02
      001663 2C               [12]  687 	add	a,r4
      001664 FC               [12]  688 	mov	r4,a
      001665 E4               [12]  689 	clr	a
      001666 3D               [12]  690 	addc	a,r5
      001667 FD               [12]  691 	mov	r5,a
      001668 90 F2 69         [24]  692 	mov	dptr,#_convM2R_p_1_113
      00166B E0               [24]  693 	movx	a,@dptr
      00166C F9               [12]  694 	mov	r1,a
      00166D A3               [24]  695 	inc	dptr
      00166E E0               [24]  696 	movx	a,@dptr
      00166F FA               [12]  697 	mov	r2,a
      001670 A3               [24]  698 	inc	dptr
      001671 E0               [24]  699 	movx	a,@dptr
      001672 FB               [12]  700 	mov	r3,a
      001673 89 82            [24]  701 	mov	dpl,r1
      001675 8A 83            [24]  702 	mov	dph,r2
      001677 8B F0            [24]  703 	mov	b,r3
      001679 12 1F 73         [24]  704 	lcall	__gptrget
      00167C F8               [12]  705 	mov	r0,a
      00167D 8C 82            [24]  706 	mov	dpl,r4
      00167F 8D 83            [24]  707 	mov	dph,r5
      001681 8F F0            [24]  708 	mov	b,r7
      001683 12 1D 99         [24]  709 	lcall	__gptrput
                                    710 ;	../libradio/conv.c:54: p += 1;
      001686 90 F2 69         [24]  711 	mov	dptr,#_convM2R_p_1_113
      001689 74 01            [12]  712 	mov	a,#0x01
      00168B 29               [12]  713 	add	a,r1
      00168C F0               [24]  714 	movx	@dptr,a
      00168D E4               [12]  715 	clr	a
      00168E 3A               [12]  716 	addc	a,r2
      00168F A3               [24]  717 	inc	dptr
      001690 F0               [24]  718 	movx	@dptr,a
      001691 EB               [12]  719 	mov	a,r3
      001692 A3               [24]  720 	inc	dptr
      001693 F0               [24]  721 	movx	@dptr,a
                                    722 ;	../libradio/conv.c:55: }
      001694                        723 00115$:
                                    724 ;	../libradio/conv.c:57: return size;
      001694 7F 00            [12]  725 	mov	r7,#0x00
      001696 8E 82            [24]  726 	mov	dpl,r6
      001698 8F 83            [24]  727 	mov	dph,r7
      00169A 22               [24]  728 	ret
                                    729 ;------------------------------------------------------------
                                    730 ;Allocation info for local variables in function 'convR2M'
                                    731 ;------------------------------------------------------------
                                    732 ;sloc0                     Allocated with name '_convR2M_sloc0_1_0'
                                    733 ;sloc1                     Allocated with name '_convR2M_sloc1_1_0'
                                    734 ;sloc2                     Allocated with name '_convR2M_sloc2_1_0'
                                    735 ;sloc3                     Allocated with name '_convR2M_sloc3_1_0'
                                    736 ;sloc4                     Allocated with name '_convR2M_sloc4_1_0'
                                    737 ;ap                        Allocated with name '_convR2M_PARM_2'
                                    738 ;n                         Allocated with name '_convR2M_PARM_3'
                                    739 ;r                         Allocated with name '_convR2M_r_1_116'
                                    740 ;p                         Allocated with name '_convR2M_p_1_117'
                                    741 ;size                      Allocated with name '_convR2M_size_1_117'
                                    742 ;------------------------------------------------------------
                                    743 ;	../libradio/conv.c:61: convR2M(Rcall *r, uint8 *ap, uint8 n)
                                    744 ;	-----------------------------------------
                                    745 ;	 function convR2M
                                    746 ;	-----------------------------------------
      00169B                        747 _convR2M:
      00169B AF F0            [24]  748 	mov	r7,b
      00169D AE 83            [24]  749 	mov	r6,dph
      00169F E5 82            [12]  750 	mov	a,dpl
      0016A1 90 F2 71         [24]  751 	mov	dptr,#_convR2M_r_1_116
      0016A4 F0               [24]  752 	movx	@dptr,a
      0016A5 EE               [12]  753 	mov	a,r6
      0016A6 A3               [24]  754 	inc	dptr
      0016A7 F0               [24]  755 	movx	@dptr,a
      0016A8 EF               [12]  756 	mov	a,r7
      0016A9 A3               [24]  757 	inc	dptr
      0016AA F0               [24]  758 	movx	@dptr,a
                                    759 ;	../libradio/conv.c:63: uint8 *p = ap;
      0016AB 90 F2 6D         [24]  760 	mov	dptr,#_convR2M_PARM_2
      0016AE E0               [24]  761 	movx	a,@dptr
      0016AF FD               [12]  762 	mov	r5,a
      0016B0 A3               [24]  763 	inc	dptr
      0016B1 E0               [24]  764 	movx	a,@dptr
      0016B2 FE               [12]  765 	mov	r6,a
      0016B3 A3               [24]  766 	inc	dptr
      0016B4 E0               [24]  767 	movx	a,@dptr
      0016B5 FF               [12]  768 	mov	r7,a
                                    769 ;	../libradio/conv.c:66: size = 3; // size, type, flag
      0016B6 90 F2 77         [24]  770 	mov	dptr,#_convR2M_size_1_117
      0016B9 74 03            [12]  771 	mov	a,#0x03
      0016BB F0               [24]  772 	movx	@dptr,a
                                    773 ;	../libradio/conv.c:67: switch(r->type){
      0016BC 90 F2 71         [24]  774 	mov	dptr,#_convR2M_r_1_116
      0016BF E0               [24]  775 	movx	a,@dptr
      0016C0 F5 29            [12]  776 	mov	_convR2M_sloc0_1_0,a
      0016C2 A3               [24]  777 	inc	dptr
      0016C3 E0               [24]  778 	movx	a,@dptr
      0016C4 F5 2A            [12]  779 	mov	(_convR2M_sloc0_1_0 + 1),a
      0016C6 A3               [24]  780 	inc	dptr
      0016C7 E0               [24]  781 	movx	a,@dptr
      0016C8 F5 2B            [12]  782 	mov	(_convR2M_sloc0_1_0 + 2),a
      0016CA 85 29 82         [24]  783 	mov	dpl,_convR2M_sloc0_1_0
      0016CD 85 2A 83         [24]  784 	mov	dph,(_convR2M_sloc0_1_0 + 1)
      0016D0 85 2B F0         [24]  785 	mov	b,(_convR2M_sloc0_1_0 + 2)
      0016D3 12 1F 73         [24]  786 	lcall	__gptrget
      0016D6 F9               [12]  787 	mov	r1,a
      0016D7 B9 01 02         [24]  788 	cjne	r1,#0x01,00189$
      0016DA 80 2C            [24]  789 	sjmp	00105$
      0016DC                        790 00189$:
      0016DC B9 02 02         [24]  791 	cjne	r1,#0x02,00190$
      0016DF 80 3D            [24]  792 	sjmp	00109$
      0016E1                        793 00190$:
      0016E1 B9 03 02         [24]  794 	cjne	r1,#0x03,00191$
      0016E4 80 30            [24]  795 	sjmp	00107$
      0016E6                        796 00191$:
      0016E6 B9 04 02         [24]  797 	cjne	r1,#0x04,00192$
      0016E9 80 43            [24]  798 	sjmp	00111$
      0016EB                        799 00192$:
      0016EB B9 05 02         [24]  800 	cjne	r1,#0x05,00193$
      0016EE 80 20            [24]  801 	sjmp	00106$
      0016F0                        802 00193$:
      0016F0 B9 06 02         [24]  803 	cjne	r1,#0x06,00194$
      0016F3 80 29            [24]  804 	sjmp	00109$
      0016F5                        805 00194$:
      0016F5 B9 07 02         [24]  806 	cjne	r1,#0x07,00195$
      0016F8 80 34            [24]  807 	sjmp	00111$
      0016FA                        808 00195$:
      0016FA B9 08 02         [24]  809 	cjne	r1,#0x08,00196$
      0016FD 80 2F            [24]  810 	sjmp	00111$
      0016FF                        811 00196$:
      0016FF B9 80 02         [24]  812 	cjne	r1,#0x80,00197$
      001702 80 24            [24]  813 	sjmp	00110$
      001704                        814 00197$:
                                    815 ;	../libradio/conv.c:68: default: return 0;
      001704 90 00 00         [24]  816 	mov	dptr,#0x0000
      001707 22               [24]  817 	ret
                                    818 ;	../libradio/conv.c:76: case Trx:
      001708                        819 00105$:
                                    820 ;	../libradio/conv.c:78: size += 1; // filterbyte3
      001708 90 F2 77         [24]  821 	mov	dptr,#_convR2M_size_1_117
      00170B 74 06            [12]  822 	mov	a,#0x06
      00170D F0               [24]  823 	movx	@dptr,a
                                    824 ;	../libradio/conv.c:79: break;
                                    825 ;	../libradio/conv.c:81: case Ttxrx:
      00170E 80 1E            [24]  826 	sjmp	00111$
      001710                        827 00106$:
                                    828 ;	../libradio/conv.c:83: size += 1; // filterbyte3
      001710 90 F2 77         [24]  829 	mov	dptr,#_convR2M_size_1_117
      001713 74 06            [12]  830 	mov	a,#0x06
      001715 F0               [24]  831 	movx	@dptr,a
                                    832 ;	../libradio/conv.c:84: case Ttx:
      001716                        833 00107$:
                                    834 ;	../libradio/conv.c:85: size += 2; // preamble
      001716 90 F2 77         [24]  835 	mov	dptr,#_convR2M_size_1_117
      001719 E0               [24]  836 	movx	a,@dptr
      00171A F9               [12]  837 	mov	r1,a
      00171B 24 02            [12]  838 	add	a,#0x02
      00171D F0               [24]  839 	movx	@dptr,a
                                    840 ;	../libradio/conv.c:87: case Rtxrx:
      00171E                        841 00109$:
                                    842 ;	../libradio/conv.c:88: size += Npkt;
      00171E 90 F2 77         [24]  843 	mov	dptr,#_convR2M_size_1_117
      001721 E0               [24]  844 	movx	a,@dptr
      001722 F9               [12]  845 	mov	r1,a
      001723 24 4E            [12]  846 	add	a,#0x4E
      001725 F0               [24]  847 	movx	@dptr,a
                                    848 ;	../libradio/conv.c:89: break;
                                    849 ;	../libradio/conv.c:91: case Rerr:
      001726 80 06            [24]  850 	sjmp	00111$
      001728                        851 00110$:
                                    852 ;	../libradio/conv.c:92: size += 1;
      001728 90 F2 77         [24]  853 	mov	dptr,#_convR2M_size_1_117
      00172B 74 04            [12]  854 	mov	a,#0x04
      00172D F0               [24]  855 	movx	@dptr,a
                                    856 ;	../libradio/conv.c:94: }
      00172E                        857 00111$:
                                    858 ;	../libradio/conv.c:96: if(n < size)
      00172E 90 F2 70         [24]  859 	mov	dptr,#_convR2M_PARM_3
      001731 E0               [24]  860 	movx	a,@dptr
      001732 F9               [12]  861 	mov	r1,a
      001733 90 F2 77         [24]  862 	mov	dptr,#_convR2M_size_1_117
      001736 E0               [24]  863 	movx	a,@dptr
      001737 F8               [12]  864 	mov	r0,a
      001738 C3               [12]  865 	clr	c
      001739 E9               [12]  866 	mov	a,r1
      00173A 98               [12]  867 	subb	a,r0
      00173B 50 04            [24]  868 	jnc	00113$
                                    869 ;	../libradio/conv.c:97: return 0;
      00173D 90 00 00         [24]  870 	mov	dptr,#0x0000
      001740 22               [24]  871 	ret
      001741                        872 00113$:
                                    873 ;	../libradio/conv.c:99: U8PUT(p, size);
      001741 8D 82            [24]  874 	mov	dpl,r5
      001743 8E 83            [24]  875 	mov	dph,r6
      001745 8F F0            [24]  876 	mov	b,r7
      001747 E8               [12]  877 	mov	a,r0
      001748 12 1D 99         [24]  878 	lcall	__gptrput
                                    879 ;	../libradio/conv.c:100: p += 1;
      00174B C0 00            [24]  880 	push	ar0
      00174D 74 01            [12]  881 	mov	a,#0x01
      00174F 2D               [12]  882 	add	a,r5
      001750 F8               [12]  883 	mov	r0,a
      001751 E4               [12]  884 	clr	a
      001752 3E               [12]  885 	addc	a,r6
      001753 F9               [12]  886 	mov	r1,a
      001754 8F 04            [24]  887 	mov	ar4,r7
                                    888 ;	../libradio/conv.c:101: U8PUT(p, r->type);
      001756 85 29 82         [24]  889 	mov	dpl,_convR2M_sloc0_1_0
      001759 85 2A 83         [24]  890 	mov	dph,(_convR2M_sloc0_1_0 + 1)
      00175C 85 2B F0         [24]  891 	mov	b,(_convR2M_sloc0_1_0 + 2)
      00175F 12 1F 73         [24]  892 	lcall	__gptrget
      001762 FB               [12]  893 	mov	r3,a
      001763 88 82            [24]  894 	mov	dpl,r0
      001765 89 83            [24]  895 	mov	dph,r1
      001767 8C F0            [24]  896 	mov	b,r4
      001769 12 1D 99         [24]  897 	lcall	__gptrput
                                    898 ;	../libradio/conv.c:102: p += 1;
      00176C 74 02            [12]  899 	mov	a,#0x02
      00176E 2D               [12]  900 	add	a,r5
      00176F F5 2C            [12]  901 	mov	_convR2M_sloc1_1_0,a
      001771 E4               [12]  902 	clr	a
      001772 3E               [12]  903 	addc	a,r6
      001773 F5 2D            [12]  904 	mov	(_convR2M_sloc1_1_0 + 1),a
      001775 8F 2E            [24]  905 	mov	(_convR2M_sloc1_1_0 + 2),r7
                                    906 ;	../libradio/conv.c:103: U8PUT(p, r->flag);
      001777 74 01            [12]  907 	mov	a,#0x01
      001779 25 29            [12]  908 	add	a,_convR2M_sloc0_1_0
      00177B F8               [12]  909 	mov	r0,a
      00177C E4               [12]  910 	clr	a
      00177D 35 2A            [12]  911 	addc	a,(_convR2M_sloc0_1_0 + 1)
      00177F F9               [12]  912 	mov	r1,a
      001780 AC 2B            [24]  913 	mov	r4,(_convR2M_sloc0_1_0 + 2)
      001782 88 82            [24]  914 	mov	dpl,r0
      001784 89 83            [24]  915 	mov	dph,r1
      001786 8C F0            [24]  916 	mov	b,r4
      001788 12 1F 73         [24]  917 	lcall	__gptrget
      00178B F8               [12]  918 	mov	r0,a
      00178C 85 2C 82         [24]  919 	mov	dpl,_convR2M_sloc1_1_0
      00178F 85 2D 83         [24]  920 	mov	dph,(_convR2M_sloc1_1_0 + 1)
      001792 85 2E F0         [24]  921 	mov	b,(_convR2M_sloc1_1_0 + 2)
      001795 12 1D 99         [24]  922 	lcall	__gptrput
                                    923 ;	../libradio/conv.c:104: p += 1;
      001798 74 03            [12]  924 	mov	a,#0x03
      00179A 2D               [12]  925 	add	a,r5
      00179B F5 2C            [12]  926 	mov	_convR2M_sloc1_1_0,a
      00179D E4               [12]  927 	clr	a
      00179E 3E               [12]  928 	addc	a,r6
      00179F F5 2D            [12]  929 	mov	(_convR2M_sloc1_1_0 + 1),a
      0017A1 8F 2E            [24]  930 	mov	(_convR2M_sloc1_1_0 + 2),r7
      0017A3 90 F2 74         [24]  931 	mov	dptr,#_convR2M_p_1_117
      0017A6 E5 2C            [12]  932 	mov	a,_convR2M_sloc1_1_0
      0017A8 F0               [24]  933 	movx	@dptr,a
      0017A9 E5 2D            [12]  934 	mov	a,(_convR2M_sloc1_1_0 + 1)
      0017AB A3               [24]  935 	inc	dptr
      0017AC F0               [24]  936 	movx	@dptr,a
      0017AD E5 2E            [12]  937 	mov	a,(_convR2M_sloc1_1_0 + 2)
      0017AF A3               [24]  938 	inc	dptr
      0017B0 F0               [24]  939 	movx	@dptr,a
                                    940 ;	../libradio/conv.c:106: switch(r->type){
      0017B1 85 29 82         [24]  941 	mov	dpl,_convR2M_sloc0_1_0
      0017B4 85 2A 83         [24]  942 	mov	dph,(_convR2M_sloc0_1_0 + 1)
      0017B7 85 2B F0         [24]  943 	mov	b,(_convR2M_sloc0_1_0 + 2)
      0017BA 12 1F 73         [24]  944 	lcall	__gptrget
      0017BD F5 2F            [12]  945 	mov	_convR2M_sloc2_1_0,a
      0017BF 74 01            [12]  946 	mov	a,#0x01
      0017C1 B5 2F 04         [24]  947 	cjne	a,_convR2M_sloc2_1_0,00199$
      0017C4 D0 00            [24]  948 	pop	ar0
      0017C6 80 46            [24]  949 	sjmp	00118$
      0017C8                        950 00199$:
      0017C8 D0 00            [24]  951 	pop	ar0
      0017CA 74 02            [12]  952 	mov	a,#0x02
      0017CC B5 2F 03         [24]  953 	cjne	a,_convR2M_sloc2_1_0,00200$
      0017CF 02 19 9D         [24]  954 	ljmp	00122$
      0017D2                        955 00200$:
      0017D2 74 03            [12]  956 	mov	a,#0x03
      0017D4 B5 2F 03         [24]  957 	cjne	a,_convR2M_sloc2_1_0,00201$
      0017D7 02 19 29         [24]  958 	ljmp	00120$
      0017DA                        959 00201$:
      0017DA 74 04            [12]  960 	mov	a,#0x04
      0017DC B5 2F 03         [24]  961 	cjne	a,_convR2M_sloc2_1_0,00202$
      0017DF 02 1A 35         [24]  962 	ljmp	00124$
      0017E2                        963 00202$:
      0017E2 74 05            [12]  964 	mov	a,#0x05
      0017E4 B5 2F 03         [24]  965 	cjne	a,_convR2M_sloc2_1_0,00203$
      0017E7 02 18 9D         [24]  966 	ljmp	00119$
      0017EA                        967 00203$:
      0017EA 74 06            [12]  968 	mov	a,#0x06
      0017EC B5 2F 03         [24]  969 	cjne	a,_convR2M_sloc2_1_0,00204$
      0017EF 02 19 9D         [24]  970 	ljmp	00122$
      0017F2                        971 00204$:
      0017F2 74 07            [12]  972 	mov	a,#0x07
      0017F4 B5 2F 03         [24]  973 	cjne	a,_convR2M_sloc2_1_0,00205$
      0017F7 02 1A 35         [24]  974 	ljmp	00124$
      0017FA                        975 00205$:
      0017FA 74 08            [12]  976 	mov	a,#0x08
      0017FC B5 2F 03         [24]  977 	cjne	a,_convR2M_sloc2_1_0,00206$
      0017FF 02 1A 35         [24]  978 	ljmp	00124$
      001802                        979 00206$:
      001802 74 80            [12]  980 	mov	a,#0x80
      001804 B5 2F 03         [24]  981 	cjne	a,_convR2M_sloc2_1_0,00207$
      001807 02 1A 06         [24]  982 	ljmp	00123$
      00180A                        983 00207$:
                                    984 ;	../libradio/conv.c:109: return 0;
      00180A 90 00 00         [24]  985 	mov	dptr,#0x0000
      00180D 22               [24]  986 	ret
                                    987 ;	../libradio/conv.c:116: case Trx:
      00180E                        988 00118$:
                                    989 ;	../libradio/conv.c:117: U16PUT(p, r->timeoutms);
      00180E C0 00            [24]  990 	push	ar0
      001810 74 03            [12]  991 	mov	a,#0x03
      001812 25 29            [12]  992 	add	a,_convR2M_sloc0_1_0
      001814 F5 30            [12]  993 	mov	_convR2M_sloc3_1_0,a
      001816 E4               [12]  994 	clr	a
      001817 35 2A            [12]  995 	addc	a,(_convR2M_sloc0_1_0 + 1)
      001819 F5 31            [12]  996 	mov	(_convR2M_sloc3_1_0 + 1),a
      00181B 85 2B 32         [24]  997 	mov	(_convR2M_sloc3_1_0 + 2),(_convR2M_sloc0_1_0 + 2)
      00181E 85 30 82         [24]  998 	mov	dpl,_convR2M_sloc3_1_0
      001821 85 31 83         [24]  999 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      001824 85 32 F0         [24] 1000 	mov	b,(_convR2M_sloc3_1_0 + 2)
      001827 12 1F 73         [24] 1001 	lcall	__gptrget
      00182A A3               [24] 1002 	inc	dptr
      00182B 12 1F 73         [24] 1003 	lcall	__gptrget
      00182E 85 2C 82         [24] 1004 	mov	dpl,_convR2M_sloc1_1_0
      001831 85 2D 83         [24] 1005 	mov	dph,(_convR2M_sloc1_1_0 + 1)
      001834 85 2E F0         [24] 1006 	mov	b,(_convR2M_sloc1_1_0 + 2)
      001837 12 1D 99         [24] 1007 	lcall	__gptrput
      00183A 74 04            [12] 1008 	mov	a,#0x04
      00183C 2D               [12] 1009 	add	a,r5
      00183D F8               [12] 1010 	mov	r0,a
      00183E E4               [12] 1011 	clr	a
      00183F 3E               [12] 1012 	addc	a,r6
      001840 F9               [12] 1013 	mov	r1,a
      001841 8F 04            [24] 1014 	mov	ar4,r7
      001843 85 30 82         [24] 1015 	mov	dpl,_convR2M_sloc3_1_0
      001846 85 31 83         [24] 1016 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      001849 85 32 F0         [24] 1017 	mov	b,(_convR2M_sloc3_1_0 + 2)
      00184C 12 1F 73         [24] 1018 	lcall	__gptrget
      00184F FA               [12] 1019 	mov	r2,a
      001850 A3               [24] 1020 	inc	dptr
      001851 12 1F 73         [24] 1021 	lcall	__gptrget
      001854 FB               [12] 1022 	mov	r3,a
      001855 88 82            [24] 1023 	mov	dpl,r0
      001857 89 83            [24] 1024 	mov	dph,r1
      001859 8C F0            [24] 1025 	mov	b,r4
      00185B EA               [12] 1026 	mov	a,r2
      00185C 12 1D 99         [24] 1027 	lcall	__gptrput
                                   1028 ;	../libradio/conv.c:118: p += 2;
      00185F 74 05            [12] 1029 	mov	a,#0x05
      001861 2D               [12] 1030 	add	a,r5
      001862 F5 30            [12] 1031 	mov	_convR2M_sloc3_1_0,a
      001864 E4               [12] 1032 	clr	a
      001865 3E               [12] 1033 	addc	a,r6
      001866 F5 31            [12] 1034 	mov	(_convR2M_sloc3_1_0 + 1),a
      001868 8F 32            [24] 1035 	mov	(_convR2M_sloc3_1_0 + 2),r7
                                   1036 ;	../libradio/conv.c:119: U8PUT(p, r->filterbyte3);
      00186A 74 07            [12] 1037 	mov	a,#0x07
      00186C 25 29            [12] 1038 	add	a,_convR2M_sloc0_1_0
      00186E F8               [12] 1039 	mov	r0,a
      00186F E4               [12] 1040 	clr	a
      001870 35 2A            [12] 1041 	addc	a,(_convR2M_sloc0_1_0 + 1)
      001872 F9               [12] 1042 	mov	r1,a
      001873 AC 2B            [24] 1043 	mov	r4,(_convR2M_sloc0_1_0 + 2)
      001875 88 82            [24] 1044 	mov	dpl,r0
      001877 89 83            [24] 1045 	mov	dph,r1
      001879 8C F0            [24] 1046 	mov	b,r4
      00187B 12 1F 73         [24] 1047 	lcall	__gptrget
      00187E 85 30 82         [24] 1048 	mov	dpl,_convR2M_sloc3_1_0
      001881 85 31 83         [24] 1049 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      001884 85 32 F0         [24] 1050 	mov	b,(_convR2M_sloc3_1_0 + 2)
      001887 12 1D 99         [24] 1051 	lcall	__gptrput
                                   1052 ;	../libradio/conv.c:120: p += 1;
      00188A 90 F2 74         [24] 1053 	mov	dptr,#_convR2M_p_1_117
      00188D 74 06            [12] 1054 	mov	a,#0x06
      00188F 2D               [12] 1055 	add	a,r5
      001890 F0               [24] 1056 	movx	@dptr,a
      001891 E4               [12] 1057 	clr	a
      001892 3E               [12] 1058 	addc	a,r6
      001893 A3               [24] 1059 	inc	dptr
      001894 F0               [24] 1060 	movx	@dptr,a
      001895 EF               [12] 1061 	mov	a,r7
      001896 A3               [24] 1062 	inc	dptr
      001897 F0               [24] 1063 	movx	@dptr,a
                                   1064 ;	../libradio/conv.c:121: break;
      001898 D0 00            [24] 1065 	pop	ar0
      00189A 02 1A 35         [24] 1066 	ljmp	00124$
                                   1067 ;	../libradio/conv.c:123: case Ttxrx:
      00189D                       1068 00119$:
                                   1069 ;	../libradio/conv.c:124: U16PUT(p, r->timeoutms);
      00189D C0 00            [24] 1070 	push	ar0
      00189F 74 03            [12] 1071 	mov	a,#0x03
      0018A1 25 29            [12] 1072 	add	a,_convR2M_sloc0_1_0
      0018A3 F5 30            [12] 1073 	mov	_convR2M_sloc3_1_0,a
      0018A5 E4               [12] 1074 	clr	a
      0018A6 35 2A            [12] 1075 	addc	a,(_convR2M_sloc0_1_0 + 1)
      0018A8 F5 31            [12] 1076 	mov	(_convR2M_sloc3_1_0 + 1),a
      0018AA 85 2B 32         [24] 1077 	mov	(_convR2M_sloc3_1_0 + 2),(_convR2M_sloc0_1_0 + 2)
      0018AD 85 30 82         [24] 1078 	mov	dpl,_convR2M_sloc3_1_0
      0018B0 85 31 83         [24] 1079 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      0018B3 85 32 F0         [24] 1080 	mov	b,(_convR2M_sloc3_1_0 + 2)
      0018B6 12 1F 73         [24] 1081 	lcall	__gptrget
      0018B9 A3               [24] 1082 	inc	dptr
      0018BA 12 1F 73         [24] 1083 	lcall	__gptrget
      0018BD 85 2C 82         [24] 1084 	mov	dpl,_convR2M_sloc1_1_0
      0018C0 85 2D 83         [24] 1085 	mov	dph,(_convR2M_sloc1_1_0 + 1)
      0018C3 85 2E F0         [24] 1086 	mov	b,(_convR2M_sloc1_1_0 + 2)
      0018C6 12 1D 99         [24] 1087 	lcall	__gptrput
      0018C9 74 04            [12] 1088 	mov	a,#0x04
      0018CB 2D               [12] 1089 	add	a,r5
      0018CC F8               [12] 1090 	mov	r0,a
      0018CD E4               [12] 1091 	clr	a
      0018CE 3E               [12] 1092 	addc	a,r6
      0018CF F9               [12] 1093 	mov	r1,a
      0018D0 8F 04            [24] 1094 	mov	ar4,r7
      0018D2 85 30 82         [24] 1095 	mov	dpl,_convR2M_sloc3_1_0
      0018D5 85 31 83         [24] 1096 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      0018D8 85 32 F0         [24] 1097 	mov	b,(_convR2M_sloc3_1_0 + 2)
      0018DB 12 1F 73         [24] 1098 	lcall	__gptrget
      0018DE FA               [12] 1099 	mov	r2,a
      0018DF A3               [24] 1100 	inc	dptr
      0018E0 12 1F 73         [24] 1101 	lcall	__gptrget
      0018E3 FB               [12] 1102 	mov	r3,a
      0018E4 88 82            [24] 1103 	mov	dpl,r0
      0018E6 89 83            [24] 1104 	mov	dph,r1
      0018E8 8C F0            [24] 1105 	mov	b,r4
      0018EA EA               [12] 1106 	mov	a,r2
      0018EB 12 1D 99         [24] 1107 	lcall	__gptrput
                                   1108 ;	../libradio/conv.c:125: p += 2;
      0018EE 74 05            [12] 1109 	mov	a,#0x05
      0018F0 2D               [12] 1110 	add	a,r5
      0018F1 F5 30            [12] 1111 	mov	_convR2M_sloc3_1_0,a
      0018F3 E4               [12] 1112 	clr	a
      0018F4 3E               [12] 1113 	addc	a,r6
      0018F5 F5 31            [12] 1114 	mov	(_convR2M_sloc3_1_0 + 1),a
      0018F7 8F 32            [24] 1115 	mov	(_convR2M_sloc3_1_0 + 2),r7
                                   1116 ;	../libradio/conv.c:126: U8PUT(p, r->filterbyte3);
      0018F9 74 07            [12] 1117 	mov	a,#0x07
      0018FB 25 29            [12] 1118 	add	a,_convR2M_sloc0_1_0
      0018FD F8               [12] 1119 	mov	r0,a
      0018FE E4               [12] 1120 	clr	a
      0018FF 35 2A            [12] 1121 	addc	a,(_convR2M_sloc0_1_0 + 1)
      001901 F9               [12] 1122 	mov	r1,a
      001902 AC 2B            [24] 1123 	mov	r4,(_convR2M_sloc0_1_0 + 2)
      001904 88 82            [24] 1124 	mov	dpl,r0
      001906 89 83            [24] 1125 	mov	dph,r1
      001908 8C F0            [24] 1126 	mov	b,r4
      00190A 12 1F 73         [24] 1127 	lcall	__gptrget
      00190D 85 30 82         [24] 1128 	mov	dpl,_convR2M_sloc3_1_0
      001910 85 31 83         [24] 1129 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      001913 85 32 F0         [24] 1130 	mov	b,(_convR2M_sloc3_1_0 + 2)
      001916 12 1D 99         [24] 1131 	lcall	__gptrput
                                   1132 ;	../libradio/conv.c:127: p += 1;
      001919 90 F2 74         [24] 1133 	mov	dptr,#_convR2M_p_1_117
      00191C 74 06            [12] 1134 	mov	a,#0x06
      00191E 2D               [12] 1135 	add	a,r5
      00191F F0               [24] 1136 	movx	@dptr,a
      001920 E4               [12] 1137 	clr	a
      001921 3E               [12] 1138 	addc	a,r6
      001922 A3               [24] 1139 	inc	dptr
      001923 F0               [24] 1140 	movx	@dptr,a
      001924 EF               [12] 1141 	mov	a,r7
      001925 A3               [24] 1142 	inc	dptr
      001926 F0               [24] 1143 	movx	@dptr,a
                                   1144 ;	../libradio/conv.c:147: return size;
      001927 D0 00            [24] 1145 	pop	ar0
                                   1146 ;	../libradio/conv.c:128: case Ttx:
      001929                       1147 00120$:
                                   1148 ;	../libradio/conv.c:129: U16PUT(p, r->preamblems);
      001929 C0 00            [24] 1149 	push	ar0
      00192B 90 F2 74         [24] 1150 	mov	dptr,#_convR2M_p_1_117
      00192E E0               [24] 1151 	movx	a,@dptr
      00192F F5 30            [12] 1152 	mov	_convR2M_sloc3_1_0,a
      001931 A3               [24] 1153 	inc	dptr
      001932 E0               [24] 1154 	movx	a,@dptr
      001933 F5 31            [12] 1155 	mov	(_convR2M_sloc3_1_0 + 1),a
      001935 A3               [24] 1156 	inc	dptr
      001936 E0               [24] 1157 	movx	a,@dptr
      001937 F5 32            [12] 1158 	mov	(_convR2M_sloc3_1_0 + 2),a
      001939 74 05            [12] 1159 	mov	a,#0x05
      00193B 25 29            [12] 1160 	add	a,_convR2M_sloc0_1_0
      00193D F5 33            [12] 1161 	mov	_convR2M_sloc4_1_0,a
      00193F E4               [12] 1162 	clr	a
      001940 35 2A            [12] 1163 	addc	a,(_convR2M_sloc0_1_0 + 1)
      001942 F5 34            [12] 1164 	mov	(_convR2M_sloc4_1_0 + 1),a
      001944 85 2B 35         [24] 1165 	mov	(_convR2M_sloc4_1_0 + 2),(_convR2M_sloc0_1_0 + 2)
      001947 85 33 82         [24] 1166 	mov	dpl,_convR2M_sloc4_1_0
      00194A 85 34 83         [24] 1167 	mov	dph,(_convR2M_sloc4_1_0 + 1)
      00194D 85 35 F0         [24] 1168 	mov	b,(_convR2M_sloc4_1_0 + 2)
      001950 12 1F 73         [24] 1169 	lcall	__gptrget
      001953 A3               [24] 1170 	inc	dptr
      001954 12 1F 73         [24] 1171 	lcall	__gptrget
      001957 85 30 82         [24] 1172 	mov	dpl,_convR2M_sloc3_1_0
      00195A 85 31 83         [24] 1173 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      00195D 85 32 F0         [24] 1174 	mov	b,(_convR2M_sloc3_1_0 + 2)
      001960 12 1D 99         [24] 1175 	lcall	__gptrput
      001963 74 01            [12] 1176 	mov	a,#0x01
      001965 25 30            [12] 1177 	add	a,_convR2M_sloc3_1_0
      001967 FA               [12] 1178 	mov	r2,a
      001968 E4               [12] 1179 	clr	a
      001969 35 31            [12] 1180 	addc	a,(_convR2M_sloc3_1_0 + 1)
      00196B FB               [12] 1181 	mov	r3,a
      00196C AC 32            [24] 1182 	mov	r4,(_convR2M_sloc3_1_0 + 2)
      00196E 85 33 82         [24] 1183 	mov	dpl,_convR2M_sloc4_1_0
      001971 85 34 83         [24] 1184 	mov	dph,(_convR2M_sloc4_1_0 + 1)
      001974 85 35 F0         [24] 1185 	mov	b,(_convR2M_sloc4_1_0 + 2)
      001977 12 1F 73         [24] 1186 	lcall	__gptrget
      00197A F8               [12] 1187 	mov	r0,a
      00197B A3               [24] 1188 	inc	dptr
      00197C 12 1F 73         [24] 1189 	lcall	__gptrget
      00197F F9               [12] 1190 	mov	r1,a
      001980 8A 82            [24] 1191 	mov	dpl,r2
      001982 8B 83            [24] 1192 	mov	dph,r3
      001984 8C F0            [24] 1193 	mov	b,r4
      001986 E8               [12] 1194 	mov	a,r0
      001987 12 1D 99         [24] 1195 	lcall	__gptrput
                                   1196 ;	../libradio/conv.c:130: p += 2;
      00198A 90 F2 74         [24] 1197 	mov	dptr,#_convR2M_p_1_117
      00198D 74 02            [12] 1198 	mov	a,#0x02
      00198F 25 30            [12] 1199 	add	a,_convR2M_sloc3_1_0
      001991 F0               [24] 1200 	movx	@dptr,a
      001992 E4               [12] 1201 	clr	a
      001993 35 31            [12] 1202 	addc	a,(_convR2M_sloc3_1_0 + 1)
      001995 A3               [24] 1203 	inc	dptr
      001996 F0               [24] 1204 	movx	@dptr,a
      001997 E5 32            [12] 1205 	mov	a,(_convR2M_sloc3_1_0 + 2)
      001999 A3               [24] 1206 	inc	dptr
      00199A F0               [24] 1207 	movx	@dptr,a
                                   1208 ;	../libradio/conv.c:147: return size;
      00199B D0 00            [24] 1209 	pop	ar0
                                   1210 ;	../libradio/conv.c:133: case Rtxrx:
      00199D                       1211 00122$:
                                   1212 ;	../libradio/conv.c:134: memcpy(p, r->pkt, sizeof r->pkt);
      00199D C0 00            [24] 1213 	push	ar0
      00199F 90 F2 74         [24] 1214 	mov	dptr,#_convR2M_p_1_117
      0019A2 E0               [24] 1215 	movx	a,@dptr
      0019A3 F5 33            [12] 1216 	mov	_convR2M_sloc4_1_0,a
      0019A5 A3               [24] 1217 	inc	dptr
      0019A6 E0               [24] 1218 	movx	a,@dptr
      0019A7 F5 34            [12] 1219 	mov	(_convR2M_sloc4_1_0 + 1),a
      0019A9 A3               [24] 1220 	inc	dptr
      0019AA E0               [24] 1221 	movx	a,@dptr
      0019AB F5 35            [12] 1222 	mov	(_convR2M_sloc4_1_0 + 2),a
      0019AD 85 33 30         [24] 1223 	mov	_convR2M_sloc3_1_0,_convR2M_sloc4_1_0
      0019B0 85 34 31         [24] 1224 	mov	(_convR2M_sloc3_1_0 + 1),(_convR2M_sloc4_1_0 + 1)
      0019B3 85 35 32         [24] 1225 	mov	(_convR2M_sloc3_1_0 + 2),(_convR2M_sloc4_1_0 + 2)
      0019B6 74 08            [12] 1226 	mov	a,#0x08
      0019B8 25 29            [12] 1227 	add	a,_convR2M_sloc0_1_0
      0019BA FA               [12] 1228 	mov	r2,a
      0019BB E4               [12] 1229 	clr	a
      0019BC 35 2A            [12] 1230 	addc	a,(_convR2M_sloc0_1_0 + 1)
      0019BE FB               [12] 1231 	mov	r3,a
      0019BF AC 2B            [24] 1232 	mov	r4,(_convR2M_sloc0_1_0 + 2)
      0019C1 90 F2 7F         [24] 1233 	mov	dptr,#_memcpy_PARM_2
      0019C4 EA               [12] 1234 	mov	a,r2
      0019C5 F0               [24] 1235 	movx	@dptr,a
      0019C6 EB               [12] 1236 	mov	a,r3
      0019C7 A3               [24] 1237 	inc	dptr
      0019C8 F0               [24] 1238 	movx	@dptr,a
      0019C9 EC               [12] 1239 	mov	a,r4
      0019CA A3               [24] 1240 	inc	dptr
      0019CB F0               [24] 1241 	movx	@dptr,a
      0019CC 90 F2 82         [24] 1242 	mov	dptr,#_memcpy_PARM_3
      0019CF 74 4E            [12] 1243 	mov	a,#0x4E
      0019D1 F0               [24] 1244 	movx	@dptr,a
      0019D2 E4               [12] 1245 	clr	a
      0019D3 A3               [24] 1246 	inc	dptr
      0019D4 F0               [24] 1247 	movx	@dptr,a
      0019D5 85 30 82         [24] 1248 	mov	dpl,_convR2M_sloc3_1_0
      0019D8 85 31 83         [24] 1249 	mov	dph,(_convR2M_sloc3_1_0 + 1)
      0019DB 85 32 F0         [24] 1250 	mov	b,(_convR2M_sloc3_1_0 + 2)
      0019DE C0 07            [24] 1251 	push	ar7
      0019E0 C0 06            [24] 1252 	push	ar6
      0019E2 C0 05            [24] 1253 	push	ar5
      0019E4 C0 00            [24] 1254 	push	ar0
      0019E6 12 1C D9         [24] 1255 	lcall	_memcpy
      0019E9 D0 00            [24] 1256 	pop	ar0
      0019EB D0 05            [24] 1257 	pop	ar5
      0019ED D0 06            [24] 1258 	pop	ar6
      0019EF D0 07            [24] 1259 	pop	ar7
                                   1260 ;	../libradio/conv.c:135: p += sizeof r->pkt;
      0019F1 90 F2 74         [24] 1261 	mov	dptr,#_convR2M_p_1_117
      0019F4 74 4E            [12] 1262 	mov	a,#0x4E
      0019F6 25 33            [12] 1263 	add	a,_convR2M_sloc4_1_0
      0019F8 F0               [24] 1264 	movx	@dptr,a
      0019F9 E4               [12] 1265 	clr	a
      0019FA 35 34            [12] 1266 	addc	a,(_convR2M_sloc4_1_0 + 1)
      0019FC A3               [24] 1267 	inc	dptr
      0019FD F0               [24] 1268 	movx	@dptr,a
      0019FE E5 35            [12] 1269 	mov	a,(_convR2M_sloc4_1_0 + 2)
      001A00 A3               [24] 1270 	inc	dptr
      001A01 F0               [24] 1271 	movx	@dptr,a
                                   1272 ;	../libradio/conv.c:136: break;
      001A02 D0 00            [24] 1273 	pop	ar0
                                   1274 ;	../libradio/conv.c:138: case Rerr:
      001A04 80 2F            [24] 1275 	sjmp	00124$
      001A06                       1276 00123$:
                                   1277 ;	../libradio/conv.c:139: U8PUT(p, r->err);
      001A06 74 02            [12] 1278 	mov	a,#0x02
      001A08 25 29            [12] 1279 	add	a,_convR2M_sloc0_1_0
      001A0A FA               [12] 1280 	mov	r2,a
      001A0B E4               [12] 1281 	clr	a
      001A0C 35 2A            [12] 1282 	addc	a,(_convR2M_sloc0_1_0 + 1)
      001A0E FB               [12] 1283 	mov	r3,a
      001A0F AC 2B            [24] 1284 	mov	r4,(_convR2M_sloc0_1_0 + 2)
      001A11 8A 82            [24] 1285 	mov	dpl,r2
      001A13 8B 83            [24] 1286 	mov	dph,r3
      001A15 8C F0            [24] 1287 	mov	b,r4
      001A17 12 1F 73         [24] 1288 	lcall	__gptrget
      001A1A FA               [12] 1289 	mov	r2,a
      001A1B 85 2C 82         [24] 1290 	mov	dpl,_convR2M_sloc1_1_0
      001A1E 85 2D 83         [24] 1291 	mov	dph,(_convR2M_sloc1_1_0 + 1)
      001A21 85 2E F0         [24] 1292 	mov	b,(_convR2M_sloc1_1_0 + 2)
      001A24 12 1D 99         [24] 1293 	lcall	__gptrput
                                   1294 ;	../libradio/conv.c:140: p += 1;
      001A27 90 F2 74         [24] 1295 	mov	dptr,#_convR2M_p_1_117
      001A2A 74 04            [12] 1296 	mov	a,#0x04
      001A2C 2D               [12] 1297 	add	a,r5
      001A2D F0               [24] 1298 	movx	@dptr,a
      001A2E E4               [12] 1299 	clr	a
      001A2F 3E               [12] 1300 	addc	a,r6
      001A30 A3               [24] 1301 	inc	dptr
      001A31 F0               [24] 1302 	movx	@dptr,a
      001A32 EF               [12] 1303 	mov	a,r7
      001A33 A3               [24] 1304 	inc	dptr
      001A34 F0               [24] 1305 	movx	@dptr,a
                                   1306 ;	../libradio/conv.c:142: }
      001A35                       1307 00124$:
                                   1308 ;	../libradio/conv.c:144: if(size != p-ap)
      001A35 90 F2 74         [24] 1309 	mov	dptr,#_convR2M_p_1_117
      001A38 E0               [24] 1310 	movx	a,@dptr
      001A39 FA               [12] 1311 	mov	r2,a
      001A3A A3               [24] 1312 	inc	dptr
      001A3B E0               [24] 1313 	movx	a,@dptr
      001A3C FB               [12] 1314 	mov	r3,a
      001A3D A3               [24] 1315 	inc	dptr
      001A3E E0               [24] 1316 	movx	a,@dptr
      001A3F EA               [12] 1317 	mov	a,r2
      001A40 C3               [12] 1318 	clr	c
      001A41 9D               [12] 1319 	subb	a,r5
      001A42 FD               [12] 1320 	mov	r5,a
      001A43 EB               [12] 1321 	mov	a,r3
      001A44 9E               [12] 1322 	subb	a,r6
      001A45 FE               [12] 1323 	mov	r6,a
      001A46 88 04            [24] 1324 	mov	ar4,r0
      001A48 7F 00            [12] 1325 	mov	r7,#0x00
      001A4A EC               [12] 1326 	mov	a,r4
      001A4B B5 05 06         [24] 1327 	cjne	a,ar5,00208$
      001A4E EF               [12] 1328 	mov	a,r7
      001A4F B5 06 02         [24] 1329 	cjne	a,ar6,00208$
      001A52 80 04            [24] 1330 	sjmp	00126$
      001A54                       1331 00208$:
                                   1332 ;	../libradio/conv.c:145: return 0;
      001A54 90 00 00         [24] 1333 	mov	dptr,#0x0000
      001A57 22               [24] 1334 	ret
      001A58                       1335 00126$:
                                   1336 ;	../libradio/conv.c:147: return size;
      001A58 7F 00            [12] 1337 	mov	r7,#0x00
      001A5A 88 82            [24] 1338 	mov	dpl,r0
      001A5C 8F 83            [24] 1339 	mov	dph,r7
      001A5E 22               [24] 1340 	ret
                                   1341 	.area CSEG    (CODE)
                                   1342 	.area CONST   (CODE)
                                   1343 	.area XINIT   (CODE)
                                   1344 	.area CABS    (ABS,CODE)
