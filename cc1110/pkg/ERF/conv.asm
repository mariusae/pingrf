;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.4.0 #8981 (May  7 2015) (Mac OS X x86_64)
; This file was generated Fri Mar 18 14:33:05 2016
;--------------------------------------------------------
	.module conv
	.optsdcc -mmcs51 --model-large
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _memcpy
	.globl _convR2M_PARM_3
	.globl _convR2M_PARM_2
	.globl _convM2R_PARM_3
	.globl _convM2R_PARM_2
	.globl _convM2R
	.globl _convR2M
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
_convM2R_sloc0_1_0:
	.ds 3
_convM2R_sloc1_1_0:
	.ds 2
_convM2R_sloc2_1_0:
	.ds 3
_convR2M_sloc0_1_0:
	.ds 3
_convR2M_sloc1_1_0:
	.ds 3
_convR2M_sloc2_1_0:
	.ds 1
_convR2M_sloc3_1_0:
	.ds 3
_convR2M_sloc4_1_0:
	.ds 3
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
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
_convM2R_PARM_2:
	.ds 1
_convM2R_PARM_3:
	.ds 3
_convM2R_p_1_113:
	.ds 3
_convM2R_size_1_114:
	.ds 1
_convR2M_PARM_2:
	.ds 3
_convR2M_PARM_3:
	.ds 1
_convR2M_r_1_116:
	.ds 3
_convR2M_p_1_117:
	.ds 3
_convR2M_size_1_117:
	.ds 1
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
;Allocation info for local variables in function 'convM2R'
;------------------------------------------------------------
;sloc0                     Allocated with name '_convM2R_sloc0_1_0'
;sloc1                     Allocated with name '_convM2R_sloc1_1_0'
;sloc2                     Allocated with name '_convM2R_sloc2_1_0'
;n                         Allocated with name '_convM2R_PARM_2'
;r                         Allocated with name '_convM2R_PARM_3'
;p                         Allocated with name '_convM2R_p_1_113'
;size                      Allocated with name '_convM2R_size_1_114'
;------------------------------------------------------------
;	../libradio/conv.c:6: convM2R(uint8 *p, uint8 n, Rcall *r)
;	-----------------------------------------
;	 function convM2R
;	-----------------------------------------
_convM2R:
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
	mov	dptr,#_convM2R_p_1_113
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:10: if(n == 0) return 0;
	mov	dptr,#_convM2R_PARM_2
	movx	a,@dptr
	mov	r7,a
	jnz	00102$
	mov	dptr,#0x0000
	ret
00102$:
;	../libradio/conv.c:11: size = U8GET(p);
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	r4,a
	inc	dptr
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	mov	dpl,r4
	mov	dph,r5
	mov	b,r6
	lcall	__gptrget
	mov	r3,a
	mov	dptr,#_convM2R_size_1_114
	movx	@dptr,a
;	../libradio/conv.c:12: p += 1;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x01
	add	a,r4
	movx	@dptr,a
	clr	a
	addc	a,r5
	inc	dptr
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:14: if(n < size)
	mov	dptr,#_convM2R_size_1_114
	movx	a,@dptr
	mov	r6,a
	clr	c
	mov	a,r7
	subb	a,r6
	jnc	00104$
;	../libradio/conv.c:15: return 0;
	mov	dptr,#0x0000
	ret
00104$:
;	../libradio/conv.c:17: r->type = U8GET(p);
	push	ar6
	mov	dptr,#_convM2R_PARM_3
	movx	a,@dptr
	mov	r4,a
	inc	dptr
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	r1,a
	inc	dptr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	mov	dpl,r1
	mov	dph,r2
	mov	b,r3
	lcall	__gptrget
	mov	r0,a
	mov	dpl,r4
	mov	dph,r5
	mov	b,r7
	lcall	__gptrput
;	../libradio/conv.c:18: p+= 1;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x01
	add	a,r1
	movx	@dptr,a
	clr	a
	addc	a,r2
	inc	dptr
	movx	@dptr,a
	mov	a,r3
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:19: r->flag = U8GET(p);
	mov	a,#0x01
	add	a,r4
	mov	_convM2R_sloc0_1_0,a
	clr	a
	addc	a,r5
	mov	(_convM2R_sloc0_1_0 + 1),a
	mov	(_convM2R_sloc0_1_0 + 2),r7
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	mov	dpl,r2
	mov	dph,r3
	mov	b,r6
	lcall	__gptrget
	mov	r1,a
	mov	dpl,_convM2R_sloc0_1_0
	mov	dph,(_convM2R_sloc0_1_0 + 1)
	mov	b,(_convM2R_sloc0_1_0 + 2)
	lcall	__gptrput
