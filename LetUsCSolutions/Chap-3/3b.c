#include<stdio.h>
int main(){
    int ram,shyam,ajay,max;
    printf("enter age of ram\n");
    scanf("%d", &ram);
    printf("enter age of shyam\n");
    scanf("%d", &shyam);
    printf("enter age of ajay\n");
    scanf("%d", &ajay);
    if(ram>shyam){
        max = ram;
    }
    else if(shyam>ajay){
        max = shyam;
    }
    else if(ajay>shyam){
        max = ajay;
    }
    printf("the oldest = %d\n", max);

    return 0;
}