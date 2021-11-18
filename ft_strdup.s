;char *strdup(const char *s)

section .text

		global ft_strdup
		extern ft_strlen
		extern ft_strcpy
		extern malloc

ft_strdup:

		mov		rax, 0

.start:
		push	rdi
		call	ft_strlen
		inc		rax
		mov		rdi, rax
		call	malloc
		cmp		rax, 0
		jz		.end
		pop		rsi
		mov		rdi, rax
		call	ft_strcpy
		ret
.end:
		ret
