#include<stdio.h>
#include<conio.h>
void main()
{

    int num;
    printf("enter the number : \n");
    scanf("%d",&num);
    num=num/10*10;
    printf("the updated number is %d",num);
    getch();
}
