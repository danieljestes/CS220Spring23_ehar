.global randrange
.cpu cortex-a53

//  return rand() % (y - x) + x

// bl - branch and link. Puts the address of the instruction following
//      bl into lr
//      sets the pc to the address of the called function

.text
randrange:
    push { r4, r5, lr }   
    mov r4,r0
    mov r5,r1
    bl rand   // branch and link to rand
    
    sub r1,r5,r4    // y - x
    bl mod
    add r0, r0, r4
    pop { r4, r5, lr }
    bx lr
