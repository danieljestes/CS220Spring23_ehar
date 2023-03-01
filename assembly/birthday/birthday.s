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
    mov r7, #0    // is is r7, the loop counter

while:
    cmp r7, r6
    bge endwhile      
    add r7, r7, #1

    bl rand 
    mov r1, r5
    bl mod
    add r3, r4, r0, lsl #2        
    ldr dest, [r3] 

endwhile:
