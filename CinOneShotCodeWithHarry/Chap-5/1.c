// Write a program using function to find average of three numbers
#include<stdio.h>
int avg(int x, int y, int z);
int main(){
    int a,b,c;
    printf("enter any 3 values\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("the avg of values = %d\n", avg(a,b,c));


    return 0;
}
int avg(int x, int y, int z){
    int result;
    result = (x+y+z)/3;
    return result;
}