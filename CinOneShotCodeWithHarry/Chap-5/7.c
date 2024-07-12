// Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *
#include<stdio.h>
int main(){
    int i,j,n=7;
    // scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}