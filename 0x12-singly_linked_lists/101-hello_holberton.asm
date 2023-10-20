section		.text
	extern  printf
	global  main

main:
	mov	edi, message
	call  printf
	mov	eax, 0

section		 .data
	message: db 'Hello, Holberton', 0xa, 0
