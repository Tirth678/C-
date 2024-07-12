// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.
#include<stdio.h>
int main(){
    int bio,math,eng;
    printf("enter marks of biology\n");
    scanf("%d", &bio);
    printf("enter marks of maths\n");
    scanf("%d", &math);
    printf("enter marks of english\n");
    scanf("%d", &eng);
    if((bio+math+eng)/3 >=40 && bio>=33 && math>=33 && eng>=33){
        printf("Passed\n");
    }
    else{
        printf("Failed\n");
    }

    return 0;
}