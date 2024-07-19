#include"stdio.h" // this will search in input path and in dict too
int main(){
    int length,breath,area,peri;
    printf("enter length\n");
    scanf("%d", &length);
    printf("enter breath\n");
    scanf("%d", &breath);
    area = length*breath;
    peri = length+breath;
    if(area>peri){
        printf("the area of rectangle is greater than its perimeter\n");
    }
    else{
        printf("the perimeter of rectanlge is greater than its area\n");
    }

    return 0;
}