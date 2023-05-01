
/*
int sum(int vec[], int n) {
    int sum = 0;
    int i = 0;

    while (i < n) 
        sum = sum + vec[i++];

    return sum;
}
*/

.global sum
.cpu cortex-a53
.text

// r0 - the address of the first item in the array, starting address
// r1 - the number of items in the arrays
sum:
    push { r4,r5 }
    mov r2, #0   // sum = 0
    mov r3, #0   // i = 0        

while:
    cmp r3, r1
    bge endwhile
    lsl r4, r3, #2  // 4 * i 
    add r4, r0, r4  // vec + 4i
    ldr r5, [r4]    // r4 = vec[i]
    add r3, r3, #1
    add r2, r2, r5  // sum = sum + vec[i++]
    b while  

endwhile:
    mov r0, r2
    pop { r4, r5 }
    bx lr
