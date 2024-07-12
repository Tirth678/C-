//  Write a program to check whether a given number is prime or not using loops.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int i,n;
    bool isPrime = true;
    printf("enter a value\n");
    scanf("%d", &n);
    for (i = 2; i < (n-1); i++)
    {
        if(n%1 == 0){
            isPrime = false;

            break;
        }
    }
    isPrime = true;

    

    return 0;
}