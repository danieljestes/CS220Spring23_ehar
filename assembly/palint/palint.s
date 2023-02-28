/*
int isPalindromeInt(int n) {

     int m = 0; // stack of digits
     int tmp = n;

     while (n > 0) {
         m = m * 10 + (n % 10);  // push
         n = n / 10;             // pop
     }

     return tmp == m;
}
*/

.cpu cortex-a53   // tell the assembler we have a divide instruction
.global isPalindromeInt
.text

isPalindromeInt:
    push { r4 }   // save r4 on the runtime stack
    mov r1, #0    // m = 0
    mov r2, r0    // tmp = n
    mov r3, #10   
while:
    cmp r0, #0
    beq endwhile
    mul r1, r1, r3 
    sdiv r4, r0, r3   // n / 10
    mul r4, r4, r3    // r4 * 10
    sub r4, r0, r4 
    add r1, r1, r4
    sdiv r0, r0, r3
    b while
endwhile:

    cmp r2, r1
    beq return1
    mov r0, #0    // return 0
    pop { r4 }
    bx lr
return1:
    mov r0, #1    // return 1
    pop { r4 }
    bx lr 
