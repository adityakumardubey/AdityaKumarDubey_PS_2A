#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of three sides ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("an equilateral triangle");
    else if(a==b||b==c||c==a)
        printf("an isosceles triangle");
    else
        printf("a scalene triangle");
}
