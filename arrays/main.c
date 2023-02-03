#include <stdio.h>

extern int sum(int arr[], int n);

int main() {

    int nums[] = {9, 1, -3, 44, 71, 23};

    printf("%d\n", sum(nums, 6));

    char s[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char t[] = "Hello";

    printf("%s %c %x %s\n", s, t[1], t[1], t);
}
