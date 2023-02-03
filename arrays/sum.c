// write a function sum that takes an array of integers
// and returns the sum of the elements in the
// array

int sum(int arr [], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}
