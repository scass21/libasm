;int ft_strcmp(const char *s1, const char *s2)

section .text
		
		global ft_strcmp

ft_strcmp:
		
		mov 	rdx, 0
		mov 	rax, 0
		
.start:	
		mov		al, byte[rsi]
		cmp 	byte[rdi], 0
		je 		.end
		cmp 	byte[rdi], al
		jne		.end
		inc 	rdi
		inc 	rsi
		jmp 	.start
.end:
		movzx	rax, byte[rdi]
		movzx	rdx, byte[rsi]
		sub		rax, rdx
		ret
