// Write a function and pass the value by reference.
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // Pass addresses of a and b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}