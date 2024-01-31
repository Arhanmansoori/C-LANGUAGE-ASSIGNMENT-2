#include<stdio.h>
#include<conio.h>
void main()
{

    int  number,digit,sum=0;
    printf("enter a three digit number ");
    scanf("%d",&number);
    if(number<99 || number>999)
    {

        printf("enter a valid three digit number");

    }
    else
        {
            while(number>0)
            {

                digit=number%10;
                sum+=digit;
                number/=10;

            }

    }
    printf("the sum of digits is equal to %d",sum);
    getch();
}
