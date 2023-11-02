//program to print the sum of squares of five numbers
#include<stdio.h>
int main()
{
    int num1, num2, num3, num4,num5;
    int sum, sumsquares;
    printf("enter five numbers:");
    scanf("%d %d %d %d %d",&num1, &num2, &num3, &num4, &num5);
    sum = num1+num2+num3+num4+num5;
    sumsquares= (num1*num1+num2*num2+num3*num3+num4*num4+num5*num5);
    printf("sum of numbers:%d\n",sum);
    printf("sum of the squares :%d\n",sumsquares);
    return 0;

}