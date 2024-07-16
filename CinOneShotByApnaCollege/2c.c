#include<stdio.h>
int main(){
    int num, gum;
    printf("enter first value\n");
    scanf("%d", &num);
    printf("enter second value\n");
    scanf("%d", &gum);
    if(num>gum){
        printf("first value is greater than second\n");
    }
    else{
        printf("second value is greater than first\n");
    }


    return 0;
}