;	../libradio/conv.c:20: p += 1;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x01
	add	a,r2
	movx	@dptr,a
	clr	a
	addc	a,r3
	inc	dptr
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:22: switch(r->type){
	mov	dpl,r4
	mov	dph,r5
	mov	b,r7
	lcall	__gptrget
	mov	_convM2R_sloc0_1_0,a
	cjne	r0,#0x01,00153$
	pop	ar6
	sjmp	00109$
00153$:
	pop	ar6
	mov	a,#0x02
	cjne	a,_convM2R_sloc0_1_0,00154$
	ljmp	00113$
00154$:
	mov	a,#0x03
	cjne	a,_convM2R_sloc0_1_0,00155$
	ljmp	00111$
00155$:
	mov	a,#0x04
	cjne	a,_convM2R_sloc0_1_0,00156$
	ljmp	00115$
00156$:
	mov	a,#0x05
	cjne	a,_convM2R_sloc0_1_0,00157$
	ljmp	00110$
00157$:
	mov	a,#0x06
	cjne	a,_convM2R_sloc0_1_0,00158$
	ljmp	00113$
00158$:
	mov	a,#0x07
	cjne	a,_convM2R_sloc0_1_0,00159$
	ljmp	00115$
00159$:
	mov	a,#0x08
	cjne	a,_convM2R_sloc0_1_0,00160$
	ljmp	00115$
00160$:
	mov	a,#0x80
	cjne	a,_convM2R_sloc0_1_0,00161$
	ljmp	00114$
00161$:
;	../libradio/conv.c:23: default: return 0;
	mov	dptr,#0x0000
	ret
;	../libradio/conv.c:30: case Trx:
00109$:
;	../libradio/conv.c:31: r->timeoutms = U16GET(p);
	push	ar6
	mov	a,#0x03
	add	a,r4
	mov	_convM2R_sloc0_1_0,a
	clr	a
	addc	a,r5
	mov	(_convM2R_sloc0_1_0 + 1),a
	mov	(_convM2R_sloc0_1_0 + 2),r7
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	_convM2R_sloc2_1_0,a
	inc	dptr
	movx	a,@dptr
	mov	(_convM2R_sloc2_1_0 + 1),a
	inc	dptr
	movx	a,@dptr
	mov	(_convM2R_sloc2_1_0 + 2),a
	mov	dpl,_convM2R_sloc2_1_0
	mov	dph,(_convM2R_sloc2_1_0 + 1)
	mov	b,(_convM2R_sloc2_1_0 + 2)
	lcall	__gptrget
	mov	r1,a
	mov	r2,#0x00
	mov	(_convM2R_sloc1_1_0 + 1),r1
;	1-genFromRTrack replaced	mov	_convM2R_sloc1_1_0,#0x00
	mov	_convM2R_sloc1_1_0,r2
	mov	a,#0x01
	add	a,_convM2R_sloc2_1_0
	mov	r1,a
	clr	a
	addc	a,(_convM2R_sloc2_1_0 + 1)
	mov	r2,a
	mov	r6,(_convM2R_sloc2_1_0 + 2)
	mov	dpl,r1
	mov	dph,r2
	mov	b,r6
	lcall	__gptrget
	mov	r1,a
	mov	r6,#0x00
	mov	a,_convM2R_sloc1_1_0
	orl	ar1,a
	mov	a,(_convM2R_sloc1_1_0 + 1)
	orl	ar6,a
	mov	dpl,_convM2R_sloc0_1_0
	mov	dph,(_convM2R_sloc0_1_0 + 1)
	mov	b,(_convM2R_sloc0_1_0 + 2)
	mov	a,r1
	lcall	__gptrput
	inc	dptr
	mov	a,r6
	lcall	__gptrput
;	../libradio/conv.c:32: p += 2;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x02
	add	a,_convM2R_sloc2_1_0
	movx	@dptr,a
	clr	a
	addc	a,(_convM2R_sloc2_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_convM2R_sloc2_1_0 + 2)
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:33: r->filterbyte3 = U8GET(p);
	mov	a,#0x07
	add	a,r4
	mov	_convM2R_sloc2_1_0,a
	clr	a
	addc	a,r5
	mov	(_convM2R_sloc2_1_0 + 1),a
	mov	(_convM2R_sloc2_1_0 + 2),r7
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	r0,a
	inc	dptr
	movx	a,@dptr
	mov	r1,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	mov	dpl,r0
	mov	dph,r1
	mov	b,r6
	lcall	__gptrget
	mov	r3,a
	mov	dpl,_convM2R_sloc2_1_0
	mov	dph,(_convM2R_sloc2_1_0 + 1)
	mov	b,(_convM2R_sloc2_1_0 + 2)
	lcall	__gptrput
;	../libradio/conv.c:34: p += 1;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x01
	add	a,r0
	movx	@dptr,a
	clr	a
	addc	a,r1
	inc	dptr
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:35: break;
	pop	ar6
	ljmp	00115$
;	../libradio/conv.c:37: case Ttxrx:
00110$:
;	../libradio/conv.c:38: r->timeoutms = U16GET(p);
	push	ar6
	mov	a,#0x03
	add	a,r4
	mov	_convM2R_sloc2_1_0,a
	clr	a
	addc	a,r5
	mov	(_convM2R_sloc2_1_0 + 1),a
	mov	(_convM2R_sloc2_1_0 + 2),r7
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	_convM2R_sloc0_1_0,a
	inc	dptr
	movx	a,@dptr
	mov	(_convM2R_sloc0_1_0 + 1),a
	inc	dptr
	movx	a,@dptr
	mov	(_convM2R_sloc0_1_0 + 2),a
	mov	dpl,_convM2R_sloc0_1_0
	mov	dph,(_convM2R_sloc0_1_0 + 1)
	mov	b,(_convM2R_sloc0_1_0 + 2)
	lcall	__gptrget
	mov	r1,a
	mov	r2,#0x00
	mov	(_convM2R_sloc1_1_0 + 1),r1
;	1-genFromRTrack replaced	mov	_convM2R_sloc1_1_0,#0x00
	mov	_convM2R_sloc1_1_0,r2
	mov	a,#0x01
	add	a,_convM2R_sloc0_1_0
	mov	r1,a
	clr	a
	addc	a,(_convM2R_sloc0_1_0 + 1)
	mov	r2,a
	mov	r6,(_convM2R_sloc0_1_0 + 2)
	mov	dpl,r1
	mov	dph,r2
	mov	b,r6
	lcall	__gptrget
	mov	r1,a
	mov	r6,#0x00
	mov	a,_convM2R_sloc1_1_0
	orl	ar1,a
	mov	a,(_convM2R_sloc1_1_0 + 1)
	orl	ar6,a
	mov	dpl,_convM2R_sloc2_1_0
	mov	dph,(_convM2R_sloc2_1_0 + 1)
	mov	b,(_convM2R_sloc2_1_0 + 2)
	mov	a,r1
	lcall	__gptrput
	inc	dptr
	mov	a,r6
	lcall	__gptrput
;	../libradio/conv.c:39: p += 2;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x02
	add	a,_convM2R_sloc0_1_0
	movx	@dptr,a
	clr	a
	addc	a,(_convM2R_sloc0_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_convM2R_sloc0_1_0 + 2)
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:40: r->filterbyte3 = U8GET(p);
	mov	a,#0x07
	add	a,r4
	mov	_convM2R_sloc2_1_0,a
	clr	a
	addc	a,r5
	mov	(_convM2R_sloc2_1_0 + 1),a
	mov	(_convM2R_sloc2_1_0 + 2),r7
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	r0,a
	inc	dptr
	movx	a,@dptr
	mov	r1,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	mov	dpl,r0
	mov	dph,r1
	mov	b,r6
	lcall	__gptrget
	mov	r3,a
	mov	dpl,_convM2R_sloc2_1_0
	mov	dph,(_convM2R_sloc2_1_0 + 1)
	mov	b,(_convM2R_sloc2_1_0 + 2)
	lcall	__gptrput
;	../libradio/conv.c:41: p += 1;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x01
	add	a,r0
	movx	@dptr,a
	clr	a
	addc	a,r1
	inc	dptr
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:57: return size;
	pop	ar6
;	../libradio/conv.c:43: case Ttx:
00111$:
;	../libradio/conv.c:44: r->preamblems = U16GET(p);
	push	ar6
	mov	a,#0x05
	add	a,r4
	mov	_convM2R_sloc2_1_0,a
	clr	a
	addc	a,r5
	mov	(_convM2R_sloc2_1_0 + 1),a
	mov	(_convM2R_sloc2_1_0 + 2),r7
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	_convM2R_sloc0_1_0,a
	inc	dptr
	movx	a,@dptr
	mov	(_convM2R_sloc0_1_0 + 1),a
	inc	dptr
	movx	a,@dptr
	mov	(_convM2R_sloc0_1_0 + 2),a
	mov	dpl,_convM2R_sloc0_1_0
	mov	dph,(_convM2R_sloc0_1_0 + 1)
	mov	b,(_convM2R_sloc0_1_0 + 2)
	lcall	__gptrget
	mov	r1,a
	mov	r6,#0x00
	mov	(_convM2R_sloc1_1_0 + 1),r1
;	1-genFromRTrack replaced	mov	_convM2R_sloc1_1_0,#0x00
	mov	_convM2R_sloc1_1_0,r6
	mov	a,#0x01
	add	a,_convM2R_sloc0_1_0
	mov	r1,a
	clr	a
	addc	a,(_convM2R_sloc0_1_0 + 1)
	mov	r3,a
	mov	r6,(_convM2R_sloc0_1_0 + 2)
	mov	dpl,r1
	mov	dph,r3
	mov	b,r6
	lcall	__gptrget
	mov	r1,a
	mov	r6,#0x00
	mov	a,_convM2R_sloc1_1_0
	orl	ar1,a
	mov	a,(_convM2R_sloc1_1_0 + 1)
	orl	ar6,a
	mov	dpl,_convM2R_sloc2_1_0
	mov	dph,(_convM2R_sloc2_1_0 + 1)
	mov	b,(_convM2R_sloc2_1_0 + 2)
	mov	a,r1
	lcall	__gptrput
	inc	dptr
	mov	a,r6
	lcall	__gptrput
;	../libradio/conv.c:45: p += 2;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x02
	add	a,_convM2R_sloc0_1_0
	movx	@dptr,a
	clr	a
	addc	a,(_convM2R_sloc0_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_convM2R_sloc0_1_0 + 2)
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:57: return size;
	pop	ar6
;	../libradio/conv.c:47: case Rtxrx:
00113$:
;	../libradio/conv.c:48: memcpy(r->pkt, p, sizeof r->pkt);
	push	ar6
	mov	a,#0x08
	add	a,r4
	mov	r1,a
	clr	a
	addc	a,r5
	mov	r2,a
	mov	ar3,r7
	mov	_convM2R_sloc2_1_0,r1
	mov	(_convM2R_sloc2_1_0 + 1),r2
	mov	(_convM2R_sloc2_1_0 + 2),r3
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	r0,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	mov	dptr,#_memcpy_PARM_2
	mov	a,r0
	movx	@dptr,a
	mov	a,r3
	inc	dptr
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
	mov	dptr,#_memcpy_PARM_3
	mov	a,#0x4E
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
	mov	dpl,_convM2R_sloc2_1_0
	mov	dph,(_convM2R_sloc2_1_0 + 1)
	mov	b,(_convM2R_sloc2_1_0 + 2)
	push	ar6
	push	ar3
	push	ar0
	lcall	_memcpy
	pop	ar0
	pop	ar3
	pop	ar6
;	../libradio/conv.c:49: p += sizeof r->pkt;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x4E
	add	a,r0
	movx	@dptr,a
	clr	a
	addc	a,r3
	inc	dptr
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:50: break;
	pop	ar6
;	../libradio/conv.c:52: case Rerr:
	sjmp	00115$
00114$:
;	../libradio/conv.c:53: r->err = U8GET(p);
	mov	a,#0x02
	add	a,r4
	mov	r4,a
	clr	a
	addc	a,r5
	mov	r5,a
	mov	dptr,#_convM2R_p_1_113
	movx	a,@dptr
	mov	r1,a
	inc	dptr
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	mov	dpl,r1
	mov	dph,r2
	mov	b,r3
	lcall	__gptrget
	mov	r0,a
	mov	dpl,r4
	mov	dph,r5
	mov	b,r7
	lcall	__gptrput
;	../libradio/conv.c:54: p += 1;
	mov	dptr,#_convM2R_p_1_113
	mov	a,#0x01
	add	a,r1
	movx	@dptr,a
	clr	a
	addc	a,r2
	inc	dptr
	movx	@dptr,a
	mov	a,r3
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:55: }
00115$:
;	../libradio/conv.c:57: return size;
	mov	r7,#0x00
	mov	dpl,r6
	mov	dph,r7
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'convR2M'
;------------------------------------------------------------
;sloc0                     Allocated with name '_convR2M_sloc0_1_0'
;sloc1                     Allocated with name '_convR2M_sloc1_1_0'
;sloc2                     Allocated with name '_convR2M_sloc2_1_0'
;sloc3                     Allocated with name '_convR2M_sloc3_1_0'
;sloc4                     Allocated with name '_convR2M_sloc4_1_0'
;ap                        Allocated with name '_convR2M_PARM_2'
;n                         Allocated with name '_convR2M_PARM_3'
;r                         Allocated with name '_convR2M_r_1_116'
;p                         Allocated with name '_convR2M_p_1_117'
;size                      Allocated with name '_convR2M_size_1_117'
;------------------------------------------------------------
;	../libradio/conv.c:61: convR2M(Rcall *r, uint8 *ap, uint8 n)
;	-----------------------------------------
;	 function convR2M
;	-----------------------------------------
_convR2M:
	mov	r7,b
	mov	r6,dph
	mov	a,dpl
	mov	dptr,#_convR2M_r_1_116
	movx	@dptr,a
	mov	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:63: uint8 *p = ap;
	mov	dptr,#_convR2M_PARM_2
	movx	a,@dptr
	mov	r5,a
	inc	dptr
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
;	../libradio/conv.c:66: size = 3; // size, type, flag
	mov	dptr,#_convR2M_size_1_117
	mov	a,#0x03
	movx	@dptr,a
