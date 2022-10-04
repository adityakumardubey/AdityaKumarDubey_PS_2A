#include<stdio.h>
void main()
{
    int d,m,y,x,r,f;
    float yrl2,yrf2;
    printf("Enter date month and year:");
    scanf("%d %d %d",&d,&m,&y);
    yrl2=y%100;
    yrf2=y/100;
    if(m==1||m==2)
    {
        if(y%100==0)
        {
            y=y-1;
            yrl2=y%100;
            yrf2=y/100;
        }
        else
        {
            yrl2=yrl2-1;
        }
    }
    switch(m)
    {
    case 1:
        m=11;
        break;
    case 2:
        m=12;
        break;
    case 3:
        m=1;
        break;
    case 4:
        m=2;
        break;
    case 5:
        m=3;
        break;
    case 6:
        m=4;
        break;
    case 7:
        m=5;
        break;
    case 8:
        m=6;
        break;
    case 9:
        m=7;
        break;
    case 10:
        m=8;
        break;
    case 11:
        m=9;
        break;
    case 12:
        m=10;
        break;
    }
    f=d+(int)((13*m-1)/5)+yrl2+(int)(yrl2/4)+(int)(yrf2/4)-2*yrf2;
    if(f>=0){
        x=f%-7;
        r=x+7;
    }
    switch(r)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("NA");
    }
    printf("Due to approximation the calculated Weekday may lag or lead by a day");

}
