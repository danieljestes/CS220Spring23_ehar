#include <stdio.h>
#include <stdlib.h>

int M[N][N];

void initM(int M[N][N]) {

    int sum =0;
    for (int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            M[j][i] = rand() % 2;

}

double avgM(int M[N][N]) {

    int sum = 0;
    for (int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            sum = sum + M[j][i];


    return (double) sum / (N*N);
}

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

    initM(M);
    avgM(M);

    /*
    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    int *mat = malloc(rows*cols*sizeof(int));

    init(mat, rows,cols);
    printf("%f\n", avg(mat, rows, cols));
    */
    return 0;
}
