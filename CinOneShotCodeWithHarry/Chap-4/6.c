// // Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
// // Write a program to sum first ten natural numbers using while loop
// #include<stdio.h>
// int main(){
//     int i,sum;
//     for (i = 1; i <= 10; i++)
// {
//     sum = sum+i;
//     printf("%d\n", i);
// }
//     printf("sum = %d\n", sum);

//     return 0;
// }



#include<stdio.h>
int main(){
    int i=1,sum;
    do
    {   printf("%d\n", i);
        sum = sum+i;
        i++;
    } while (i<=10);
    
    printf("sum = %d\n", sum);

    return 0;
}
