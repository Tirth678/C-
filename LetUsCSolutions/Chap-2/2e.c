#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter a value\n");
    scanf("%f", &a);
    printf("sin = %f\n", sin(a));
    printf("cos = %f\n", cos(a));
    printf("tan = %f\n", tan(a));
    printf("sin inverse = %f\n", asin(a));
    printf("cos inverse = %f\n", acos(a));
    printf("tan inverse = %f\n", atan(a));


    return 0;
}