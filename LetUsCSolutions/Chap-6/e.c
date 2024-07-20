#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    float c;
    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            c = sqrt(pow(a,2)+pow(b,2));
            c++;
            printf("%f\n", c);
        }
    }

   

    return 0;
}