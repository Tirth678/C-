#include<stdio.h>
int main(){
    int a;
    char ch;
    scanf("%d", &a);
    if(ch >='0' || ch <= '9'){
        printf("it is a character\n");
    }
    else{
        printf("it is NOT a character\n");
    }


    return 0;
}