	.file	"9_22.cpp"
	.text
	.align 2
	.globl	_ZN7MyClassC2Ev
	.def	_ZN7MyClassC2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN7MyClassC2Ev
_ZN7MyClassC2Ev:
.LFB1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movl	$0, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.globl	_ZN7MyClassC1Ev
	.def	_ZN7MyClassC1Ev;	.scl	2;	.type	32;	.endef
	.set	_ZN7MyClassC1Ev,_ZN7MyClassC2Ev
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB3:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	-4(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN7MyClassC1Ev
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN7MyClassC1Ev
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
