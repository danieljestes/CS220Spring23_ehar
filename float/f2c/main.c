#include <stdio.h>
#include <stdlib.h>
#include "f2c.h"

int main(int argc, char *argv[]) {
    printf("%f\n", f2c(atof(argv[1])));
}
