#include <stdio.h>
#include <limits.h>


/*
 *  vec - [in] array of integers
 *  n - [in] number of items in vec 
 *  avg - [out] calculate mean of vec 
 *  hi - [out][ highest value in vec 
 *  low - [out] smallest value in vec
 */
void stats(int vec[], int n, double *avg, int *hi, int *low) {

    *hi = vec[0]; 
    *low = vec[0]; 
    *avg = 0;

    for (int i = 0; i < n; i++) {
        *avg += vec[i];

        if (vec[i] < *low) 
            *low = vec[i];

        if (vec[i] > *hi) 
            *hi = vec[i];
    }

    *avg = *avg / n; 
}

// parameters in C (and Java and Python) are *always* 
// passed by value.
void f(int * x) {

    *x = 30;

}

int main() {

    int p = 15;
    int *ptr = &p;
    printf("&p = %p\n", &p);
    printf("&ptr = %p\n", &ptr);
    // &ptr is a pointer to a pointer to an int
  
    f(&p);
    printf("%d\n", p);
    printf("%p\n", &p);

    int grades[] = {99, 87, 88, 82};
    double mean = 0;
    int hi, low;
    stats(grades, 4, &mean, &hi, &low); 
    printf("%f, %d, %d\n", mean, hi, low);


    int x;
    scanf("%d", &x);

}
