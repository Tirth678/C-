#include<stdio.h>
#include<stdbool.h>
int main(){
    int intPrime = false;
    int a;
    printf("enter a value\n");
    scanf("%d", &a);
    if(a%a == 0 && a%1 == 0 && a%2!=0 || a == 2){
        printf("number is prime\n");
    }
    else{
        printf("number is NOT prime\n");
    }
    

    return 0;
}