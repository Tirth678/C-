#include<stdio.h>
int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    printf("enter the first value\n");
    scanf("%d", &a);
    printf("enter the second value\n");
    scanf("%d", &b);
    swap(&a, &b);
    printf("value after swap = %d and %d", a,b);

    return 0;
}