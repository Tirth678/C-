#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int numbers[MAX_SIZE];
    int num, count = 0;
    int count_pos = 0, count_neg = 0, count_zero = 0;
    printf("Enter numbers (enter 0 to stop or reach maximum capacity of %d):\n", MAX_SIZE);
    while (count < MAX_SIZE && scanf("%d", &num) == 1 && num != 0) {
        numbers[count++] = num;
    }
    for (int i = 0; i < count; i++) {
        if (numbers[i] > 0) {
            count_pos++;
        } else if (numbers[i] < 0) {
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
