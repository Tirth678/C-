#include <stdio.h>
void primeFactors(int n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

 
    if (n > 2)
        printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Prime factors of %d are: ", n);
        primeFactors(n);
        printf("\n");
    }

    return 0;
}
