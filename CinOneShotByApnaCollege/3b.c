#include<stdio.h>
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    if(num == 0){
        printf("it is not natural number\n");
    }
    else{
        printf("it is natural number\n");
    }


    return 0;
}