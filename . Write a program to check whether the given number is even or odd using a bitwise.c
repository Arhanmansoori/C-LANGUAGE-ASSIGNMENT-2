#include<stdio.h>
#include<conio.h>
void main()
{

    int number;
    printf("enter the number for which you want to find whether it is even or odd : \n");
    scanf("%d",&number);
    if(number%2==0)
    {

        printf("the number is even");
    }
    else {
        printf("the number is odd number");
    }
}
