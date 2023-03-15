#include <string.h>
#include <stdlib.h>
/*
def dec2bin(f : float) -> str:
   r = ""

   # 64 bits in a double
   for i in range(64):
        f = f * 2

        if f > 1:
            f = f - 1
            r = r + '1'
        else:
            r = r + '0'

   return r
*/
// dec2bin allocates NUM_BITS + 1 bytes on the heap. Calling 
// function must deallocate memory using free.
char *dec2bin(double f) {

    const int NUM_BITS = 64;
    // char r[NUM_BITS + 1];  // add one for null terminating byte

    // dynamic memory is allocated from the heap.
    char *r = malloc(NUM_BITS + 1);
    memset(r, '\0', NUM_BITS + 1);

    for (int i = 0; i < NUM_BITS; i++) {
        f = f * 2;  // don't use << 1, not the same thing on a double
        if (f > 1) {
            f = f - 1;
            strcat(r, "1");  
        }
        else 
            strcat(r, "0");

    }

    return r;
}
