#include "randrange.h"
#include <stdlib.h>

int randrange(int x, int y) {
    return rand() % (y - x) + x;
}
