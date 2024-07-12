// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and heigh
#include<stdio.h>
#define PI 3.14
int main(){
    int radius,area;
    printf("enter value of radius\n");
    scanf("%d", &radius);
    area = PI*radius*radius;
    printf("the area of circle = %d\n", area);


    return 0;
}