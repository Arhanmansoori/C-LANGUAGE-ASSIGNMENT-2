#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c;
    printf("enter the value1 and value2: \n");
    scanf("%d%d",&a,&b);
    printf("before swapping %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping %d %d",a,b);
    getch();
}
