// Write a program to modify a file containing an integer to double its value.
#include<stdio.h>
int main(){
    FILE *fptr;
    int num;
    fptr = fopen("last.txt", "w");
    printf("enter a value\n");
    scanf("%d", &num);
    fprintf(fptr, "%d", num*num);


    return 0;
}