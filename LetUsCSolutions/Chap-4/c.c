#include<stdio.h>
int main(){
    int steel,hardness,tensilestre;
    float carboncon;
    printf("enter hardness\n");
    scanf("%d", &hardness);
    printf("enter carbon content\n");
    scanf("%f", &carboncon);
    printf("enter tensile strength\n");
    scanf("%d", &tensilestre);
    if(hardness>=50 && carboncon<=0.7 && tensilestre>=5600){
        printf("Grade 10\n");
    }
    else if(hardness>=50 && carboncon<=0.7){
        printf("Grade 9\n");
    }
    else if(carboncon<=0.7 && tensilestre>=5600){
        printf("Grade 8\n");
    }
    else if(hardness>=50 && carboncon>=5600){
        printf("Grade 7\n");
    }
    else if(hardness>50 || carboncon<0.7 || tensilestre>5600){
        printf("Grade 6\n");
    }
    else{
        printf("Grade 5\n");
    }

    return 0;
}