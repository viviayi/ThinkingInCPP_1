	.file	"11_14.cpp"
	.text
	.globl	_Z3funi
	.def	_Z3funi;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z3funi
_Z3funi:
.LFB0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	cmpl	$0, 16(%rbp)
	jle	.L2
	movl	16(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, 16(%rbp)
	movl	%eax, %ecx
	call	_Z3funi
	jmp	.L1
.L2:
	movl	$0, %eax
.L1:
	addq	$32, %rsp
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
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	movl	$5, %ecx
	call	_Z3funi
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
