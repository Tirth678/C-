// Write a program to read three integers from a file.
#include<stdio.h>
int main(){
    FILE *fptr; 
    fptr = fopen("sample.txt", "w");
    int num = 123;
    int num2 = 32;
    int num3 = 65;
    fprintf(fptr, "%d\n", num);
    fprintf(fptr, "%d\n", num2);
    fprintf(fptr, "%d\n", num3);
    fclose(fptr);

    return 0;
}