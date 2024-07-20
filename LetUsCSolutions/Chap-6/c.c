#include <stdio.h>
#include <math.h>

int main() {
    int p, n;
    float q, r; // Changed to float for correct division
    double a;   // Changed to double to handle large values

    for (p = 1; p < 10; p++) {
        for (n = 0; n < 10; n++) {
            for (q = 1; q < 10; q++) { // Starting q from 1 to avoid division by zero
                for (r = 1; r < 10; r++) { // Starting r from 1 to avoid division by zero
                    a = p * pow((1 + (r / q)), (n * q));
                    printf("p: %d, n: %d, q: %.0f, r: %.0f, a: %.2f\n", p, n, q, r, a);
                }
            }
        }
    }

    return 0;
}
