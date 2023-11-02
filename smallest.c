// program to print the smallest number out of given five numbers
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter five numbers:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int smallest = a;
    if(b<smallest)
    {
        smallest = b;
    }
    if(c<smallest)
    {
        smallest = c;
    }
    if(d<smallest)
    {
        smallest = d;
    }
    if(e<smallest)
    {
        smallest = e;
    }
    printf("the smallest number is :%d\n",smallest);
    return 0;
}