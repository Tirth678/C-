#include<stdio.h>


int main(void)
{
    int x[3][3], i, j, temp;

    printf("enter the values for the array \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=2; i>=0; i--)
    {
        for(j=2;j>=0;j--)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}
