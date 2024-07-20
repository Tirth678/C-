#include<stdio.h>
#include<math.h>
int main(){
    int result,x;
    for(int i=1;i<=7;i++){
        for(x=1;x<10;x++){
            result = (x-1)/2 + pow(1/2*((x-1)/x),i);
            printf("%d\n", result);
        }


    }


    return 0;
}