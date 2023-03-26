#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double x = atof(argv[1]);
    double y = atof(argv[2]); 

    double z = x/y;

    if (isinf(z) == 1) 
        printf("Pos Infinte\n");
    else if (isinf(z) == -1) 
        printf("Neg Infinte\n");
    else if (isfinite(z))
        printf("finite\n");

    double w = sqrt(z);

    if (isnan(w))
        printf("nan\n");
    else 
        printf("%g\n", w);

    return 0;
}
