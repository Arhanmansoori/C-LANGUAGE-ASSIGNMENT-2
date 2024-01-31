#include<stdio.h>
#include<conio.h>
void main()
{

    int a;
    float b;
    char c;
    double d;
    long e;
    printf("enter the int value ");
    scanf("%d",&a);
    printf("enter the float value ");
    scanf("%f",&b);
    printf("enter the character value ");
    scanf("%c",&c);
    printf("enter the double value ");
    scanf("%lf",d);
    printf("enter the long value ");
    scanf("%ld",e);
    printf("size of int is %d",sizeof(a));
    printf("size of float is %d",sizeof(b));
    printf("the size of character is %d",sizeof(c));
    printf("the size of double is %d",sizeof(d));
    printf("the size of long is %d",sizeof(l));
    getch();
}
