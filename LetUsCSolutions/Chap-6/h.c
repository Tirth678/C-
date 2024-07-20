#include<stdio.h>
int main(){
    int am,pm,noon,midnight,timing;
    printf("enter timings\n");
    scanf("%d", &timing);
    if(0>=timing || 12<=timing){
        printf("morning\n");
    }
    else if(1>=timing || 4<=timing){
        printf("afternoon\n");
    }

    return 0;
}