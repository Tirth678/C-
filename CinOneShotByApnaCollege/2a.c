#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first value\n");
    scanf("%d", &a);
    printf("enter second value\n");
    scanf("%d", &b);
    printf("enter third value\n");
    scanf("%d", &c);
    printf("the avg of the 3 numbers = %d\n", (a+b+c)/3);

    return 0;
}