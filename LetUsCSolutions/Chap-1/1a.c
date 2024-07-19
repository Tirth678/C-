#include<stdio.h>
int main(){
    int num;
    float result;
    printf("enter temprature in fahrenheit\n");
    scanf("%d", &num);
    result = (num-32)*0.55;
    printf("temprature in ceclius = %f\n", result);

    return 0;
}