.text
.syntax unified

f:
    add r3, r4, r0, lsl #2
    add r4, r2, #99
    ands r0, r1, #7
    addeq r1, r1, #1
    addsge r1, sp, #254 
    mulslt r3, r4, r5
    addsge r1, sp, #254


    // r0 = r1*5 = r1 + r1*4  
    add r0,r1,r1, lsl #2 
