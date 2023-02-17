#include <stdio.h>
#include <stdlib.h>
#include "sqr.h"

// command line arguments
// argc - argument count, number of command line arguments
//  Java public static void main(String [] args) 

// argv is an array of pointers to a character

int main(int argc, char *argv[]) {

    if (argc > 1) {
        printf("%d\n", sqr(atoi(argv[1])));
        // printf("argc = %d argv[0] = %s argv[1] = %s\n", argc, argv[0], argv[1]);
    }    
    else {
        printf("Usage: sqr requires an argument, none given\n");
    }
}
