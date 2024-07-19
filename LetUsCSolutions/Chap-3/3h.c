#include<stdio.h>
int main(){
    int x,y;
    printf("enter value of x-axis\n");
    scanf("%d", &x);
    printf("enter value of y-axis\n");
    scanf("%d", &y);
    if(x == 0 && y == 0){
        printf("the point lies on the origin\n");
    }
    else{
        printf("the point does NOT lies on the origin\n");
    }


    return 0;
}