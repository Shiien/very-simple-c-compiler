	.file	"temp.c"
	.text
	.comm	temp0,4,4
	.comm	temp1,4,4
	.section	.rodata
.str2:
	.string	"%d\n"
	.text
	.globl	p
	.type	p, @function
p:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$0, temp0(%rip)
	movl	temp0(%rip), %eax
	addl	$99, %eax
	movl	%eax, %eax
	leave
	ret
	.size	p, .-p
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	call	p
	movl	%eax, temp1(%rip)
	leaq	.str2(%rip), %rdi
	movq	temp1(%rip), %rsi
	call	printf@PLT
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"Vampire very-simple-c-compiler"
	.section	.note.GNU-stack,"",@progbits
