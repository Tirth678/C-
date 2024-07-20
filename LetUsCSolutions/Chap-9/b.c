#include <stdio.h>
void convertWeight(double kg, double *grams, double *tons, double *pounds) {

    *grams = kg * 1000;
    *tons = kg * 0.001;
    *pounds = kg * 2.20462;
}
int main() {
    double kg = 5.0; // for example
    double grams, tons, pounds;
    convertWeight(kg, &grams, &tons, &pounds);
    printf("Weight in kilograms: %.2f kg\n", kg);
    printf("Equivalent in grams: %.2f g\n", grams);
    printf("Equivalent in tons: %.4f tons\n", tons);
    printf("Equivalent in pounds: %.4f lbs\n", pounds);

    return 0;
}