;	../libradio/conv.c:67: switch(r->type){
	mov	dptr,#_convR2M_r_1_116
	movx	a,@dptr
	mov	_convR2M_sloc0_1_0,a
	inc	dptr
	movx	a,@dptr
	mov	(_convR2M_sloc0_1_0 + 1),a
	inc	dptr
	movx	a,@dptr
	mov	(_convR2M_sloc0_1_0 + 2),a
	mov	dpl,_convR2M_sloc0_1_0
	mov	dph,(_convR2M_sloc0_1_0 + 1)
	mov	b,(_convR2M_sloc0_1_0 + 2)
	lcall	__gptrget
	mov	r1,a
	cjne	r1,#0x01,00189$
	sjmp	00105$
00189$:
	cjne	r1,#0x02,00190$
	sjmp	00109$
00190$:
	cjne	r1,#0x03,00191$
	sjmp	00107$
00191$:
	cjne	r1,#0x04,00192$
	sjmp	00111$
00192$:
	cjne	r1,#0x05,00193$
	sjmp	00106$
00193$:
	cjne	r1,#0x06,00194$
	sjmp	00109$
00194$:
	cjne	r1,#0x07,00195$
	sjmp	00111$
00195$:
	cjne	r1,#0x08,00196$
	sjmp	00111$
00196$:
	cjne	r1,#0x80,00197$
	sjmp	00110$
00197$:
;	../libradio/conv.c:68: default: return 0;
	mov	dptr,#0x0000
	ret
;	../libradio/conv.c:76: case Trx:
00105$:
;	../libradio/conv.c:78: size += 1; // filterbyte3
	mov	dptr,#_convR2M_size_1_117
	mov	a,#0x06
	movx	@dptr,a
;	../libradio/conv.c:79: break;
;	../libradio/conv.c:81: case Ttxrx:
	sjmp	00111$
00106$:
;	../libradio/conv.c:83: size += 1; // filterbyte3
	mov	dptr,#_convR2M_size_1_117
	mov	a,#0x06
	movx	@dptr,a
;	../libradio/conv.c:84: case Ttx:
00107$:
;	../libradio/conv.c:85: size += 2; // preamble
	mov	dptr,#_convR2M_size_1_117
	movx	a,@dptr
	mov	r1,a
	add	a,#0x02
	movx	@dptr,a
;	../libradio/conv.c:87: case Rtxrx:
00109$:
;	../libradio/conv.c:88: size += Npkt;
	mov	dptr,#_convR2M_size_1_117
	movx	a,@dptr
	mov	r1,a
	add	a,#0x4E
	movx	@dptr,a
;	../libradio/conv.c:89: break;
;	../libradio/conv.c:91: case Rerr:
	sjmp	00111$
00110$:
;	../libradio/conv.c:92: size += 1;
	mov	dptr,#_convR2M_size_1_117
	mov	a,#0x04
	movx	@dptr,a
;	../libradio/conv.c:94: }
00111$:
;	../libradio/conv.c:96: if(n < size)
	mov	dptr,#_convR2M_PARM_3
	movx	a,@dptr
	mov	r1,a
	mov	dptr,#_convR2M_size_1_117
	movx	a,@dptr
	mov	r0,a
	clr	c
	mov	a,r1
	subb	a,r0
	jnc	00113$
