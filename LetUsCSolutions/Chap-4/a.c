#include<stdio.h>
int main(){
    int length1,length2,length3;
    printf("enter a length no. 1\n");
    scanf("%d", &length1);
    printf("enter a length no. 2\n");
    scanf("%d", &length2);
    printf("enter a length no. 3\n");
    scanf("%d", &length3);
    if(length1+length2+length3 == 180){
        printf("the traingle is equilateral\n");
    }
    else if(length1 == length2 || length2 == length3 || length1 == length3){
        printf("the triangle is isosceles\n");
    }
    else if(length1 != length2 !=length3){
        printf("the traingle is skeleton\n");
    }



    return 0;
}