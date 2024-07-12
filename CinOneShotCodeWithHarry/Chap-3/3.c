// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab Tax
// 2.5 – 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
#include<stdio.h>
int main(){
    int num,result;
    printf("enter your income\n");
    scanf("%d", &num);
    result = num*10000;
    if(num>200000 || num<=500000){
        printf("youe tax = %f\n", num*0.5);
    }
    else if(num>500000 || num<=100000){
        printf("your tax = %f\n", num*.20);
    }
    else if(num>100000){
        printf("your tax = %f\n", num*0.30);
    }


    return 0;
}