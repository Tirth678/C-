//  Write a program to determine whether a character entered by the user is
// lowercase or not.
#include<stdio.h>
int main(){
    char ch;
    printf("enter any character\n");
    scanf("%c", &ch);
    if(ch>= "A" && ch<= "Z"){
        printf("the character NOT lowercase\n");
    }
    else if (ch>= 'a' && ch<= 'z'){
        printf("the character is lowercase\n");
    }
    else{
        printf("the character is NOT lowercase\n");
    }

    return 0;
}