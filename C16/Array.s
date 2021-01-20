	.file	"Array.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
	.section	.text$_Z7requirebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"x"
	.linkonce discard
	.globl	_Z7requirebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.def	_Z7requirebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z7requirebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
_Z7requirebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1686:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	%ecx, %eax
	movq	%rdx, -56(%rbp)
	movb	%al, -64(%rbp)
	movzbl	-64(%rbp), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	.L3
	movl	$2, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	fputs
	movl	$2, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rdx
	movl	$10, %ecx
	call	fputc
	movl	$1, %ecx
	call	exit
.L3:
	nop
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
.lcomm _ZStL8__ioinit,1,1
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii ": \0"
.LC2:
	.ascii ", \0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1692:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$872, %rsp
	.seh_stackalloc	872
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 720(%rbp)
	.seh_savexmm	%xmm6, 848
	.seh_endprologue
	call	__main
	movl	$0, 716(%rbp)
.L6:
	cmpl	$19, 716(%rbp)
	jg	.L5
	movl	716(%rbp), %edx
	leaq	304(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5ArrayIiEixEi
	movq	%rax, %rdx
	movl	716(%rbp), %eax
	imull	716(%rbp), %eax
	movl	%eax, (%rdx)
	cvtsi2ss	716(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm1
	movsd	.LC0(%rip), %xmm0
	movapd	%xmm1, %xmm6
	mulsd	%xmm0, %xmm6
	movl	716(%rbp), %edx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5ArrayIfEixEi
	cvtsd2ss	%xmm6, %xmm0
	movss	%xmm0, (%rax)
	addl	$1, 716(%rbp)
	jmp	.L6
.L5:
	movl	$0, 712(%rbp)
.L8:
	cmpl	$19, 712(%rbp)
	jg	.L7
	movl	712(%rbp), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	leaq	.LC1(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	movl	712(%rbp), %edx
	leaq	304(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5ArrayIiEixEi
	movl	(%rax), %eax
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	movl	712(%rbp), %edx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5ArrayIfEixEi
	movss	(%rax), %xmm0
	movaps	%xmm0, %xmm1
	movq	%rbx, %rcx
	call	_ZNSolsEf
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	addl	$1, 712(%rbp)
	jmp	.L8
.L7:
	movl	$0, %eax
	movaps	720(%rbp), %xmm6
	addq	$872, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC3:
	.ascii "Index out of range\0"
	.section	.text$_ZN5ArrayIiEixEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5ArrayIiEixEi
	.def	_ZN5ArrayIiEixEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5ArrayIiEixEi
_ZN5ArrayIiEixEi:
.LFB1948:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$88, %rsp
	.seh_stackalloc	88
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -16(%rbp)
	movl	%edx, -8(%rbp)
	leaq	-49(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIcEC1Ev
	leaq	-49(%rbp), %rdx
	leaq	-96(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC3(%rip), %rdx
	movq	%rax, %rcx
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE0:
	cmpl	$0, -8(%rbp)
	js	.L11
	cmpl	$99, -8(%rbp)
	jg	.L11
	movl	$1, %eax
	jmp	.L12
.L11:
	movl	$0, %eax
.L12:
	movzbl	%al, %eax
	leaq	-96(%rbp), %rdx
	movl	%eax, %ecx
.LEHB1:
	call	_Z7requirebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE1:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-49(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIcED1Ev
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	jmp	.L18
.L17:
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L15
.L16:
	movq	%rax, %rbx
.L15:
	leaq	-49(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB2:
	call	_Unwind_Resume
.LEHE2:
.L18:
	addq	$88, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1948:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1948-.LLSDACSB1948
.LLSDACSB1948:
	.uleb128 .LEHB0-.LFB1948
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L16-.LFB1948
	.uleb128 0
	.uleb128 .LEHB1-.LFB1948
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L17-.LFB1948
	.uleb128 0
	.uleb128 .LEHB2-.LFB1948
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1948:
	.section	.text$_ZN5ArrayIiEixEi,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZN5ArrayIfEixEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5ArrayIfEixEi
	.def	_ZN5ArrayIfEixEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5ArrayIfEixEi
_ZN5ArrayIfEixEi:
.LFB1949:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$88, %rsp
	.seh_stackalloc	88
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -16(%rbp)
	movl	%edx, -8(%rbp)
	leaq	-49(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIcEC1Ev
	leaq	-49(%rbp), %rdx
	leaq	-96(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC3(%rip), %rdx
	movq	%rax, %rcx
.LEHB3:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE3:
	cmpl	$0, -8(%rbp)
	js	.L20
	cmpl	$99, -8(%rbp)
	jg	.L20
	movl	$1, %eax
	jmp	.L21
.L20:
	movl	$0, %eax
.L21:
	movzbl	%al, %eax
	leaq	-96(%rbp), %rdx
	movl	%eax, %ecx
.LEHB4:
	call	_Z7requirebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE4:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-49(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIcED1Ev
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	jmp	.L27
.L26:
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L24
.L25:
	movq	%rax, %rbx
.L24:
	leaq	-49(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L27:
	addq	$88, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1949:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1949-.LLSDACSB1949
.LLSDACSB1949:
	.uleb128 .LEHB3-.LFB1949
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L25-.LFB1949
	.uleb128 0
	.uleb128 .LEHB4-.LFB1949
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L26-.LFB1949
	.uleb128 0
	.uleb128 .LEHB5-.LFB1949
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE1949:
	.section	.text$_ZN5ArrayIfEixEi,"x"
	.linkonce discard
	.seh_endproc
	.text
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2208:
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
.LFB2207:
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
	jne	.L31
	cmpl	$65535, 24(%rbp)
	jne	.L31
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L31:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB2209:
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
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	927712936
	.long	1072841097
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv;	.scl	2;	.type	32;	.endef
	.def	fputs;	.scl	2;	.type	32;	.endef
	.def	fputc;	.scl	2;	.type	32;	.endef
	.def	exit;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEf;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_ZNSaIcEC1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSaIcED1Ev;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
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
