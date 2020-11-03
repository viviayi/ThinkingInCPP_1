	.file	"PassingBigStructures.cpp"
	.text
	.globl	B
	.bss
	.align 32
B:
	.space 108
	.globl	B2
	.align 32
B2:
	.space 108
	.text
	.globl	_Z6bigfun3Big
	.def	_Z6bigfun3Big;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z6bigfun3Big
_Z6bigfun3Big:
.LFB0:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 24(%rbp)
	movq	%rdx, %rbx
	movl	$100, 100(%rbx)
	movq	24(%rbp), %rax
	movq	(%rbx), %rdx
	movq	%rdx, (%rax)
	movq	8(%rbx), %rdx
	movq	%rdx, 8(%rax)
	movq	16(%rbx), %rdx
	movq	%rdx, 16(%rax)
	movq	24(%rbx), %rdx
	movq	%rdx, 24(%rax)
	movq	32(%rbx), %rdx
	movq	%rdx, 32(%rax)
	movq	40(%rbx), %rdx
	movq	%rdx, 40(%rax)
	movq	48(%rbx), %rdx
	movq	%rdx, 48(%rax)
	movq	56(%rbx), %rdx
	movq	%rdx, 56(%rax)
	movq	64(%rbx), %rdx
	movq	%rdx, 64(%rax)
	movq	72(%rbx), %rdx
	movq	%rdx, 72(%rax)
	movq	80(%rbx), %rdx
	movq	%rdx, 80(%rax)
	movq	88(%rbx), %rdx
	movq	%rdx, 88(%rax)
	movq	96(%rbx), %rdx
	movq	%rdx, 96(%rax)
	movl	104(%rbx), %edx
	movl	%edx, 104(%rax)
	movq	24(%rbp), %rax
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1:
	pushq	%rbp
	.seh_pushreg	%rbp
	subq	$256, %rsp
	.seh_stackalloc	256
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	call	__main
	leaq	16(%rbp), %rax
	movq	B(%rip), %rdx
	movq	%rdx, -96(%rbp)
	movq	8+B(%rip), %rdx
	movq	%rdx, -88(%rbp)
	movq	16+B(%rip), %rdx
	movq	%rdx, -80(%rbp)
	movq	24+B(%rip), %rdx
	movq	%rdx, -72(%rbp)
	movq	32+B(%rip), %rdx
	movq	%rdx, -64(%rbp)
	movq	40+B(%rip), %rdx
	movq	%rdx, -56(%rbp)
	movq	48+B(%rip), %rdx
	movq	%rdx, -48(%rbp)
	movq	56+B(%rip), %rdx
	movq	%rdx, -40(%rbp)
	movq	64+B(%rip), %rdx
	movq	%rdx, -32(%rbp)
	movq	72+B(%rip), %rdx
	movq	%rdx, -24(%rbp)
	movq	80+B(%rip), %rdx
	movq	%rdx, -16(%rbp)
	movq	88+B(%rip), %rdx
	movq	%rdx, -8(%rbp)
	movq	96+B(%rip), %rdx
	movq	%rdx, 0(%rbp)
	movl	104+B(%rip), %edx
	movl	%edx, 8(%rbp)
	leaq	-96(%rbp), %rdx
	movq	%rax, %rcx
	call	_Z6bigfun3Big
	movq	16(%rbp), %rax
	movq	%rax, B2(%rip)
	movq	24(%rbp), %rax
	movq	%rax, 8+B2(%rip)
	movq	32(%rbp), %rax
	movq	%rax, 16+B2(%rip)
	movq	40(%rbp), %rax
	movq	%rax, 24+B2(%rip)
	movq	48(%rbp), %rax
	movq	%rax, 32+B2(%rip)
	movq	56(%rbp), %rax
	movq	%rax, 40+B2(%rip)
	movq	64(%rbp), %rax
	movq	%rax, 48+B2(%rip)
	movq	72(%rbp), %rax
	movq	%rax, 56+B2(%rip)
	movq	80(%rbp), %rax
	movq	%rax, 64+B2(%rip)
	movq	88(%rbp), %rax
	movq	%rax, 72+B2(%rip)
	movq	96(%rbp), %rax
	movq	%rax, 80+B2(%rip)
	movq	104(%rbp), %rax
	movq	%rax, 88+B2(%rip)
	movq	112(%rbp), %rax
	movq	%rax, 96+B2(%rip)
	movl	120(%rbp), %eax
	movl	%eax, 104+B2(%rip)
	movl	$0, %eax
	addq	$256, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
