#include <stdio.h>

int main() {
    int num, count_pos = 0, count_neg = 0, count_zero = 0;

    printf("Enter numbers (enter 0 to stop): \n");

    while ((scanf("%d", &num)) == 1) {
        if (num > 0) {
            count_pos++;
        } else if (num < 0) {
            count_neg++;
        } else {
            count_zero++;
        }
    }

    printf("\nSummary:\n");
    printf("Positive numbers: %d\n", count_pos);
    printf("Negative numbers: %d\n", count_neg);
    printf("Zero numbers: %d\n", count_zero);

    return 0;
}

