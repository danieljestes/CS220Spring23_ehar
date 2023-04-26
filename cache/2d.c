#include <stdlib.h>

void f(int r, int c, int m[r][c]) {

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            m[i][j] = 0;

}

void matrix_mult(size_t n, size_t k, size_t m,
                 double C[n][m],
                 double A[n][k],
                 double B[k][m]) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            C[i][j] = 0.0;
            for (size_t l = 0; l < k; ++l) {
                C[i][j] += A[i][l]*B[l][j];
            }
        }
    }
}

int main() {

    int mat[2][3] = 
    {
        {1,2,3},
        {4,5,6} 
    };

    f(2, 3, mat);
}
