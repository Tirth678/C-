// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
#include<stdio.h>
int main(){
    int num=0,i;
    for (size_t i = 0; i <=10; i++)
    {
        printf("%d\n", 8*(i+0));
        num  += 8*(i+0);
        
    }
    printf("total num = %d\n", num);
    

    return 0;
}