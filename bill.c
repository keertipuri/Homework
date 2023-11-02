/*program to calculate energy bill. read starting and ending meter readings the charges are as follows 
no. of units= 200-500,100-200,less than 100,    consumed rate in rupees 3.50,2.50,1.50*/
#include<stdio.h>
int main()
{
    int start,end,rate,unit;
    printf("enter the starting reading :");
    scanf("%d",&start);
    printf("enter the ending reading :");
    scanf("%d",&end);
    unit = end-start;
    if(unit>=200 && unit<=500)
    {
        rate = 3.50*unit;
    }
    else if(unit > 100 && unit < 200)
    {
        rate = 2.50*unit;
    }
    else if(unit < 100 && unit > 0)
    {
        rate = 1.50*unit;
    }
    else
    {
        printf("invalid reading");
    }
    printf("charges = %d",rate);
    return 0;
}
