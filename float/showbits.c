#include <stdio.h>

int main() {

    //float x = 23.25;
    float x = .09;
    int *y = (int *) &x;

    printf("0x%X\n", *y);
}
