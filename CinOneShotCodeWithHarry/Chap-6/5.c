// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().
#include<stdio.h>
int avg(int *x, int *y);
int main(){
    int a,b;
    a = 10;
    b = 20;
    // printf("enter the 2 values\n");
    // scanf("%d", &a);
    // scanf("%d", &b);
    avg(&a, &b);
    printf("%d\n");


    return 0;
}
int avg(int *x, int *y){
    int sum;
    int avg;
    sum = *x+*y;
    return sum;
    avg = (*x+*y)/2;
    return avg;
}