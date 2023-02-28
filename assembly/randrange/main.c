#include <stdio.h>
#include "randrange.h"
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

int main(int argc, char *argv[]) {

    // TODO Check the correct number of command
    // line arguments and issue error message

    srand(time(NULL));
    printf("%d\n", randrange(atoi(argv[1]), atoi(argv[2])));

}
