/*
#include "checksum.h"

int checksum(int n) {
   return n == 0 ? 0 : checksum(n >> 1) + (n & 1);
}
*/

.global checksum
.text

checksum:
    push { r4, lr }

    mov r4, r0   // save n  
    cmp r4, #0
    beq return0
    lsr r0, r4, #1
    bl checksum
    and r1, r4, #1   // n & 1 
    add r0, r0, r1
    pop {r4, lr }
    bx lr

return0:
    mov r0, #0
    pop {r4, pc}  // shortcut, pop lr directly in to pc
    // don't need bx lr
