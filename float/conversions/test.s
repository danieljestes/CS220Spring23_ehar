.global f
.data
.align 3
pi: .double 3.14159

.text
.align 2
f:
    vmov s2, r0 
    vmov r2, s0 
    vcvt.f64.s32 d0,s2
    bx lr 
