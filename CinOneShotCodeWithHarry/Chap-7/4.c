// Repeat problem 3 for a general input provided by the user using scanf
#include<stdio.h>
int main(){
    int table[10];
    int i,n;
    printf("enter a value\n");
    scanf("%d", &n);
    for ( i = 1; i <= 10; i++)
    {
        table[i] = n*(i+0);
        printf("%dx%d = %d\n",n,i, table[i]);
    }
    


    return 0;
}