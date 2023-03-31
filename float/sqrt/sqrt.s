.global mysqrt
.fpu vfp
.cpu cortex-a53
/*
const double eps = 1e-6;  // a number close to zero

// precond: n >= 0
double mysqrt(double n) {

    double r = n;

    while (fabs(r*r - n) > eps)
        r = (r + n/r) / 2;

    return r;
}
*/

.align 3
eps: .double 1e-6
two: .double 2.0

.text
.align 2
mysqrt:
    push { lr }
    vpush { d7,d8,d9,d10 }
    vmov.f64 d8, d0    // save n 
    vmov.f64 d9, d0    // r = n 
    ldr r0, =eps       // put address of eps in r0
    vldr.f64 d7, [r0]  // load eps into d7
    ldr r0, =two
    vldr.f64 d10, [r0]

while:
    vmul.f64 d0, d9, d9  // put r*r in d0
    vsub.f64 d0, d0, d8
    bl fabs
    vcmp.f64 d0, d7
    vmrs APSR_nzvc, FPSCR  // copy floating point condition 
                           // codes to integer condition codes
    blt endwhile 
    vdiv.f64 d0, d8, d9    // d0 = n/r
    vadd.f64 d0, d9, d0
    vdiv.f64 d9, d0, d10
    b while 

endwhile:
    vmov.f64 d0, d9
    vpop { d7,d8,d9,d10 }
    pop { pc }
