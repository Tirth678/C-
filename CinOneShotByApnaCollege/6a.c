#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a, b;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    
    swap(&a, &b);
    
    printf("Values after swap: %d %d\n", a, b);

    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
