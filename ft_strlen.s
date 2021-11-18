;size_t strlen(const char *s)

section .text

		global ft_strlen

ft_strlen:
		
		mov rax, 0

.start:
		cmp byte [rdi + rax], 0
		je  .end
		inc rax
		jmp .start

.end:
		ret