;	../libradio/conv.c:97: return 0;
	mov	dptr,#0x0000
	ret
00113$:
;	../libradio/conv.c:99: U8PUT(p, size);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	mov	a,r0
	lcall	__gptrput
;	../libradio/conv.c:100: p += 1;
	push	ar0
	mov	a,#0x01
	add	a,r5
	mov	r0,a
	clr	a
	addc	a,r6
	mov	r1,a
	mov	ar4,r7
;	../libradio/conv.c:101: U8PUT(p, r->type);
	mov	dpl,_convR2M_sloc0_1_0
	mov	dph,(_convR2M_sloc0_1_0 + 1)
	mov	b,(_convR2M_sloc0_1_0 + 2)
	lcall	__gptrget
	mov	r3,a
	mov	dpl,r0
	mov	dph,r1
	mov	b,r4
	lcall	__gptrput
;	../libradio/conv.c:102: p += 1;
	mov	a,#0x02
	add	a,r5
	mov	_convR2M_sloc1_1_0,a
	clr	a
	addc	a,r6
	mov	(_convR2M_sloc1_1_0 + 1),a
	mov	(_convR2M_sloc1_1_0 + 2),r7
;	../libradio/conv.c:103: U8PUT(p, r->flag);
	mov	a,#0x01
	add	a,_convR2M_sloc0_1_0
	mov	r0,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	r1,a
	mov	r4,(_convR2M_sloc0_1_0 + 2)
	mov	dpl,r0
	mov	dph,r1
	mov	b,r4
	lcall	__gptrget
	mov	r0,a
	mov	dpl,_convR2M_sloc1_1_0
	mov	dph,(_convR2M_sloc1_1_0 + 1)
	mov	b,(_convR2M_sloc1_1_0 + 2)
	lcall	__gptrput
