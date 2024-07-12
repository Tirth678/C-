// Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include<stdio.h>
int summation(int x);
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    printf("result = %d", summation(num));


    return 0;
}
int summation(int x){
    int result;
    result = x+summation(x-1);
    return result;
}