// Write a program to print the address of a variable. Use this address to get the
// value of the variable.
#include<stdio.h>
int main(){
    int i=4;
    int *j = &i;
    printf("%p\n", j);
    printf("%d\n", *(j));

    return 0;
}