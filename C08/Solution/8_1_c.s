	.file	"8_1.c"
	.text
	.globl	a
	.section .rdata,"dr"
	.align 4
a:
	.long	1
	.globl	b
	.align 4
b:
	.long	2
	.globl	c
	.align 4
c:
	.long	3
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movq	%rsp, %rax
	movq	%rax, %rdx
	movl	$1, %ecx
	movl	$2, %eax
	addl	%ecx, %eax
	movl	$3, %ecx
	addl	%ecx, %eax
	cltq
	subq	$1, %rax
	movq	%rax, -8(%rbp)
	movl	$1, %ecx
	movl	$2, %eax
	addl	%ecx, %eax
	movl	$3, %ecx
	addl	%ecx, %eax
	cltq
	movq	%rax, %r12
	movl	$0, %r13d
	movl	$1, %ecx
	movl	$2, %eax
	addl	%ecx, %eax
	movl	$3, %ecx
	addl	%ecx, %eax
	cltq
	movq	%rax, %rbx
	movl	$0, %esi
	movl	$1, %ecx
	movl	$2, %eax
	addl	%ecx, %eax
	movl	$3, %ecx
	addl	%ecx, %eax
	cltq
	salq	$2, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	call	___chkstk_ms
	subq	%rax, %rsp
	leaq	32(%rsp), %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -16(%rbp)
	movq	%rdx, %rsp
	movl	$0, %eax
	movq	%rbp, %rsp
	popq	%rbx
	popq	%rsi
	popq	%r12
	popq	%r13
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
