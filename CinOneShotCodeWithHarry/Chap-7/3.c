// Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.

#include<stdio.h>
int main(){
    int table[10];
    int i;
    for ( i = 1; i <=10; i++)
    {
        // printf("%d\n", 5*(i+0));
        table[i] = 5*(i+0);
        printf("%dx%d = %d\n",5, i, table[i]);
        
        
    }
    


    return 0;
}