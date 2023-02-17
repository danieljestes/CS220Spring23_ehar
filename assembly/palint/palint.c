#include "palint.h"

int isPalindromeInt(int n) {

     int m = 0; // stack of digits
     int tmp = n;

     while (n > 0) {
         m = m * 10 + (n % 10);
         n = n / 10;
     }

     return tmp == m;    
}
