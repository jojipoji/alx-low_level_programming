	section .data
	msg db 'Hello, Holberton', 0

	section .text
	global _start

_start:
	;;  print message to stdout
	mov edx, 13
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80

	;;  print new line to stdout
	mov edx, 1
	mov ecx, newline
	mov ebx, 1
	mov eax, 4
	int 0x80

	;;  exit program
	mov eax, 1
	xor ebx, ebx
	int 0x80

	section .data
	newline db 0x0A
