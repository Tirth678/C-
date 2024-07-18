#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int a;
    printf("enter a value\n");
    scanf("%d", &a);
    if(a<0){
        printf("%d",abs(a));
    }

    return 0;
}