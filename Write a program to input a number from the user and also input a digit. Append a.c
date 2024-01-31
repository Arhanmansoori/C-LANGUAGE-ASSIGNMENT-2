#include<stdio.h>
#include<conio.h>
void main()
{
    int number,digit;
    printf("enter the number");
    scanf("%d",&number);
    printf("enter the digit");
    scanf("%d",&digit);
    number=number*10+digit;
    printf("the updated number is equal to %d",number);
    getch();
}
