	.arch armv6
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 2
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"bloop.c"
	.text
	.align	2
	.global	bloop
	.arch armv6
	.syntax unified
	.arm
	.fpu vfp
	.type	bloop, %function
bloop:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	add	r1, r0, r1, lsl #3
	add	r2, r0, r2, lsl #3
	push	{r4, r5, r6, r7}
	ldrd	r4, [r1]
	ldrd	r6, [r2]
	strd	r6, [r1]
	strd	r4, [r2]
	pop	{r4, r5, r6, r7}
	bx	lr
	.size	bloop, .-bloop
	.ident	"GCC: (Raspbian 8.3.0-6+rpi1) 8.3.0"
	.section	.note.GNU-stack,"",%progbits
