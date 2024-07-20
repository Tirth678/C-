#include<stdio.h>
int summ(int x);
int main(){
    int a;
    // for(int i=0;i<25;i++){
    //     printf("%d\n", summ(i));
    // }
    printf("enter a value\n");
    scanf("%d", &a);
    printf("summation = %d\n", summ(a));


    return 0;
}
int summ(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x+summ(x-1);
    }
}