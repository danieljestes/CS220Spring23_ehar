#include <stdlib.h>

// cal - calandar array
// n - size of the calendar array 
// m - number of people
// precondition: is an assumption on a parameter value
// pre: 0 < n < 366 
// pre: assume that vec is all zeros
// pre: m > 0
void birthday(int cal[], int n, int m) {

    int i = 0;

    while (i++ < m)
        cal[rand() % n]++;
    
}
