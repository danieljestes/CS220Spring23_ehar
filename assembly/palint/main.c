#include <stdio.h>
#include "palint.h"
#include <stdlib.h>


int main(int argc, char *argv[]) {

    // TODO check number of arguments

    // palint 12321
    printf("%d\n", isPalindromeInt(atoi(argv[1])));
}
