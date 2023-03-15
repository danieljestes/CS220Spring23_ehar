#include "dec2bin.h"
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv []) {

    // a memory leak is not freeing allocated memory
    char * bits = dec2bin(atof(argv[1]));
    printf("%s\n", bits);
    free(bits);
}
