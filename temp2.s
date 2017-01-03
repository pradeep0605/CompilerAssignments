	.file	"temp.cpp"
	.text
.globl _Z3sumv
	.type	_Z3sumv, @function
_Z3sumv:
.LFB0:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	movl	$100, %eax
	popl	%ebp
	ret
	.cfi_endproc
.LFE0:
	.size	_Z3sumv, .-_Z3sumv
.globl main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	movl	$0, %eax
	popl	%ebp
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
