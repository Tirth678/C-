// Write a program to print multiplication table of a given number n.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the value\n");
    scanf("%d", &n);
    for (i = 10; i >=0; i--)
    {
        printf("%dx%d = %d\n", n, i, n*(i-0));
    }
    

    return 0;
}