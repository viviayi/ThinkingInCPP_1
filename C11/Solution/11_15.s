	.file	"11_15.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
.lcomm _ZStL8__ioinit,1,1
	.section	.text$_ZN8MyClass1C1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8MyClass1C1Ev
	.def	_ZN8MyClass1C1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8MyClass1C1Ev
_ZN8MyClass1C1Ev:
.LFB1575:
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
	.section	.text$_ZN8MyClass1C1ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8MyClass1C1ERKS_
	.def	_ZN8MyClass1C1ERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8MyClass1C1ERKS_
_ZN8MyClass1C1ERKS_:
.LFB1578:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movl	$0, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN7MyClassC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN7MyClassC1Ev
	.def	_ZN7MyClassC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN7MyClassC1Ev
_ZN7MyClassC1Ev:
.LFB1582:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movl	$1, (%rax)
	movq	16(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rcx
	call	_ZN8MyClass1C1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN7MyClassC1ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN7MyClassC1ERKS_
	.def	_ZN7MyClassC1ERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN7MyClassC1ERKS_
_ZN7MyClassC1ERKS_:
.LFB1585:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movl	(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, (%rax)
	movq	16(%rbp), %rax
	addq	$4, %rax
	movq	24(%rbp), %rdx
	addq	$4, %rdx
	movq	%rax, %rcx
	call	_ZN8MyClass1C1ERKS_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1579:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN7MyClassC1Ev
	leaq	-8(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN7MyClassC1ERKS_
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2067:
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
.LFB2066:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L10
	cmpl	$65535, 24(%rbp)
	jne	.L10
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L10:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB2068:
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
	.quad	_GLOBAL__sub_I_main
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
