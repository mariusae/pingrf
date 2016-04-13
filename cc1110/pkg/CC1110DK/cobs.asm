;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
; This file was generated Fri Mar 18 21:19:19 2016
;--------------------------------------------------------
	.module cobs
	.optsdcc -mmcs51 --model-large
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _unstuff
	.globl _stuff
	.globl _unstuff_PARM_3
	.globl _unstuff_PARM_2
	.globl _stuff_PARM_2
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
_stuff_sloc0_1_0:
	.ds 3
_stuff_sloc1_1_0:
	.ds 3
_stuff_sloc2_1_0:
	.ds 3
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
_stuff_PARM_2:
	.ds 1
_stuff_p_1_21:
	.ds 3
_stuff_header_1_22:
	.ds 1
_stuff_cp_1_22:
	.ds 3
_unstuff_PARM_2:
	.ds 3
_unstuff_PARM_3:
	.ds 1
_unstuff_h_1_25:
	.ds 1
_unstuff_ep_1_26:
	.ds 3
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'stuff'
;------------------------------------------------------------
;n                         Allocated with name '_stuff_PARM_2'
;p                         Allocated with name '_stuff_p_1_21'
;header                    Allocated with name '_stuff_header_1_22'
;cp                        Allocated with name '_stuff_cp_1_22'
;bp                        Allocated with name '_stuff_bp_1_22'
;ep                        Allocated with name '_stuff_ep_1_22'
;sloc0                     Allocated with name '_stuff_sloc0_1_0'
;sloc1                     Allocated with name '_stuff_sloc1_1_0'
;sloc2                     Allocated with name '_stuff_sloc2_1_0'
;------------------------------------------------------------
;	cobs.c:6: stuff(uint8 *p, uint8 n)
;	-----------------------------------------
;	 function stuff
;	-----------------------------------------
_stuff:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	mov	r7,b
	mov	r6,dph
	mov	a,dpl
	mov	dptr,#_stuff_p_1_21
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	cobs.c:8: uint8 header = n+1, *cp = nil;
	mov	dptr,#_stuff_PARM_2
	movx	a,@dptr
	mov	r7,a
	mov	dptr,#_stuff_header_1_22
	inc	a
	movx	@dptr,a
	mov	dptr,#_stuff_cp_1_22
	clr	a
	movx	@dptr,a
	inc	dptr
	movx	@dptr,a
	inc	dptr
	movx	@dptr,a
;	cobs.c:9: uint8 *bp = p, *ep = bp + n;
	mov	dptr,#_stuff_p_1_21
	movx	a,@dptr
	mov	r4,a
	inc	dptr
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	mov	a,r7
	add	a,r4
	mov	_stuff_sloc1_1_0,a
	clr	a
	addc	a,r5
	mov	(_stuff_sloc1_1_0 + 1),a
	mov	(_stuff_sloc1_1_0 + 2),r6
;	cobs.c:25: return header;
	mov	_stuff_sloc0_1_0,r4
	mov	(_stuff_sloc0_1_0 + 1),r5
	mov	(_stuff_sloc0_1_0 + 2),r6
	mov	_stuff_sloc2_1_0,r4
	mov	(_stuff_sloc2_1_0 + 1),r5
	mov	(_stuff_sloc2_1_0 + 2),r6
