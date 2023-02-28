#include <stdio.h>
#include "checksum.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

   // TODO check argc
   printf("%d\n", checksum(atoi(argv[1]))); 
}
