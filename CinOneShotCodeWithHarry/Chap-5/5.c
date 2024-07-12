// What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n"
// , a, ++a, a++);
#include<stdio.h>
int main(){
    int a =4;
    printf("%d %d %d\n", a, ++a, a++);

    return 0;
}
// output should be: 4,5,5
// ans is 4,5,5