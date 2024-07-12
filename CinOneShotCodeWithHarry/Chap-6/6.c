// Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.
#include<stdio.h>
int main(){
    int i = 3;
    int *j = &i;
    int **k = &j;
    printf("%d\n", i);
    printf("%d\n", *(j));
    printf("%d\n", **(k));


    return 0;
}