#include<stdio.h>
#include<math.h>
int main(){
    int L1,L2,G1,G2,result;
    printf("enter value of latitude 1\n");
    scanf("%d", &L1);
    printf("enter value of latitude 2\n");
    scanf("%d", &L2);
    printf("enter value of longitude 1\n");
    scanf("%d", &G1);
    printf("enter value of longitude 2\n");
    scanf("%d", &G2);
    result = 3963*acos(sin(L1)*sin(L2)+cos(G1)*cos(G2)*cos(G2-G1));
    printf("distance between nautical miles = %d\n", result);
    return 0;
}