00110$:
;	cobs.c:11: for(; p<ep; p++){
	mov	r0,_stuff_sloc2_1_0
	mov	r1,(_stuff_sloc2_1_0 + 1)
	mov	r7,(_stuff_sloc2_1_0 + 2)
	push	_stuff_sloc1_1_0
	push	(_stuff_sloc1_1_0 + 1)
	push	(_stuff_sloc1_1_0 + 2)
	mov	dpl,r0
	mov	dph,r1
	mov	b,r7
	lcall	___gptr_cmp
	dec	sp
	dec	sp
	dec	sp
	jnc	00119$
;	cobs.c:12: if(*p == 0){
	mov	dpl,_stuff_sloc2_1_0
	mov	dph,(_stuff_sloc2_1_0 + 1)
	mov	b,(_stuff_sloc2_1_0 + 2)
	lcall	__gptrget
	jnz	00111$
;	cobs.c:13: if(cp == nil)
	mov	dptr,#_stuff_cp_1_22
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	mov	a,r2
	orl	a,r3
	jnz	00102$
;	cobs.c:14: header = 1+p-bp;
	mov	a,#0x01
	add	a,_stuff_sloc2_1_0
	mov	r0,a
	clr	a
	addc	a,(_stuff_sloc2_1_0 + 1)
	mov	r1,a
	mov	r6,(_stuff_sloc2_1_0 + 2)
	mov	a,r0
	clr	c
	subb	a,_stuff_sloc0_1_0
	mov	r0,a
	mov	a,r1
	subb	a,(_stuff_sloc0_1_0 + 1)
	mov	r1,a
	mov	dptr,#_stuff_header_1_22
	mov	a,r0
	movx	@dptr,a
	sjmp	00103$
00102$:
;	cobs.c:16: *cp = p-cp;
	mov	a,_stuff_sloc2_1_0
	clr	c
	subb	a,r2
	mov	r5,a
	mov	a,(_stuff_sloc2_1_0 + 1)
	subb	a,r3
	mov	r6,a
	mov	dpl,r2
	mov	dph,r3
	mov	b,r7
	mov	a,r5
	lcall	__gptrput
00103$:
;	cobs.c:18: cp = p;
	mov	dptr,#_stuff_cp_1_22
	mov	a,_stuff_sloc2_1_0
	movx	@dptr,a
	mov	a,(_stuff_sloc2_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_stuff_sloc2_1_0 + 2)
	inc	dptr
	movx	@dptr,a
00111$:
;	cobs.c:11: for(; p<ep; p++){
	inc	_stuff_sloc2_1_0
	clr	a
	cjne	a,_stuff_sloc2_1_0,00133$
	inc	(_stuff_sloc2_1_0 + 1)
00133$:
	mov	dptr,#_stuff_p_1_21
	mov	a,_stuff_sloc2_1_0
	movx	@dptr,a
	mov	a,(_stuff_sloc2_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_stuff_sloc2_1_0 + 2)
	inc	dptr
	movx	@dptr,a
	ljmp	00110$
00119$:
	mov	dptr,#_stuff_p_1_21
	mov	a,_stuff_sloc2_1_0
	movx	@dptr,a
	mov	a,(_stuff_sloc2_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_stuff_sloc2_1_0 + 2)
	inc	dptr
	movx	@dptr,a
;	cobs.c:22: if(cp != nil)
	mov	dptr,#_stuff_cp_1_22
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	mov	a,r5
	orl	a,r6
	jz	00108$
;	cobs.c:23: *cp = p-cp;
	mov	a,_stuff_sloc2_1_0
	clr	c
	subb	a,r5
	mov	r3,a
	mov	a,(_stuff_sloc2_1_0 + 1)
	subb	a,r6
	mov	r4,a
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	mov	a,r3
	lcall	__gptrput
00108$:
;	cobs.c:25: return header;
	mov	dptr,#_stuff_header_1_22
	movx	a,@dptr
	mov	dpl,a
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'unstuff'
;------------------------------------------------------------
;p                         Allocated with name '_unstuff_PARM_2'
;n                         Allocated with name '_unstuff_PARM_3'
;h                         Allocated with name '_unstuff_h_1_25'
;ep                        Allocated with name '_unstuff_ep_1_26'
;tmp                       Allocated with name '_unstuff_tmp_1_26'
;------------------------------------------------------------
;	cobs.c:29: unstuff(uint8 h, uint8 *p, uint8 n)
;	-----------------------------------------
;	 function unstuff
;	-----------------------------------------
_unstuff:
	mov	a,dpl
	mov	dptr,#_unstuff_h_1_25
	movx	@dptr,a
;	cobs.c:31: uint8 *ep = p+n;
	mov	dptr,#_unstuff_PARM_2
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	mov	dptr,#_unstuff_PARM_3
	movx	a,@dptr
	mov	dptr,#_unstuff_ep_1_26
	add	a,r5
	movx	@dptr,a
	clr	a
	addc	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	cobs.c:34: p += h-1;
	mov	dptr,#_unstuff_h_1_25
	movx	a,@dptr
	mov	r4,a
	dec	a
	mov	dptr,#_unstuff_PARM_2
	add	a,r5
	movx	@dptr,a
	clr	a
	addc	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	cobs.c:36: while(p < ep){
	mov	dptr,#_unstuff_ep_1_26
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
00101$:
	mov	dptr,#_unstuff_PARM_2
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r4,a
	push	ar5
	push	ar6
	push	ar7
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	lcall	___gptr_cmp
	dec	sp
	dec	sp
	dec	sp
	jnc	00104$
;	cobs.c:37: tmp = *p;
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	lcall	__gptrget
	mov	r1,a
;	cobs.c:38: *p = 0;
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	clr	a
	lcall	__gptrput
;	cobs.c:39: p += tmp;
	mov	dptr,#_unstuff_PARM_2
	mov	a,r1
	add	a,r2
	movx	@dptr,a
	clr	a
	addc	a,r3
	inc	dptr
	movx	@dptr,a
	mov	a,r4
	inc	dptr
	movx	@dptr,a
	sjmp	00101$
00104$:
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
