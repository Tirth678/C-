#include<stdio.h>
#include<stdbool.h>
int main(){
    char ch;
    printf("enter a alphabet\n");
    scanf("%c", &ch);
    while(ch<='z'){
        ch = ch+1;
        printf("%c\n", ch);
    }



    return 0;
}