#include<stdio.h>
int temp(int x);
int main(){
    int num;
    printf("enter temprature in celcius\n");
    scanf("%d", &num);
     temp(num);
    // printf("%d\n");


    return 0;
}
int temp(int x){
    if(x>=10){
        printf("freezing cold\n");
    }
    else if(x<=27){
        printf("too hot!\n");
    }
    
}