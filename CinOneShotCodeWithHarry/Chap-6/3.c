// Write a program to change the value of a variable to ten times of its current
// // value
#include<stdio.h>
int ten(int *x);
int main(){
    int *a;
    printf("enter a value\n");
    scanf("%d", &a);
    printf("the new value = %d\n", ten(a));

    return 0;
}
int ten(int *x){
    int result;
    result = *x*10;
    return result;
}