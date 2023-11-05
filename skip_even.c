// program to print 1to 20 numbers by skipping the even numbers.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}