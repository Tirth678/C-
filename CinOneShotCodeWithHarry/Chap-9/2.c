// Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// // The vectors must be two–dimensional.
#include<stdio.h>
int sumVector(int v1, int v2);
struct vector
{
    int x_axis;
    int y_axis;
};

int main(){
    struct vector v1,v2;
    v1.x_axis = 43;
    v1.y_axis = 34;
    v2.x_axis = 100;
    v2.y_axis = 0;
    printf("%d\n", v1.x_axis);
    printf("%d\n", v1.y_axis);
    printf("%d\n", v2.x_axis);
    printf("%d\n", v2.y_axis);
    sumVector(v1+v2);
    printf("%d\n");


    return 0;
}
int sumVector(int v1, int v2){
    int result;
    result = v1+v2;
    return result;
    }