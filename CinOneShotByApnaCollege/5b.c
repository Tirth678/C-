#include<stdio.h>
#include<math.h>
int sqroot(int x);
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    printf("square root = %d\n", sqroot(num));

    return 0;
}
int sqroot(int x){
    int result;
    result = pow(x, 0.5);
    return result;
}