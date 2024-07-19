#include<stdio.h>
int main(){
    float height,weight;
    float BMI = weight/(height*height);
    printf("enter your weight\n");
    scanf("%f", &weight);
    printf("enter your height\n");
    scanf("%d", &weight);
    
    printf("%2.f\n", BMI);

    return 0;
}
// still solving this