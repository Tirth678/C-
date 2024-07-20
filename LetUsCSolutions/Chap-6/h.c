#include <stdio.h>

int main() {
    int timing;
    printf("Enter timings (0-23):\n");
    scanf("%d", &timing);

    if (timing >= 0 && timing <= 12) {
        printf("morning\n");
    } else if (timing >= 13 && timing <= 16) {
        printf("afternoon\n");
    } else if (timing >= 17 && timing <= 19) {
        printf("evening\n");
    } else if (timing >= 20 && timing <= 23) {
        printf("night\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
