// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array.
#include<stdio.h>
int main(){
    int sum[] = {1,2,3,4,5,6};
    int *ptr = &sum;
    printf("%d\n", *(ptr+2));


    return 0;
}