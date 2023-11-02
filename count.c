// program to count the numbers between 1 to 100 which are not divisible by 2,3 and 5.
#include <stdio.h>
int main ()
{
    int i,count=0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0 && i%3!=0 && i%5!=0)
        {
            count++;
        }
    }
    printf("count: %d\n",count);
    return 0;
}