;	../libradio/conv.c:104: p += 1;
	mov	a,#0x03
	add	a,r5
	mov	_convR2M_sloc1_1_0,a
	clr	a
	addc	a,r6
	mov	(_convR2M_sloc1_1_0 + 1),a
	mov	(_convR2M_sloc1_1_0 + 2),r7
	mov	dptr,#_convR2M_p_1_117
	mov	a,_convR2M_sloc1_1_0
	movx	@dptr,a
	mov	a,(_convR2M_sloc1_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_convR2M_sloc1_1_0 + 2)
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:106: switch(r->type){
	mov	dpl,_convR2M_sloc0_1_0
	mov	dph,(_convR2M_sloc0_1_0 + 1)
	mov	b,(_convR2M_sloc0_1_0 + 2)
	lcall	__gptrget
	mov	_convR2M_sloc2_1_0,a
	mov	a,#0x01
	cjne	a,_convR2M_sloc2_1_0,00199$
	pop	ar0
	sjmp	00118$
00199$:
	pop	ar0
	mov	a,#0x02
	cjne	a,_convR2M_sloc2_1_0,00200$
	ljmp	00122$
00200$:
	mov	a,#0x03
	cjne	a,_convR2M_sloc2_1_0,00201$
	ljmp	00120$
00201$:
	mov	a,#0x04
	cjne	a,_convR2M_sloc2_1_0,00202$
	ljmp	00124$
00202$:
	mov	a,#0x05
	cjne	a,_convR2M_sloc2_1_0,00203$
	ljmp	00119$
00203$:
	mov	a,#0x06
	cjne	a,_convR2M_sloc2_1_0,00204$
	ljmp	00122$
00204$:
	mov	a,#0x07
	cjne	a,_convR2M_sloc2_1_0,00205$
	ljmp	00124$
00205$:
	mov	a,#0x08
	cjne	a,_convR2M_sloc2_1_0,00206$
	ljmp	00124$
00206$:
	mov	a,#0x80
	cjne	a,_convR2M_sloc2_1_0,00207$
	ljmp	00123$
00207$:
;	../libradio/conv.c:109: return 0;
	mov	dptr,#0x0000
	ret
;	../libradio/conv.c:116: case Trx:
00118$:
;	../libradio/conv.c:117: U16PUT(p, r->timeoutms);
	push	ar0
	mov	a,#0x03
	add	a,_convR2M_sloc0_1_0
	mov	_convR2M_sloc3_1_0,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	(_convR2M_sloc3_1_0 + 1),a
	mov	(_convR2M_sloc3_1_0 + 2),(_convR2M_sloc0_1_0 + 2)
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	lcall	__gptrget
	inc	dptr
	lcall	__gptrget
	mov	dpl,_convR2M_sloc1_1_0
	mov	dph,(_convR2M_sloc1_1_0 + 1)
	mov	b,(_convR2M_sloc1_1_0 + 2)
	lcall	__gptrput
	mov	a,#0x04
	add	a,r5
	mov	r0,a
	clr	a
	addc	a,r6
	mov	r1,a
	mov	ar4,r7
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	lcall	__gptrget
	mov	r2,a
	inc	dptr
	lcall	__gptrget
	mov	r3,a
	mov	dpl,r0
	mov	dph,r1
	mov	b,r4
	mov	a,r2
	lcall	__gptrput
;	../libradio/conv.c:118: p += 2;
	mov	a,#0x05
	add	a,r5
	mov	_convR2M_sloc3_1_0,a
	clr	a
	addc	a,r6
	mov	(_convR2M_sloc3_1_0 + 1),a
	mov	(_convR2M_sloc3_1_0 + 2),r7
;	../libradio/conv.c:119: U8PUT(p, r->filterbyte3);
	mov	a,#0x07
	add	a,_convR2M_sloc0_1_0
	mov	r0,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	r1,a
	mov	r4,(_convR2M_sloc0_1_0 + 2)
	mov	dpl,r0
	mov	dph,r1
	mov	b,r4
	lcall	__gptrget
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	lcall	__gptrput
;	../libradio/conv.c:120: p += 1;
	mov	dptr,#_convR2M_p_1_117
	mov	a,#0x06
	add	a,r5
	movx	@dptr,a
	clr	a
	addc	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:121: break;
	pop	ar0
	ljmp	00124$
;	../libradio/conv.c:123: case Ttxrx:
00119$:
;	../libradio/conv.c:124: U16PUT(p, r->timeoutms);
	push	ar0
	mov	a,#0x03
	add	a,_convR2M_sloc0_1_0
	mov	_convR2M_sloc3_1_0,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	(_convR2M_sloc3_1_0 + 1),a
	mov	(_convR2M_sloc3_1_0 + 2),(_convR2M_sloc0_1_0 + 2)
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	lcall	__gptrget
	inc	dptr
	lcall	__gptrget
	mov	dpl,_convR2M_sloc1_1_0
	mov	dph,(_convR2M_sloc1_1_0 + 1)
	mov	b,(_convR2M_sloc1_1_0 + 2)
	lcall	__gptrput
	mov	a,#0x04
	add	a,r5
	mov	r0,a
	clr	a
	addc	a,r6
	mov	r1,a
	mov	ar4,r7
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	lcall	__gptrget
	mov	r2,a
	inc	dptr
	lcall	__gptrget
	mov	r3,a
	mov	dpl,r0
	mov	dph,r1
	mov	b,r4
	mov	a,r2
	lcall	__gptrput
;	../libradio/conv.c:125: p += 2;
	mov	a,#0x05
	add	a,r5
	mov	_convR2M_sloc3_1_0,a
	clr	a
	addc	a,r6
	mov	(_convR2M_sloc3_1_0 + 1),a
	mov	(_convR2M_sloc3_1_0 + 2),r7
;	../libradio/conv.c:126: U8PUT(p, r->filterbyte3);
	mov	a,#0x07
	add	a,_convR2M_sloc0_1_0
	mov	r0,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	r1,a
	mov	r4,(_convR2M_sloc0_1_0 + 2)
	mov	dpl,r0
	mov	dph,r1
	mov	b,r4
	lcall	__gptrget
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	lcall	__gptrput
;	../libradio/conv.c:127: p += 1;
	mov	dptr,#_convR2M_p_1_117
	mov	a,#0x06
	add	a,r5
	movx	@dptr,a
	clr	a
	addc	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:147: return size;
	pop	ar0
;	../libradio/conv.c:128: case Ttx:
00120$:
;	../libradio/conv.c:129: U16PUT(p, r->preamblems);
	push	ar0
	mov	dptr,#_convR2M_p_1_117
	movx	a,@dptr
	mov	_convR2M_sloc3_1_0,a
	inc	dptr
	movx	a,@dptr
	mov	(_convR2M_sloc3_1_0 + 1),a
	inc	dptr
	movx	a,@dptr
	mov	(_convR2M_sloc3_1_0 + 2),a
	mov	a,#0x05
	add	a,_convR2M_sloc0_1_0
	mov	_convR2M_sloc4_1_0,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	(_convR2M_sloc4_1_0 + 1),a
	mov	(_convR2M_sloc4_1_0 + 2),(_convR2M_sloc0_1_0 + 2)
	mov	dpl,_convR2M_sloc4_1_0
	mov	dph,(_convR2M_sloc4_1_0 + 1)
	mov	b,(_convR2M_sloc4_1_0 + 2)
	lcall	__gptrget
	inc	dptr
	lcall	__gptrget
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	lcall	__gptrput
	mov	a,#0x01
	add	a,_convR2M_sloc3_1_0
	mov	r2,a
	clr	a
	addc	a,(_convR2M_sloc3_1_0 + 1)
	mov	r3,a
	mov	r4,(_convR2M_sloc3_1_0 + 2)
	mov	dpl,_convR2M_sloc4_1_0
	mov	dph,(_convR2M_sloc4_1_0 + 1)
	mov	b,(_convR2M_sloc4_1_0 + 2)
	lcall	__gptrget
	mov	r0,a
	inc	dptr
	lcall	__gptrget
	mov	r1,a
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	mov	a,r0
	lcall	__gptrput
;	../libradio/conv.c:130: p += 2;
	mov	dptr,#_convR2M_p_1_117
	mov	a,#0x02
	add	a,_convR2M_sloc3_1_0
	movx	@dptr,a
	clr	a
	addc	a,(_convR2M_sloc3_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_convR2M_sloc3_1_0 + 2)
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:147: return size;
	pop	ar0
;	../libradio/conv.c:133: case Rtxrx:
00122$:
;	../libradio/conv.c:134: memcpy(p, r->pkt, sizeof r->pkt);
	push	ar0
	mov	dptr,#_convR2M_p_1_117
	movx	a,@dptr
	mov	_convR2M_sloc4_1_0,a
	inc	dptr
	movx	a,@dptr
	mov	(_convR2M_sloc4_1_0 + 1),a
	inc	dptr
	movx	a,@dptr
	mov	(_convR2M_sloc4_1_0 + 2),a
	mov	_convR2M_sloc3_1_0,_convR2M_sloc4_1_0
	mov	(_convR2M_sloc3_1_0 + 1),(_convR2M_sloc4_1_0 + 1)
	mov	(_convR2M_sloc3_1_0 + 2),(_convR2M_sloc4_1_0 + 2)
	mov	a,#0x08
	add	a,_convR2M_sloc0_1_0
	mov	r2,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	r3,a
	mov	r4,(_convR2M_sloc0_1_0 + 2)
	mov	dptr,#_memcpy_PARM_2
	mov	a,r2
	movx	@dptr,a
	mov	a,r3
	inc	dptr
	movx	@dptr,a
	mov	a,r4
	inc	dptr
	movx	@dptr,a
	mov	dptr,#_memcpy_PARM_3
	mov	a,#0x4E
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
	mov	dpl,_convR2M_sloc3_1_0
	mov	dph,(_convR2M_sloc3_1_0 + 1)
	mov	b,(_convR2M_sloc3_1_0 + 2)
	push	ar7
	push	ar6
	push	ar5
	push	ar0
	lcall	_memcpy
	pop	ar0
	pop	ar5
	pop	ar6
	pop	ar7
;	../libradio/conv.c:135: p += sizeof r->pkt;
	mov	dptr,#_convR2M_p_1_117
	mov	a,#0x4E
	add	a,_convR2M_sloc4_1_0
	movx	@dptr,a
	clr	a
	addc	a,(_convR2M_sloc4_1_0 + 1)
	inc	dptr
	movx	@dptr,a
	mov	a,(_convR2M_sloc4_1_0 + 2)
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:136: break;
	pop	ar0
;	../libradio/conv.c:138: case Rerr:
	sjmp	00124$
00123$:
;	../libradio/conv.c:139: U8PUT(p, r->err);
	mov	a,#0x02
	add	a,_convR2M_sloc0_1_0
	mov	r2,a
	clr	a
	addc	a,(_convR2M_sloc0_1_0 + 1)
	mov	r3,a
	mov	r4,(_convR2M_sloc0_1_0 + 2)
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	lcall	__gptrget
	mov	r2,a
	mov	dpl,_convR2M_sloc1_1_0
	mov	dph,(_convR2M_sloc1_1_0 + 1)
	mov	b,(_convR2M_sloc1_1_0 + 2)
	lcall	__gptrput
;	../libradio/conv.c:140: p += 1;
	mov	dptr,#_convR2M_p_1_117
	mov	a,#0x04
	add	a,r5
	movx	@dptr,a
	clr	a
	addc	a,r6
	inc	dptr
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	../libradio/conv.c:142: }
00124$:
;	../libradio/conv.c:144: if(size != p-ap)
	mov	dptr,#_convR2M_p_1_117
	movx	a,@dptr
	mov	r2,a
	inc	dptr
	movx	a,@dptr
	mov	r3,a
	inc	dptr
	movx	a,@dptr
	mov	a,r2
	clr	c
	subb	a,r5
	mov	r5,a
	mov	a,r3
	subb	a,r6
	mov	r6,a
	mov	ar4,r0
	mov	r7,#0x00
	mov	a,r4
	cjne	a,ar5,00208$
	mov	a,r7
	cjne	a,ar6,00208$
	sjmp	00126$
00208$:
;	../libradio/conv.c:145: return 0;
	mov	dptr,#0x0000
	ret
00126$:
;	../libradio/conv.c:147: return size;
	mov	r7,#0x00
	mov	dpl,r0
	mov	dph,r7
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
