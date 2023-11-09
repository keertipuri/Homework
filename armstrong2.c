// program to print armstrong numbers in the given range i.e. 1 to 400 forthe following program
#include<stdio.h>
#include<math.h>
int main()
{
    int num, original_num,remainder, result=0;
    printf("armstrong numbers between 1 to 400:\n");
    for(num=1;num<=400;num++)
    {
        original_num = num;
        while(original_num !=0)
        {
            remainder = original_num % 10;
            result += pow(remainder,3);
            original_num /= 10;
        }
        if(result==num)
        {
            printf("%d\n",num);
        }
        result=0;
    }
    return 0;
}
