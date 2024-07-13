// Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted.
#include<stdio.h>
int main(){
    int i;
    FILE *fptr;
    fptr = fopen("table.txt", "w");
    for ( i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%dx%d = %d\n", 5, i,5*(i+0));
    }
    
    

    return 0;
}