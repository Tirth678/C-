#include<stdio.h>
int main(){
    int a,b,c;
    float percentage;
    printf("enter frist threee values\n");
    scanf("%d %d %d", &a, &b, &c);
    percentage = (a+b+c)/3;
    printf("%f\n", percentage);


    return 0;
}