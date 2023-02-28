#include "checksum.h"

int checksum(int n) {
   return n == 0 ? 0 : checksum(n >> 1) + (n & 1);
}
