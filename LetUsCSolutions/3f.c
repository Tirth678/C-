#include<stdio.h>
int main(){
    int x1,x2,y1,y2,x3,y3;
    printf("enter value of x1 and x2");
    scanf("%d %d", &x1, &x2);
    printf("enter value of y1 and y2");
    scanf("%d %d", &y1, &y2);
    printf("enter value of z1 and z2");
    scanf("%d %d", &x3, &y3);
    if((x2-x1)/(y2-y1)==(x3-x1)/(y3-y1)){
        printf("the points lie on the same line\n");
    }
    else{
        printf("the points DO NOT lie on the same line\n");
    }

    return 0;
}