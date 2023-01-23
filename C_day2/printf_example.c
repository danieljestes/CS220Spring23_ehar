#include <stdio.h>

int main(int argc, char *argv[]) {

    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
  
    // loop print the squares of i from 1 to 10
    for (int i = 1; i <= n; i++) 
        printf("i = %d   i^2 = %d\n", i, i*i);

    return 0;
}
