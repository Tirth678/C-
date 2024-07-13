// Write a program to read a text file character by character and write its content
// twice in separate file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("character.txt", "w");
    char c = "c";
    fprintf(fptr, "%c", c);

    return 0;
}
// doubt