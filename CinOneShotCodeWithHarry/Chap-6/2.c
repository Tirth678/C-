// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?
#include<stdio.h>

void printAddress(int *ptr) {
    printf("Address of 'i' in function: %p\n", ptr);
}

int main() {
    int i = 10;
    printf("Address of 'i' in main: %p\n", &i);
    printAddress(&i);
    return 0;
}

// the values should be different
// but in my machine it is coming same correct me if I am wrong