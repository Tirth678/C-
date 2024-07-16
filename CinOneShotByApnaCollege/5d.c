#include<stdio.h>
int power(int x, int y);
int main(){
    int num, num2;
    printf("enter a base\n");
    scanf("%d", &num);
    printf("enter a power\n");
    scanf("%d", &num2);
    printf("%d", power(num, num2));


    return 0;
}
int power(int x, int y){
    int result;
    result = x*power(0, y-1);
    return result;
}