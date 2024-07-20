#include<stdio.h>
int main(){
    int i,n;
    printf("enter a value\n");
    scanf("%d", &n);
   for(i=1; i<=10; i++){
    printf("%d*%d = %d\n", n, i,n*(i+0));
   }


    return 0;
}