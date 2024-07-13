// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.
#include<stdio.h>
int main(){
    int table[3][10];
    int i;
    for ( i = 1; i <= 10; i++)
    {
        table[0][10] = 2*(i+0);
        printf("%d\t", table[0][10]);
        table[1][10] = 7*(i+0);
        printf("%d\n", table[1][10]);
        table[2][10] = 9*(i+0);
        printf("%d\t\t", table[2][10]);
    }
    


    return 0;
}