#include<stdio.h>
int main(){
    int radius, length, breath,result1,result2,result3,result4;
    float PI = 3.14;
    printf("enter value of radius\n");
    scanf("%d", &radius);
    result1 = PI*radius*radius;
    result3 = 2*PI*radius;
    printf("area of the cricle = %d\n", result1);
    printf("circumference of the circle = %d\n", result3);
    printf("enter length\n");
    scanf("%d", &length);
    printf("enter breath\n");
    scanf("%d", &breath);
    result2 = length*breath;
    result4 = length+breath;
    printf("area of the rectangle = %d\n", result2);
    printf("perimeter of the rectangle = %d\n", result4);


    return 0;
}