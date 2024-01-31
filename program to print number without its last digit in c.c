#include<stdio.h>
#include<conio.h>
void main()
{

    int number;
    printf("enter the number : \n");
    scanf("%d",&number);
    printf("the number entered by you is %d",number);
    number=number/10;
    printf("the number without last digit is equal to %d",number);
    getch();
}
