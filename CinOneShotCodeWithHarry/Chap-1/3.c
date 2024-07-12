// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit)
#include<stdio.h>
int main(){
    int temp,newtemp;
    printf("enter temprature in ceclsius\n");
    scanf("%d", &temp);
    newtemp = (temp*1.8)+32;
    printf("temprature in fahreheit = %d\n", newtemp);

    return 0;
}