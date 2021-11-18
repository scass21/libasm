;char *strcpy(char *dest, const char *src);

section .text

		global ft_strcpy

ft_strcpy:
		mov rax, 0
.start:		
		cmp byte[rsi + rax], 0
		je .end
		mov	bl, byte[rsi + rax]
		mov byte[rdi + rax], bl
		inc rax
		jmp .start

.end:
		mov byte[rdi + rax], 0
		mov rax, rdi
		ret