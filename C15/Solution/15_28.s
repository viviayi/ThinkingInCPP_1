	.file	"15_28.cpp"
	.text
	.section	.text$_ZN1X1fEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN1X1fEv
	.def	_ZN1X1fEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN1X1fEv
_ZN1X1fEv:
.LFB0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	16+_ZTV1Y(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_ZTV1Y
	.section	.rdata$_ZTV1Y,"dr"
	.linkonce same_size
	.align 8
_ZTV1Y:
	.quad	0
	.quad	_ZTI1Y
	.quad	_ZN1X1fEv
	.globl	_ZTI1Y
	.section	.rdata$_ZTI1Y,"dr"
	.linkonce same_size
	.align 8
_ZTI1Y:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS1Y
	.quad	_ZTI1X
	.globl	_ZTS1Y
	.section	.rdata$_ZTS1Y,"dr"
	.linkonce same_size
_ZTS1Y:
	.ascii "1Y\0"
	.globl	_ZTI1X
	.section	.rdata$_ZTI1X,"dr"
	.linkonce same_size
	.align 8
_ZTI1X:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS1X
	.globl	_ZTS1X
	.section	.rdata$_ZTS1X,"dr"
	.linkonce same_size
_ZTS1X:
	.ascii "1X\0"
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
