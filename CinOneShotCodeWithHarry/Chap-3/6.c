// Write a program to find greatest of four numbers entered by the user.
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the first value\n");
    scanf("%d", &a);
    printf("enter the second value\n");
    scanf("%d", &b);
    printf("enter the third value\n");
    scanf("%d", &c);
    printf("enter the fourth value\n");
    scanf("%d", &d);
    // printf("the max value = %d\n", &);
    if(a>b && a>c && a>d){
        printf("the greatst between the four = %d\n", a);
    }
    else if(b>a && b>c && b>d){
        printf("the greatst between the four = %d\n", b);
    }
    else if(c>a && c>b && c>d){
        printf("the greatst between the four = %d\n", c);
    }
    else if (d>a && d>b && d>c){
        printf("the greatst between the four = %d\n", d);
    }
    
    


    return 0;
}