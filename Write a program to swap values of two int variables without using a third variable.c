#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b;
    printf("enter the values of a and b : \n");
    scanf("%d%d",&a,&b);
    printf("before swapping %d %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping %d %d",a,b);
    getch();


}
