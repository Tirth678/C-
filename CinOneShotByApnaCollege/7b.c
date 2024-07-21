#include<stdio.h>
int main(){
    int numbers[5]={1,2,3,4};
    int max;
    int *nptr = &numbers[5];
    if(numbers[0]>numbers[1]){
        *(nptr+0) = max;
    }
    else if(numbers[1]>numbers[2]){
        *(nptr+1) = max;
    }
    else if(numbers[2]>numbers[3]){
       max = *(nptr+2);
    }
    printf("%d", max);

    return 0;
}