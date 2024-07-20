#include<stdio.h>
int swap(int *x, int *y, int *z);
int main(){
    int a,b,c;
    printf("enter 1st value\n");
    scanf("%d", &a);
    printf("enter 2nd value\n");
    scanf("%d", &b);
    printf("enter 3rd value\n");
    scanf("%d", &c);
    swap(&a,&b,&c);
    printf("%d %d %d\n", a,b,c);
    

    return 0;
}
int swap(int *x, int*y, int *z){
    int temp = *x;
    *x=*z;
    *z=*y;
    *z = temp;

    
}