#include<stdio.h>
void main()
{
    int y;
    printf("enter an year");
    scanf("%d",&y);
    y%4==0&&y%100!=0||y%400==0?printf("%d is a leap year",y):printf(" %d is not a leap year",y);
}
