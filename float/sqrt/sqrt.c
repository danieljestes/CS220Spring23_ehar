#include "sqrt.h"
#include <math.h>

const double eps = 1e-6;  // a number close to zero

// precond: n >= 0
double mysqrt(double n) {

    double r = n;

    while (fabs(r*r - n) > eps) 
        r = (r + n/r) / 2;

    return r;
}
