//program to print if a number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int num, originalnum, remainder, result=0, n=0;

    printf("enter any number:");
    scanf("%d",&num);

    originalnum = num;

    while(originalnum != 0)
    {
        originalnum /= 10;
        ++n;
    }
    originalnum = num;

    while (originalnum != 0)
    {
        remainder = originalnum % 10;
        result += pow(remainder,n);
        originalnum /= 10;
    }
    if(result == num){
    printf("%d is an armstrong number.\n",num);
}
else
{
    printf("%d is not an armstrong number.\n",num);
}
return 0;
}