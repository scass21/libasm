;ssize_t ft_read(int fd, void *buf, size_t count)
		
section .text

		global ft_read
		extern	__errno_location

ft_read:		
		mov	rax, 0
		syscall
		cmp rax, 0
		jl	.error
		ret
.error:
		push rax
		call __errno_location
		pop	 rdi
		neg  rdi
		mov  [rax], rdi
		mov  rax, -1
		ret
