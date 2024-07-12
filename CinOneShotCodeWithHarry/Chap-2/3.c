// Write a program to check whether a number is divisible by 97 or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    if(num%97 == 0){
        printf("the num is divisble by 97\n");
    }
    else{
        printf("the num is not divisble by 97\n");
    }

    return 0;
}