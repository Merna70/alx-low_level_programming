section		.text
	extern  printf
	global  main

main:
	mov	edi, message
	call  printf
	mov	eax, 60

section		 .data
	message: db 'Hello, Holberton', 0xa, 0
