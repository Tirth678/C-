#include<stdio.h>
#include<math.h>
int main(){
    int wcf,t,v;
    printf("enter value of temprature\n");
    scanf("%d", &t);
    printf("enter value of velocity of air\n");
    scanf("%d", &v);
    wcf = 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("the wind-chill factor = %d\n", wcf);


    return 0;
}