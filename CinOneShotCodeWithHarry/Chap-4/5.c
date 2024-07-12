// Write a program to sum first ten natural numbers using while loop
#include<stdio.h>
int main(){
    int i=1,sum;
    while (i<10)
    {

        i++;
        sum = sum+i;
        printf("%d\n", i);
        
        
    }
    printf("sum = %d", sum);

    return 0;
}