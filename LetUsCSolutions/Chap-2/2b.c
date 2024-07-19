#include<stdio.h>
#include<math.h>
int main(){
    int x,y,r,q;
    printf("enter value of x\n");
    scanf("%d", &x);
    printf("enter value of y\n");
    scanf("%d", &y);
    r = sqrt(pow(x,2)+pow(y,2));
    q = atan(y/x);
    printf("the polar coordinates are %d and %d\n", r,q);

    return 0;
}