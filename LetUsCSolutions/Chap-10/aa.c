// without recursion
#include <stdio.h>
int binary_conversion(int);
int main()
{
    int num, bin;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    bin = binary_conversion(num);
    printf("The binary equivalent of %d is %d\n", num, bin);
    return 0;
}
int binary_conversion(int num)
{
    int binary = 0;
    int base = 1;
    while (num > 0)
    {
        int remainder = num % 2;
        binary += remainder * base;
        num /= 2;
        base *= 10;
    }
    return binary;
}
