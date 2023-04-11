/*
void birthday(int cal[], int n, int m) {

    int i = 0;

    while (i++ < m)
        cal[rand() % n]++;   

}
*/
.cpu cortex-a53
.global birthday
.text

birthday:

    // r0 contains the address of cal
    push { r4-r7, lr }
    mov r4, r0    // r4 is address of cal
    mov r5, r1    // n in r5
    mov r6, r2    // m in r6
    mov r7, #0    // r7, the loop counter

while:
    cmp r7, r6             // i < m
    bge endwhile           // if i >= m goto endwhile 
    add r7, r7, #1         // i++

    bl rand 
    mov r1, r5             // set up call to mod
    bl mod                 // rand() % n
    add r3, r4, r0, lsl #2 // compute address of array item 
    ldr r2, [r3]         
    add r2, r2, #1
    str r2, [r3]
    b while
endwhile:

    pop { r4-r7, pc}
