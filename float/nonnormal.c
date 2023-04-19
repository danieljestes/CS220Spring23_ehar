#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double x = atof(argv[1]);
    double y = atof(argv[2]);
    double z = x/y;      // y might be zero
    double w = sqrt(z);  // possible NaN not-a-number
    
    
    if (isinf(z) == 1) 
        printf("%f is pos inifinity\n", z);
    else if (isinf(z) == -1)
        printf("%f is neg inifinity\n", z);
    else if (isfinite(z))
        printf("%f is finite\n", z);

    if (isnan(w))
        printf("%f is nan\n", w);

}
