#include <stdio.h>

int main() {
    int x = 08;
    printf("unsigned char     %d byte(s)\n", sizeof(unsigned char));
    printf("signed char     %d byte(s)\n", sizeof(signed char));
    printf("signed short     %d byte(s)\n", sizeof(signed short));
    printf("int     %d byte(s)\n", sizeof(int));
    printf("long     %d byte(s)\n", sizeof(long));
    printf("long long int    %d byte(s)\n", sizeof(long long));
    printf("float     %d byte(s)\n", sizeof(float));
    printf("double     %d byte(s)\n", sizeof(double));
    printf("long double     %d byte(s)\n", sizeof(long double));
    printf("long long double     %d byte(s)\n", sizeof(long long double));
}
