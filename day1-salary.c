#include<stdio.h>
void main()
{
    int ts,bs,hra,da,allow,pf;
    char grade;
    printf("enter the basic salary");
    scanf("%d",&bs);
    printf("enter the grade");
    scanf("%d",&grade);
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    ts=bs+hra+da+allow-pf;
    printf("total salary is %d",&ts);
}
