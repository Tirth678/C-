// Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
#include<stdbool.h>
int fibonacci(int x);
int main(){
    int a=0;
    while(a<10){
        printf("%d\n", fibonacci(a));
        a++;
    }

    return 0;
} 
int fibonacci(int x){
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}