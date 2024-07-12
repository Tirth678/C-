// Repeat 8 using while loop.
#include<stdio.h>  
int main()   
{    
 int i=1,fact=1,number;  
 printf("enter a value\n");
scanf("%d", &number);   
 while(i<=number){
    fact = fact*i;
    i = i+1;
 }  
  printf("Factorial of %d is: %d\n",number,fact);    
return 0;  
} 