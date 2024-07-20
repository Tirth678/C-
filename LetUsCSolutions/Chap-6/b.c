#include <stdio.h>

int main() {
    int y, x;
    float i;
    
    for (y = 1; y <= 6; y++) {
        for (x = 5; x <= 12; x++) {
            i = 2 + (y + 0.5 * x);  
            printf("%f\n", i);
        }
    }

    return 0;
}
