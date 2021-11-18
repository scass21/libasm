;ssize_t write(int fd, const void *buf, size_t count)

section .text

		global ft_write
		extern __errno_location

ft_write:
		mov	rax, 1
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