.cpu cortex-a53
.global f2c
.fpu vfp // vector floating-point neon instructions 

.align 3  // start the next word on a 8 byte boundary addr % 8 == 0
.data
five: .double 5.0   // stored in memory at some address 
                    // identified by the lbael five.
nine: .double 9.0   
thirtytwo: .double 32.0 

// instructions are on a four byte boundary addr % 4 == 0
.align 2
.text


// stuff missing 
/*
double f2c(double f) {
    return 5.0/9 * (f - 32);
}
*/

// cannot represent floating-point number directly in the instruction
f2c:
    ldr r0, =five      // load address of label five into r0
    vldr.f64 d1, [r0]  // put 5.0 into d1
    ldr r0, =nine
    vldr.f64 d2, [r0]
    vdiv.f64 d1, d1, d2  // 5.0/9.0

    ldr r0, =thirtytwo
    vldr.f64 d2, [r0]
    vsub.f64 d0, d0, d2
    vmul.f64 d0, d1, d0
    bx lr
