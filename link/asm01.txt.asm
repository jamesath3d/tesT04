tt2/tt2.hex:     file format elf32-msp430
Disassembly of section __reset_vector:
0000fffe <__reset_vector>:
    fffe:	00 c4       	bic	r4,	r0	

Disassembly of section .text:
0000c400 <.text>:
    c400:	31 40 00 30 	mov	#12288,	r1	;#0x3000
    c404:	0c 43       	clr	r12		
    c406:	b0 12 0a c4 	call	#0xc40a	
    c40a:	b2 40 80 5a 	mov	#23168,	&0x01cc	;#0x5a80
    c40e:	cc 01 
    c410:	f2 d0 40 00 	bis.b	#64,	&0x0204	;#0x0040
    c414:	04 02 
    c416:	f2 d0 80 ff 	bis.b	#-128,	&0x0204	;#0xff80
    c41a:	04 02 
    c41c:	92 c3 30 01 	bic	#1,	&0x0130	;r3 As==01
    c420:	1e 14       	.word	0x141e;	????	
    c422:	3d 40 8c 10 	mov	#4236,	r13	;#0x108c
    c426:	3e 40 03 00 	mov	#3,	r14	;#0x0003
    c42a:	1d 83       	dec	r13		
    c42c:	0e 73       	sbc	r14		
    ....
    c4a6:	02 02 
    c4a8:	ea 3f       	jmp	$-42     	;abs 0xc47e

Disassembly of section .heap:
00002000 <.heap>:
    2000:	00 00       	.word	0x0000;	????	

Disassembly of section .MSP430.attributes:
00000000 <.MSP430.attributes>:
   0:	41 16       	.word	0x1641;	????	
   2:	00 00       	.word	0x0000;	????	
   4:	00 6d       	addc	r13,	r0	
   ....
  16:	01 00       	Address 0x0000000000000016 is out of bounds.
Address 0x0000000000000018 is out of bounds.
and.b	@r15+,	-1(r15)	;0xffff(r15)

Disassembly of section .comment:
00000000 <.comment>:
   0:	47 43       	clr.b	r7		
   2:	43 3a       	jl	$-888    	;abs 0xfc8a
   ...

tt3/tt3.hex:     file format elf32-msp430
Disassembly of section .text:
0000c400 <.text>:
    c400:	b2 40 80 5a 	mov	#23168,	&0x01cc	;#0x5a80
    c404:	cc 01 
    c406:	f2 d0 40 00 	bis.b	#64,	&0x0204	;#0x0040
    c40a:	04 02 
    c40c:	f2 d0 80 ff 	bis.b	#-128,	&0x0204	;#0xff80
    c410:	04 02 
    ...
    c4e8:	02 02 
    c4ea:	b3 3f       	jmp	$-152    	;abs 0xc452
