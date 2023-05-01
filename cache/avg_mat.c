int avgM(int r, int c, int M[r][c]) {

    int sum = 0;
    for (int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum = sum + M[i][j];


    return sum / (r*c);
}

