// Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.
#include<stdio.h>
#define PI 3.14
int main(){
    int length, breath,area;
    printf("enter value of length\n");
    scanf("%d", &length);
    printf("enter value of breath\n");
    scanf("%d", &breath);
    area = length*breath;
    printf("the area of rectangle = %d\n", area);
    return 0;
}