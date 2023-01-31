#include <stdio.h>

void pb_broken(unsigned int n) {

    while (n  > 0) {
        printf("%d", n % 2);
        n = n / 2;
    }

    printf("\n");
}

void pb(unsigned int n) {
    if (n == 0)
        printf("0");
    else  {
        pb(n >> 1);
        printf("%d", n & 0x00000001);
    }

}
