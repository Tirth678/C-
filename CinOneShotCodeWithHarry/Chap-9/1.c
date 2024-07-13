// Create a two-dimensional vector using structures in C.
#include<stdio.h>
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


    return 0;
}