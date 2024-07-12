// Write a program to change the value of a variable to ten times of its current
// // value
#include<stdio.h>
int ten(int *x){
    int result;
    result = *x*10;
    // return result;
}
int main(){
    int a=2;
    // printf("enter a value\n");
    // scanf("%d", &(a));
    ten(&a);
    printf("the new value = %d\n");

    return 0;
}
