#include <stdio.h>
#include <stdlib.h>

void init(int *mat, int rows, int cols) {

    int sum =0;
    for (int i = 0; i < rows; i++)  
        for(int j = 0; j < cols; j++)
            //*(mat + i*cols + j) = rand() % 2;
            *(mat + j*rows + i) = rand() % 2;
    
}

double avg(int *mat, int rows, int cols) {

    int sum = 0;
    for (int i = 0; i < rows; i++)  
        for(int j = 0; j < cols; j++)
            //sum = sum + *(mat + i * cols + j);
            sum = sum + *(mat + j * rows + i);
    

    return (double) sum / (rows*cols);
}

int main(int argc, char *argv[]) {

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    int *mat = malloc(rows*cols*sizeof(int));

    init(mat, rows,cols);
    printf("%f\n", avg(mat, rows, cols));
    return 0;
}
