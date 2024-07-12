// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
// operators in C follow a hierarchy from left to right
// by the order *,/,% is given priority and then +,-
#include"stdio.h"
int main(){
    int x,y,z,k;
    x=2, y=3, z=3, k=1;
    printf("result = %d\n",3*x/y-z+k);
    return 0;
}
// by following the hierarchy the result comes out to be 0