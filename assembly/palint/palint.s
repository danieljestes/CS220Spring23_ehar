/*
int isPalindromeInt(int n) {

     int m = 0; // stack of digits
     int tmp = n;

     while (n > 0) {
         m = m * 10 + (n % 10);
         n = n / 10;
     }

     return tmp == m;
}
*/

.cpu cortex-a53
.global isPalindromeInt
.text

isPalindromeInt:
    mov r1, #0
    mov r2, r0

    cmp r0, #0
    beq endwhile
    // loop bady
endwhile:
    // finish on Monday
