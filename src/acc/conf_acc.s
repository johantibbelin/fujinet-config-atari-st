#NO_APP
	.text
.LC0:
	.ascii "Hello, World!\0"
	.even
	.globl	_main
_main:
	jsr ___main
	pea .LC0
	jsr _puts
	addq.l #4,%sp
	moveq #0,%d0
	rts
