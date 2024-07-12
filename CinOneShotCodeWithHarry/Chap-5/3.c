// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2
#include<stdio.h>
int force(int x);
int main(){
    int mass;
    printf("enter the mass of the body\n");
    scanf("%d", &mass);
    printf("the force on the body = %d\n", force(mass));

    return 0;
}
int force(int x){
    int result;
    result = 9.8*x;
    return result;
}