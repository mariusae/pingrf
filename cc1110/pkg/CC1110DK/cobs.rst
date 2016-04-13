                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
                                      4 ; This file was generated Fri Mar 18 21:19:19 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module cobs
                                      7 	.optsdcc -mmcs51 --model-large
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _unstuff
                                     13 	.globl _stuff
                                     14 	.globl _unstuff_PARM_3
                                     15 	.globl _unstuff_PARM_2
                                     16 	.globl _stuff_PARM_2
                                     17 ;--------------------------------------------------------
                                     18 ; special function registers
                                     19 ;--------------------------------------------------------
                                     20 	.area RSEG    (ABS,DATA)
      000000                         21 	.org 0x0000
                                     22 ;--------------------------------------------------------
                                     23 ; special function bits
                                     24 ;--------------------------------------------------------
                                     25 	.area RSEG    (ABS,DATA)
      000000                         26 	.org 0x0000
                                     27 ;--------------------------------------------------------
                                     28 ; overlayable register banks
                                     29 ;--------------------------------------------------------
                                     30 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                         31 	.ds 8
                                     32 ;--------------------------------------------------------
                                     33 ; internal ram data
                                     34 ;--------------------------------------------------------
                                     35 	.area DSEG    (DATA)
                                     36 ;--------------------------------------------------------
                                     37 ; overlayable items in internal ram 
                                     38 ;--------------------------------------------------------
                                     39 	.area	OSEG    (OVR,DATA)
      000036                         40 _stuff_sloc0_1_0:
      000036                         41 	.ds 3
      000039                         42 _stuff_sloc1_1_0:
      000039                         43 	.ds 3
      00003C                         44 _stuff_sloc2_1_0:
      00003C                         45 	.ds 3
                                     46 ;--------------------------------------------------------
                                     47 ; indirectly addressable internal ram data
                                     48 ;--------------------------------------------------------
                                     49 	.area ISEG    (DATA)
                                     50 ;--------------------------------------------------------
                                     51 ; absolute internal ram data
                                     52 ;--------------------------------------------------------
                                     53 	.area IABS    (ABS,DATA)
                                     54 	.area IABS    (ABS,DATA)
                                     55 ;--------------------------------------------------------
                                     56 ; bit data
                                     57 ;--------------------------------------------------------
                                     58 	.area BSEG    (BIT)
                                     59 ;--------------------------------------------------------
                                     60 ; paged external ram data
                                     61 ;--------------------------------------------------------
                                     62 	.area PSEG    (PAG,XDATA)
                                     63 ;--------------------------------------------------------
                                     64 ; external ram data
                                     65 ;--------------------------------------------------------
                                     66 	.area XSEG    (XDATA)
      00F255                         67 _stuff_PARM_2:
      00F255                         68 	.ds 1
      00F256                         69 _stuff_p_1_21:
      00F256                         70 	.ds 3
      00F259                         71 _stuff_header_1_22:
      00F259                         72 	.ds 1
      00F25A                         73 _stuff_cp_1_22:
      00F25A                         74 	.ds 3
      00F25D                         75 _unstuff_PARM_2:
      00F25D                         76 	.ds 3
      00F260                         77 _unstuff_PARM_3:
      00F260                         78 	.ds 1
      00F261                         79 _unstuff_h_1_25:
      00F261                         80 	.ds 1
      00F262                         81 _unstuff_ep_1_26:
      00F262                         82 	.ds 3
                                     83 ;--------------------------------------------------------
                                     84 ; absolute external ram data
                                     85 ;--------------------------------------------------------
                                     86 	.area XABS    (ABS,XDATA)
                                     87 ;--------------------------------------------------------
                                     88 ; external initialized ram data
                                     89 ;--------------------------------------------------------
                                     90 	.area XISEG   (XDATA)
                                     91 	.area HOME    (CODE)
                                     92 	.area GSINIT0 (CODE)
                                     93 	.area GSINIT1 (CODE)
                                     94 	.area GSINIT2 (CODE)
                                     95 	.area GSINIT3 (CODE)
                                     96 	.area GSINIT4 (CODE)
                                     97 	.area GSINIT5 (CODE)
                                     98 	.area GSINIT  (CODE)
                                     99 	.area GSFINAL (CODE)
                                    100 	.area CSEG    (CODE)
                                    101 ;--------------------------------------------------------
                                    102 ; global & static initialisations
                                    103 ;--------------------------------------------------------
                                    104 	.area HOME    (CODE)
                                    105 	.area GSINIT  (CODE)
                                    106 	.area GSFINAL (CODE)
                                    107 	.area GSINIT  (CODE)
                                    108 ;--------------------------------------------------------
                                    109 ; Home
                                    110 ;--------------------------------------------------------
                                    111 	.area HOME    (CODE)
                                    112 	.area HOME    (CODE)
                                    113 ;--------------------------------------------------------
                                    114 ; code
                                    115 ;--------------------------------------------------------
                                    116 	.area CSEG    (CODE)
                                    117 ;------------------------------------------------------------
                                    118 ;Allocation info for local variables in function 'stuff'
                                    119 ;------------------------------------------------------------
                                    120 ;n                         Allocated with name '_stuff_PARM_2'
                                    121 ;p                         Allocated with name '_stuff_p_1_21'
                                    122 ;header                    Allocated with name '_stuff_header_1_22'
                                    123 ;cp                        Allocated with name '_stuff_cp_1_22'
                                    124 ;bp                        Allocated with name '_stuff_bp_1_22'
                                    125 ;ep                        Allocated with name '_stuff_ep_1_22'
                                    126 ;sloc0                     Allocated with name '_stuff_sloc0_1_0'
                                    127 ;sloc1                     Allocated with name '_stuff_sloc1_1_0'
                                    128 ;sloc2                     Allocated with name '_stuff_sloc2_1_0'
                                    129 ;------------------------------------------------------------
                                    130 ;	cobs.c:6: stuff(uint8 *p, uint8 n)
                                    131 ;	-----------------------------------------
                                    132 ;	 function stuff
                                    133 ;	-----------------------------------------
      001187                        134 _stuff:
                           000007   135 	ar7 = 0x07
                           000006   136 	ar6 = 0x06
                           000005   137 	ar5 = 0x05
                           000004   138 	ar4 = 0x04
                           000003   139 	ar3 = 0x03
                           000002   140 	ar2 = 0x02
                           000001   141 	ar1 = 0x01
                           000000   142 	ar0 = 0x00
      001187 AF F0            [24]  143 	mov	r7,b
      001189 AE 83            [24]  144 	mov	r6,dph
      00118B E5 82            [12]  145 	mov	a,dpl
      00118D 90 F2 56         [24]  146 	mov	dptr,#_stuff_p_1_21
      001190 F0               [24]  147 	movx	@dptr,a
      001191 EE               [12]  148 	mov	a,r6
      001192 A3               [24]  149 	inc	dptr
      001193 F0               [24]  150 	movx	@dptr,a
      001194 EF               [12]  151 	mov	a,r7
      001195 A3               [24]  152 	inc	dptr
      001196 F0               [24]  153 	movx	@dptr,a
                                    154 ;	cobs.c:8: uint8 header = n+1, *cp = nil;
      001197 90 F2 55         [24]  155 	mov	dptr,#_stuff_PARM_2
      00119A E0               [24]  156 	movx	a,@dptr
      00119B FF               [12]  157 	mov	r7,a
      00119C 90 F2 59         [24]  158 	mov	dptr,#_stuff_header_1_22
      00119F 04               [12]  159 	inc	a
      0011A0 F0               [24]  160 	movx	@dptr,a
      0011A1 90 F2 5A         [24]  161 	mov	dptr,#_stuff_cp_1_22
      0011A4 E4               [12]  162 	clr	a
      0011A5 F0               [24]  163 	movx	@dptr,a
      0011A6 A3               [24]  164 	inc	dptr
      0011A7 F0               [24]  165 	movx	@dptr,a
      0011A8 A3               [24]  166 	inc	dptr
      0011A9 F0               [24]  167 	movx	@dptr,a
                                    168 ;	cobs.c:9: uint8 *bp = p, *ep = bp + n;
      0011AA 90 F2 56         [24]  169 	mov	dptr,#_stuff_p_1_21
      0011AD E0               [24]  170 	movx	a,@dptr
      0011AE FC               [12]  171 	mov	r4,a
      0011AF A3               [24]  172 	inc	dptr
      0011B0 E0               [24]  173 	movx	a,@dptr
      0011B1 FD               [12]  174 	mov	r5,a
      0011B2 A3               [24]  175 	inc	dptr
      0011B3 E0               [24]  176 	movx	a,@dptr
      0011B4 FE               [12]  177 	mov	r6,a
      0011B5 EF               [12]  178 	mov	a,r7
      0011B6 2C               [12]  179 	add	a,r4
      0011B7 F5 39            [12]  180 	mov	_stuff_sloc1_1_0,a
      0011B9 E4               [12]  181 	clr	a
      0011BA 3D               [12]  182 	addc	a,r5
      0011BB F5 3A            [12]  183 	mov	(_stuff_sloc1_1_0 + 1),a
      0011BD 8E 3B            [24]  184 	mov	(_stuff_sloc1_1_0 + 2),r6
                                    185 ;	cobs.c:25: return header;
      0011BF 8C 36            [24]  186 	mov	_stuff_sloc0_1_0,r4
      0011C1 8D 37            [24]  187 	mov	(_stuff_sloc0_1_0 + 1),r5
      0011C3 8E 38            [24]  188 	mov	(_stuff_sloc0_1_0 + 2),r6
      0011C5 8C 3C            [24]  189 	mov	_stuff_sloc2_1_0,r4
      0011C7 8D 3D            [24]  190 	mov	(_stuff_sloc2_1_0 + 1),r5
      0011C9 8E 3E            [24]  191 	mov	(_stuff_sloc2_1_0 + 2),r6
      0011CB                        192 00110$:
                                    193 ;	cobs.c:11: for(; p<ep; p++){
      0011CB A8 3C            [24]  194 	mov	r0,_stuff_sloc2_1_0
      0011CD A9 3D            [24]  195 	mov	r1,(_stuff_sloc2_1_0 + 1)
      0011CF AF 3E            [24]  196 	mov	r7,(_stuff_sloc2_1_0 + 2)
      0011D1 C0 39            [24]  197 	push	_stuff_sloc1_1_0
      0011D3 C0 3A            [24]  198 	push	(_stuff_sloc1_1_0 + 1)
      0011D5 C0 3B            [24]  199 	push	(_stuff_sloc1_1_0 + 2)
      0011D7 88 82            [24]  200 	mov	dpl,r0
      0011D9 89 83            [24]  201 	mov	dph,r1
      0011DB 8F F0            [24]  202 	mov	b,r7
      0011DD 12 00 89         [24]  203 	lcall	___gptr_cmp
      0011E0 15 81            [12]  204 	dec	sp
      0011E2 15 81            [12]  205 	dec	sp
      0011E4 15 81            [12]  206 	dec	sp
      0011E6 50 72            [24]  207 	jnc	00119$
                                    208 ;	cobs.c:12: if(*p == 0){
      0011E8 85 3C 82         [24]  209 	mov	dpl,_stuff_sloc2_1_0
      0011EB 85 3D 83         [24]  210 	mov	dph,(_stuff_sloc2_1_0 + 1)
      0011EE 85 3E F0         [24]  211 	mov	b,(_stuff_sloc2_1_0 + 2)
      0011F1 12 1F 77         [24]  212 	lcall	__gptrget
      0011F4 70 4B            [24]  213 	jnz	00111$
                                    214 ;	cobs.c:13: if(cp == nil)
      0011F6 90 F2 5A         [24]  215 	mov	dptr,#_stuff_cp_1_22
      0011F9 E0               [24]  216 	movx	a,@dptr
      0011FA FA               [12]  217 	mov	r2,a
      0011FB A3               [24]  218 	inc	dptr
      0011FC E0               [24]  219 	movx	a,@dptr
      0011FD FB               [12]  220 	mov	r3,a
      0011FE A3               [24]  221 	inc	dptr
      0011FF E0               [24]  222 	movx	a,@dptr
      001200 FF               [12]  223 	mov	r7,a
      001201 EA               [12]  224 	mov	a,r2
      001202 4B               [12]  225 	orl	a,r3
      001203 70 1B            [24]  226 	jnz	00102$
                                    227 ;	cobs.c:14: header = 1+p-bp;
      001205 74 01            [12]  228 	mov	a,#0x01
      001207 25 3C            [12]  229 	add	a,_stuff_sloc2_1_0
      001209 F8               [12]  230 	mov	r0,a
      00120A E4               [12]  231 	clr	a
      00120B 35 3D            [12]  232 	addc	a,(_stuff_sloc2_1_0 + 1)
      00120D F9               [12]  233 	mov	r1,a
      00120E AE 3E            [24]  234 	mov	r6,(_stuff_sloc2_1_0 + 2)
      001210 E8               [12]  235 	mov	a,r0
      001211 C3               [12]  236 	clr	c
      001212 95 36            [12]  237 	subb	a,_stuff_sloc0_1_0
      001214 F8               [12]  238 	mov	r0,a
      001215 E9               [12]  239 	mov	a,r1
      001216 95 37            [12]  240 	subb	a,(_stuff_sloc0_1_0 + 1)
      001218 F9               [12]  241 	mov	r1,a
      001219 90 F2 59         [24]  242 	mov	dptr,#_stuff_header_1_22
      00121C E8               [12]  243 	mov	a,r0
      00121D F0               [24]  244 	movx	@dptr,a
      00121E 80 13            [24]  245 	sjmp	00103$
      001220                        246 00102$:
                                    247 ;	cobs.c:16: *cp = p-cp;
      001220 E5 3C            [12]  248 	mov	a,_stuff_sloc2_1_0
      001222 C3               [12]  249 	clr	c
      001223 9A               [12]  250 	subb	a,r2
      001224 FD               [12]  251 	mov	r5,a
      001225 E5 3D            [12]  252 	mov	a,(_stuff_sloc2_1_0 + 1)
      001227 9B               [12]  253 	subb	a,r3
      001228 FE               [12]  254 	mov	r6,a
      001229 8A 82            [24]  255 	mov	dpl,r2
      00122B 8B 83            [24]  256 	mov	dph,r3
      00122D 8F F0            [24]  257 	mov	b,r7
      00122F ED               [12]  258 	mov	a,r5
      001230 12 1D 9D         [24]  259 	lcall	__gptrput
      001233                        260 00103$:
                                    261 ;	cobs.c:18: cp = p;
      001233 90 F2 5A         [24]  262 	mov	dptr,#_stuff_cp_1_22
      001236 E5 3C            [12]  263 	mov	a,_stuff_sloc2_1_0
      001238 F0               [24]  264 	movx	@dptr,a
      001239 E5 3D            [12]  265 	mov	a,(_stuff_sloc2_1_0 + 1)
      00123B A3               [24]  266 	inc	dptr
      00123C F0               [24]  267 	movx	@dptr,a
      00123D E5 3E            [12]  268 	mov	a,(_stuff_sloc2_1_0 + 2)
      00123F A3               [24]  269 	inc	dptr
      001240 F0               [24]  270 	movx	@dptr,a
      001241                        271 00111$:
                                    272 ;	cobs.c:11: for(; p<ep; p++){
      001241 05 3C            [12]  273 	inc	_stuff_sloc2_1_0
      001243 E4               [12]  274 	clr	a
      001244 B5 3C 02         [24]  275 	cjne	a,_stuff_sloc2_1_0,00133$
      001247 05 3D            [12]  276 	inc	(_stuff_sloc2_1_0 + 1)
      001249                        277 00133$:
      001249 90 F2 56         [24]  278 	mov	dptr,#_stuff_p_1_21
      00124C E5 3C            [12]  279 	mov	a,_stuff_sloc2_1_0
      00124E F0               [24]  280 	movx	@dptr,a
      00124F E5 3D            [12]  281 	mov	a,(_stuff_sloc2_1_0 + 1)
      001251 A3               [24]  282 	inc	dptr
      001252 F0               [24]  283 	movx	@dptr,a
      001253 E5 3E            [12]  284 	mov	a,(_stuff_sloc2_1_0 + 2)
      001255 A3               [24]  285 	inc	dptr
      001256 F0               [24]  286 	movx	@dptr,a
      001257 02 11 CB         [24]  287 	ljmp	00110$
      00125A                        288 00119$:
      00125A 90 F2 56         [24]  289 	mov	dptr,#_stuff_p_1_21
      00125D E5 3C            [12]  290 	mov	a,_stuff_sloc2_1_0
      00125F F0               [24]  291 	movx	@dptr,a
      001260 E5 3D            [12]  292 	mov	a,(_stuff_sloc2_1_0 + 1)
      001262 A3               [24]  293 	inc	dptr
      001263 F0               [24]  294 	movx	@dptr,a
      001264 E5 3E            [12]  295 	mov	a,(_stuff_sloc2_1_0 + 2)
      001266 A3               [24]  296 	inc	dptr
      001267 F0               [24]  297 	movx	@dptr,a
                                    298 ;	cobs.c:22: if(cp != nil)
      001268 90 F2 5A         [24]  299 	mov	dptr,#_stuff_cp_1_22
      00126B E0               [24]  300 	movx	a,@dptr
      00126C FD               [12]  301 	mov	r5,a
      00126D A3               [24]  302 	inc	dptr
      00126E E0               [24]  303 	movx	a,@dptr
      00126F FE               [12]  304 	mov	r6,a
      001270 A3               [24]  305 	inc	dptr
      001271 E0               [24]  306 	movx	a,@dptr
      001272 FF               [12]  307 	mov	r7,a
      001273 ED               [12]  308 	mov	a,r5
      001274 4E               [12]  309 	orl	a,r6
      001275 60 13            [24]  310 	jz	00108$
                                    311 ;	cobs.c:23: *cp = p-cp;
      001277 E5 3C            [12]  312 	mov	a,_stuff_sloc2_1_0
      001279 C3               [12]  313 	clr	c
      00127A 9D               [12]  314 	subb	a,r5
      00127B FB               [12]  315 	mov	r3,a
      00127C E5 3D            [12]  316 	mov	a,(_stuff_sloc2_1_0 + 1)
      00127E 9E               [12]  317 	subb	a,r6
      00127F FC               [12]  318 	mov	r4,a
      001280 8D 82            [24]  319 	mov	dpl,r5
      001282 8E 83            [24]  320 	mov	dph,r6
      001284 8F F0            [24]  321 	mov	b,r7
      001286 EB               [12]  322 	mov	a,r3
      001287 12 1D 9D         [24]  323 	lcall	__gptrput
      00128A                        324 00108$:
                                    325 ;	cobs.c:25: return header;
      00128A 90 F2 59         [24]  326 	mov	dptr,#_stuff_header_1_22
      00128D E0               [24]  327 	movx	a,@dptr
      00128E F5 82            [12]  328 	mov	dpl,a
      001290 22               [24]  329 	ret
                                    330 ;------------------------------------------------------------
                                    331 ;Allocation info for local variables in function 'unstuff'
                                    332 ;------------------------------------------------------------
                                    333 ;p                         Allocated with name '_unstuff_PARM_2'
                                    334 ;n                         Allocated with name '_unstuff_PARM_3'
                                    335 ;h                         Allocated with name '_unstuff_h_1_25'
                                    336 ;ep                        Allocated with name '_unstuff_ep_1_26'
                                    337 ;tmp                       Allocated with name '_unstuff_tmp_1_26'
                                    338 ;------------------------------------------------------------
                                    339 ;	cobs.c:29: unstuff(uint8 h, uint8 *p, uint8 n)
                                    340 ;	-----------------------------------------
                                    341 ;	 function unstuff
                                    342 ;	-----------------------------------------
      001291                        343 _unstuff:
      001291 E5 82            [12]  344 	mov	a,dpl
      001293 90 F2 61         [24]  345 	mov	dptr,#_unstuff_h_1_25
      001296 F0               [24]  346 	movx	@dptr,a
                                    347 ;	cobs.c:31: uint8 *ep = p+n;
      001297 90 F2 5D         [24]  348 	mov	dptr,#_unstuff_PARM_2
      00129A E0               [24]  349 	movx	a,@dptr
      00129B FD               [12]  350 	mov	r5,a
      00129C A3               [24]  351 	inc	dptr
      00129D E0               [24]  352 	movx	a,@dptr
      00129E FE               [12]  353 	mov	r6,a
      00129F A3               [24]  354 	inc	dptr
      0012A0 E0               [24]  355 	movx	a,@dptr
      0012A1 FF               [12]  356 	mov	r7,a
      0012A2 90 F2 60         [24]  357 	mov	dptr,#_unstuff_PARM_3
      0012A5 E0               [24]  358 	movx	a,@dptr
      0012A6 90 F2 62         [24]  359 	mov	dptr,#_unstuff_ep_1_26
      0012A9 2D               [12]  360 	add	a,r5
      0012AA F0               [24]  361 	movx	@dptr,a
      0012AB E4               [12]  362 	clr	a
      0012AC 3E               [12]  363 	addc	a,r6
      0012AD A3               [24]  364 	inc	dptr
      0012AE F0               [24]  365 	movx	@dptr,a
      0012AF EF               [12]  366 	mov	a,r7
      0012B0 A3               [24]  367 	inc	dptr
      0012B1 F0               [24]  368 	movx	@dptr,a
                                    369 ;	cobs.c:34: p += h-1;
      0012B2 90 F2 61         [24]  370 	mov	dptr,#_unstuff_h_1_25
      0012B5 E0               [24]  371 	movx	a,@dptr
      0012B6 FC               [12]  372 	mov	r4,a
      0012B7 14               [12]  373 	dec	a
      0012B8 90 F2 5D         [24]  374 	mov	dptr,#_unstuff_PARM_2
      0012BB 2D               [12]  375 	add	a,r5
      0012BC F0               [24]  376 	movx	@dptr,a
      0012BD E4               [12]  377 	clr	a
      0012BE 3E               [12]  378 	addc	a,r6
      0012BF A3               [24]  379 	inc	dptr
      0012C0 F0               [24]  380 	movx	@dptr,a
      0012C1 EF               [12]  381 	mov	a,r7
      0012C2 A3               [24]  382 	inc	dptr
      0012C3 F0               [24]  383 	movx	@dptr,a
                                    384 ;	cobs.c:36: while(p < ep){
      0012C4 90 F2 62         [24]  385 	mov	dptr,#_unstuff_ep_1_26
      0012C7 E0               [24]  386 	movx	a,@dptr
      0012C8 FD               [12]  387 	mov	r5,a
      0012C9 A3               [24]  388 	inc	dptr
      0012CA E0               [24]  389 	movx	a,@dptr
      0012CB FE               [12]  390 	mov	r6,a
      0012CC A3               [24]  391 	inc	dptr
      0012CD E0               [24]  392 	movx	a,@dptr
      0012CE FF               [12]  393 	mov	r7,a
      0012CF                        394 00101$:
      0012CF 90 F2 5D         [24]  395 	mov	dptr,#_unstuff_PARM_2
      0012D2 E0               [24]  396 	movx	a,@dptr
      0012D3 FA               [12]  397 	mov	r2,a
      0012D4 A3               [24]  398 	inc	dptr
      0012D5 E0               [24]  399 	movx	a,@dptr
      0012D6 FB               [12]  400 	mov	r3,a
      0012D7 A3               [24]  401 	inc	dptr
      0012D8 E0               [24]  402 	movx	a,@dptr
      0012D9 FC               [12]  403 	mov	r4,a
      0012DA C0 05            [24]  404 	push	ar5
      0012DC C0 06            [24]  405 	push	ar6
      0012DE C0 07            [24]  406 	push	ar7
      0012E0 8A 82            [24]  407 	mov	dpl,r2
      0012E2 8B 83            [24]  408 	mov	dph,r3
      0012E4 8C F0            [24]  409 	mov	b,r4
      0012E6 12 00 89         [24]  410 	lcall	___gptr_cmp
      0012E9 15 81            [12]  411 	dec	sp
      0012EB 15 81            [12]  412 	dec	sp
      0012ED 15 81            [12]  413 	dec	sp
      0012EF 50 23            [24]  414 	jnc	00104$
                                    415 ;	cobs.c:37: tmp = *p;
      0012F1 8A 82            [24]  416 	mov	dpl,r2
      0012F3 8B 83            [24]  417 	mov	dph,r3
      0012F5 8C F0            [24]  418 	mov	b,r4
      0012F7 12 1F 77         [24]  419 	lcall	__gptrget
      0012FA F9               [12]  420 	mov	r1,a
                                    421 ;	cobs.c:38: *p = 0;
      0012FB 8A 82            [24]  422 	mov	dpl,r2
      0012FD 8B 83            [24]  423 	mov	dph,r3
      0012FF 8C F0            [24]  424 	mov	b,r4
      001301 E4               [12]  425 	clr	a
      001302 12 1D 9D         [24]  426 	lcall	__gptrput
                                    427 ;	cobs.c:39: p += tmp;
      001305 90 F2 5D         [24]  428 	mov	dptr,#_unstuff_PARM_2
      001308 E9               [12]  429 	mov	a,r1
      001309 2A               [12]  430 	add	a,r2
      00130A F0               [24]  431 	movx	@dptr,a
      00130B E4               [12]  432 	clr	a
      00130C 3B               [12]  433 	addc	a,r3
      00130D A3               [24]  434 	inc	dptr
      00130E F0               [24]  435 	movx	@dptr,a
      00130F EC               [12]  436 	mov	a,r4
      001310 A3               [24]  437 	inc	dptr
      001311 F0               [24]  438 	movx	@dptr,a
      001312 80 BB            [24]  439 	sjmp	00101$
      001314                        440 00104$:
      001314 22               [24]  441 	ret
                                    442 	.area CSEG    (CODE)
                                    443 	.area CONST   (CODE)
                                    444 	.area XINIT   (CODE)
                                    445 	.area CABS    (ABS,CODE)
