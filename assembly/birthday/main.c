#include "init.h"
#include "birthday.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/random.h>

int main(int argc, char *argv[]) {

    const int SIZE = 366;
    int cal[SIZE];
    //init(cal, SIZE, 0);
    memset(cal, 0, SIZE*sizeof(int)); 

    char buff[4];   // hold random bits

    // have seed point to buff as an unsigned int
    unsigned int *seed = (unsigned int *) buff;
    getrandom(buff, 4, 0);
    srand(*seed);

    //srand(time(NULL));
    birthday(cal, SIZE, atoi(argv[1]));
 
    for (int i = 0; i < SIZE; i++) {
        if (cal[i] > 1) {
            printf("yup\n");
            break;
        }
        
    }
}
