// Write a program to find greatest of four numbers entered by the user.
#include<stdio.h>
int main(){
    int a,b,c,d,max;
    printf("enter the first value\n");
    scanf("%d", &a);
    printf("enter the second value\n");
    scanf("%d", &b);
    printf("enter the third value\n");
    scanf("%d", &c);
    printf("enter the fourth value\n");
    scanf("%d", &d);
    printf("the max value = %d\n", max);

    if(a>b){
        a = max;
        return max;
    }
    else if(b>c){
        b = max;
        return max;
    }
    else if(c>d){
        c = max;
        return max;
    }
    else if(d>a){
        d = max;
        return max;
    }
    


    return 0;
}