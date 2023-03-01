#include "init.h"
#include "birthday.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {

    const int SIZE = 366;
    int cal[SIZE];
    init(cal, SIZE, 0);
    srand(time(NULL));
    birthday(cal, SIZE, atoi(argv[1]));
 
    for (int i = 0; i < SIZE; i++) {
        if (cal[i] > 1) {
            printf("yup\n");
            break;
        }
        
    }
}
