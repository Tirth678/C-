// Write a function to convert Celsius temperature into Fahrenheit.
#include<stdio.h>
int tempConvo(int x);
int main(){
    int temp;
    printf("enter temprature in celsius\n");
    scanf("%d", &temp);
    printf("temp in fahrenhiet = %d\n", tempConvo(temp));

    return 0;
}
int tempConvo(int x){
    int result;
    result = (x*1.8)+32;
    return result;
}