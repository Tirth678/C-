#include<stdio.h>
#include<stdbool.h>
int main(){
    int intPrime = false;
    int a;
    printf("enter a value\n");
    scanf("%d", &a);
    if(a%a == 0 && a%1 == 0 && a%2!=0 || a == 2){
        printf("number is prime\n");
        while(a<20){
            a=a+2;
            printf("%d\n",a);
            
        }
    }
    else{
        printf("number is NOT prime\n");
    }

    

    return 0;
}