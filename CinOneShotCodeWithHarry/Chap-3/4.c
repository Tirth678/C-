// Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.
#include<stdio.h>
int main(){
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if(year%4 == 0 && year%100 != 0 || year==400){
        printf("year is a leap year\n");
    }
    else{
        printf("year is NOT a leap year\n");
    }

    return 0;
}