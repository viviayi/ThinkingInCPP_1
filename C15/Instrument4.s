	.file	"Instrument4.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
.lcomm _ZStL8__ioinit,1,1
.LC0:
	.ascii "Instrument::play\0"
	.section	.text$_ZNK10Instrument4playE4note,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK10Instrument4playE4note
	.def	_ZNK10Instrument4playE4note;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK10Instrument4playE4note
_ZNK10Instrument4playE4note:
.LFB1573:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	.LC0(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "Instrument\0"
	.section	.text$_ZNK10Instrument4whatEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK10Instrument4whatEv
	.def	_ZNK10Instrument4whatEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK10Instrument4whatEv
_ZNK10Instrument4whatEv:
.LFB1574:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC1(%rip), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN10Instrument6adjustEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN10Instrument6adjustEi
	.def	_ZN10Instrument6adjustEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN10Instrument6adjustEi
_ZN10Instrument6adjustEi:
.LFB1575:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "Wind::play\0"
	.section	.text$_ZNK4Wind4playE4note,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK4Wind4playE4note
	.def	_ZNK4Wind4playE4note;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK4Wind4playE4note
_ZNK4Wind4playE4note:
.LFB1576:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	.LC2(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC3:
	.ascii "Wind\0"
	.section	.text$_ZNK4Wind4whatEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK4Wind4whatEv
	.def	_ZNK4Wind4whatEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK4Wind4whatEv
_ZNK4Wind4whatEv:
.LFB1577:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC3(%rip), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN4Wind6adjustEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4Wind6adjustEi
	.def	_ZN4Wind6adjustEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4Wind6adjustEi
_ZN4Wind6adjustEi:
.LFB1578:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC4:
	.ascii "Percussion::play\0"
	.section	.text$_ZNK10Percussion4playE4note,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK10Percussion4playE4note
	.def	_ZNK10Percussion4playE4note;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK10Percussion4playE4note
_ZNK10Percussion4playE4note:
.LFB1579:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	.LC4(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC5:
	.ascii "Percussion\0"
	.section	.text$_ZNK10Percussion4whatEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK10Percussion4whatEv
	.def	_ZNK10Percussion4whatEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK10Percussion4whatEv
_ZNK10Percussion4whatEv:
.LFB1580:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC5(%rip), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN10Percussion6adjustEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN10Percussion6adjustEi
	.def	_ZN10Percussion6adjustEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN10Percussion6adjustEi
_ZN10Percussion6adjustEi:
.LFB1581:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC6:
	.ascii "Stringed::play\0"
	.section	.text$_ZNK8Stringed4playE4note,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK8Stringed4playE4note
	.def	_ZNK8Stringed4playE4note;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK8Stringed4playE4note
_ZNK8Stringed4playE4note:
.LFB1582:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	.LC6(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN8Stringed6adjustEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8Stringed6adjustEi
	.def	_ZN8Stringed6adjustEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8Stringed6adjustEi
_ZN8Stringed6adjustEi:
.LFB1584:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC7:
	.ascii "Brass::play\0"
	.section	.text$_ZNK5Brass4playE4note,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK5Brass4playE4note
	.def	_ZNK5Brass4playE4note;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK5Brass4playE4note
_ZNK5Brass4playE4note:
.LFB1585:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	.LC7(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC8:
	.ascii "Brass\0"
	.section	.text$_ZNK5Brass4whatEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK5Brass4whatEv
	.def	_ZNK5Brass4whatEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK5Brass4whatEv
_ZNK5Brass4whatEv:
.LFB1586:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC8(%rip), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC9:
	.ascii "Woodwind::play\0"
	.section	.text$_ZNK8Woodwind4playE4note,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK8Woodwind4playE4note
	.def	_ZNK8Woodwind4playE4note;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK8Woodwind4playE4note
_ZNK8Woodwind4playE4note:
.LFB1587:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	.LC9(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC10:
	.ascii "Woodwind\0"
	.section	.text$_ZNK8Woodwind4whatEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK8Woodwind4whatEv
	.def	_ZNK8Woodwind4whatEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK8Woodwind4whatEv
_ZNK8Woodwind4whatEv:
.LFB1588:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC10(%rip), %rax
	popq	%rbp
	ret
	.seh_endproc
	.text
	.globl	_Z4tuneR10Instrument
	.def	_Z4tuneR10Instrument;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4tuneR10Instrument
_Z4tuneR10Instrument:
.LFB1589:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	$0, %edx
	movq	16(%rbp), %rcx
	call	*%rax
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_Z1fR10Instrument
	.def	_Z1fR10Instrument;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z1fR10Instrument
_Z1fR10Instrument:
.LFB1590:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movl	$1, %edx
	movq	16(%rbp), %rcx
	call	*%rax
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN10InstrumentC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN10InstrumentC2Ev
	.def	_ZN10InstrumentC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN10InstrumentC2Ev
_ZN10InstrumentC2Ev:
.LFB1593:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	16+_ZTV10Instrument(%rip), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN4WindC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4WindC2Ev
	.def	_ZN4WindC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4WindC2Ev
_ZN4WindC2Ev:
.LFB1595:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN10InstrumentC2Ev
	leaq	16+_ZTV4Wind(%rip), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN4WindC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4WindC1Ev
	.def	_ZN4WindC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4WindC1Ev
_ZN4WindC1Ev:
.LFB1596:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN10InstrumentC2Ev
	leaq	16+_ZTV4Wind(%rip), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN10PercussionC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN10PercussionC1Ev
	.def	_ZN10PercussionC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN10PercussionC1Ev
_ZN10PercussionC1Ev:
.LFB1599:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN10InstrumentC2Ev
	leaq	16+_ZTV10Percussion(%rip), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN8StringedC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8StringedC1Ev
	.def	_ZN8StringedC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8StringedC1Ev
_ZN8StringedC1Ev:
.LFB1602:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN10InstrumentC2Ev
	leaq	16+_ZTV8Stringed(%rip), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5BrassC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5BrassC1Ev
	.def	_ZN5BrassC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5BrassC1Ev
_ZN5BrassC1Ev:
.LFB1605:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4WindC2Ev
	leaq	16+_ZTV5Brass(%rip), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	A
	.bss
	.align 32
A:
	.space 32
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1606:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$80, %rsp
	.seh_stackalloc	80
	.seh_endprologue
	call	__main
	leaq	16+_ZTV4Wind(%rip), %rax
	movq	%rax, -8(%rbp)
	leaq	16+_ZTV10Percussion(%rip), %rax
	movq	%rax, -16(%rbp)
	leaq	16+_ZTV8Stringed(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	16+_ZTV5Brass(%rip), %rax
	movq	%rax, -32(%rbp)
	leaq	16+_ZTV8Woodwind(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_Z4tuneR10Instrument
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_Z4tuneR10Instrument
	leaq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_Z4tuneR10Instrument
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_Z4tuneR10Instrument
	leaq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	_Z4tuneR10Instrument
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_Z1fR10Instrument
	movl	$0, %eax
	addq	$80, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_ZTV8Woodwind
	.section	.rdata$_ZTV8Woodwind,"dr"
	.linkonce same_size
	.align 8
_ZTV8Woodwind:
	.quad	0
	.quad	_ZTI8Woodwind
	.quad	_ZNK8Woodwind4playE4note
	.quad	_ZNK8Woodwind4whatEv
	.quad	_ZN4Wind6adjustEi
	.globl	_ZTV5Brass
	.section	.rdata$_ZTV5Brass,"dr"
	.linkonce same_size
	.align 8
_ZTV5Brass:
	.quad	0
	.quad	_ZTI5Brass
	.quad	_ZNK5Brass4playE4note
	.quad	_ZNK5Brass4whatEv
	.quad	_ZN4Wind6adjustEi
	.globl	_ZTV8Stringed
	.section	.rdata$_ZTV8Stringed,"dr"
	.linkonce same_size
	.align 8
_ZTV8Stringed:
	.quad	0
	.quad	_ZTI8Stringed
	.quad	_ZNK8Stringed4playE4note
	.quad	_ZNK10Instrument4whatEv
	.quad	_ZN8Stringed6adjustEi
	.globl	_ZTV10Percussion
	.section	.rdata$_ZTV10Percussion,"dr"
	.linkonce same_size
	.align 8
_ZTV10Percussion:
	.quad	0
	.quad	_ZTI10Percussion
	.quad	_ZNK10Percussion4playE4note
	.quad	_ZNK10Percussion4whatEv
	.quad	_ZN10Percussion6adjustEi
	.globl	_ZTV4Wind
	.section	.rdata$_ZTV4Wind,"dr"
	.linkonce same_size
	.align 8
_ZTV4Wind:
	.quad	0
	.quad	_ZTI4Wind
	.quad	_ZNK4Wind4playE4note
	.quad	_ZNK4Wind4whatEv
	.quad	_ZN4Wind6adjustEi
	.globl	_ZTV10Instrument
	.section	.rdata$_ZTV10Instrument,"dr"
	.linkonce same_size
	.align 8
_ZTV10Instrument:
	.quad	0
	.quad	_ZTI10Instrument
	.quad	_ZNK10Instrument4playE4note
	.quad	_ZNK10Instrument4whatEv
	.quad	_ZN10Instrument6adjustEi
	.globl	_ZTI8Woodwind
	.section	.rdata$_ZTI8Woodwind,"dr"
	.linkonce same_size
	.align 8
_ZTI8Woodwind:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS8Woodwind
	.quad	_ZTI4Wind
	.globl	_ZTS8Woodwind
	.section	.rdata$_ZTS8Woodwind,"dr"
	.linkonce same_size
	.align 8
_ZTS8Woodwind:
	.ascii "8Woodwind\0"
	.globl	_ZTI5Brass
	.section	.rdata$_ZTI5Brass,"dr"
	.linkonce same_size
	.align 8
_ZTI5Brass:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS5Brass
	.quad	_ZTI4Wind
	.globl	_ZTS5Brass
	.section	.rdata$_ZTS5Brass,"dr"
	.linkonce same_size
_ZTS5Brass:
	.ascii "5Brass\0"
	.globl	_ZTI8Stringed
	.section	.rdata$_ZTI8Stringed,"dr"
	.linkonce same_size
	.align 8
_ZTI8Stringed:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS8Stringed
	.quad	_ZTI10Instrument
	.globl	_ZTS8Stringed
	.section	.rdata$_ZTS8Stringed,"dr"
	.linkonce same_size
	.align 8
_ZTS8Stringed:
	.ascii "8Stringed\0"
	.globl	_ZTI10Percussion
	.section	.rdata$_ZTI10Percussion,"dr"
	.linkonce same_size
	.align 8
_ZTI10Percussion:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS10Percussion
	.quad	_ZTI10Instrument
	.globl	_ZTS10Percussion
	.section	.rdata$_ZTS10Percussion,"dr"
	.linkonce same_size
	.align 8
_ZTS10Percussion:
	.ascii "10Percussion\0"
	.globl	_ZTI4Wind
	.section	.rdata$_ZTI4Wind,"dr"
	.linkonce same_size
	.align 8
_ZTI4Wind:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS4Wind
	.quad	_ZTI10Instrument
	.globl	_ZTS4Wind
	.section	.rdata$_ZTS4Wind,"dr"
	.linkonce same_size
_ZTS4Wind:
	.ascii "4Wind\0"
	.globl	_ZTI10Instrument
	.section	.rdata$_ZTI10Instrument,"dr"
	.linkonce same_size
	.align 8
_ZTI10Instrument:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS10Instrument
	.globl	_ZTS10Instrument
	.section	.rdata$_ZTS10Instrument,"dr"
	.linkonce same_size
	.align 8
_ZTS10Instrument:
	.ascii "10Instrument\0"
	.text
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2099:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2098:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	%ecx, -64(%rbp)
	movl	%edx, -56(%rbp)
	cmpl	$1, -64(%rbp)
	jne	.L34
	cmpl	$65535, -56(%rbp)
	jne	.L34
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	movl	$8, %ecx
	call	_Znwy
	movq	%rax, %rbx
	movq	%rbx, %rcx
	call	_ZN4WindC1Ev
	movq	%rbx, A(%rip)
	movl	$8, %ecx
	call	_Znwy
	movq	%rax, %rbx
	movq	%rbx, %rcx
	call	_ZN10PercussionC1Ev
	movq	%rbx, 8+A(%rip)
	movl	$8, %ecx
	call	_Znwy
	movq	%rax, %rbx
	movq	%rbx, %rcx
	call	_ZN8StringedC1Ev
	movq	%rbx, 16+A(%rip)
	movl	$8, %ecx
	call	_Znwy
	movq	%rax, %rbx
	movq	%rbx, %rcx
	call	_ZN5BrassC1Ev
	movq	%rbx, 24+A(%rip)
.L34:
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__Z4tuneR10Instrument;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z4tuneR10Instrument
_GLOBAL__sub_I__Z4tuneR10Instrument:
.LFB2100:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__Z4tuneR10Instrument
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.def	_Znwy;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, "dr"
	.globl	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.linkonce	discard
.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_:
	.quad	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
