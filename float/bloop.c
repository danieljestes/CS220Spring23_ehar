void bloop(double arr[], int i, int j) {   
    double tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
