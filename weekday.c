#include<stdio.h>


    int day,month,year,ndays,leapdays;
     bool leapyear;{
         int main()

        day=28;
        month=2;
        year=2010;
        ndays=day+1;
        leapdays=31;
        leapyear=false;
        if(leapyear%4==0)
        {
            leapyear=true;
        }
        if(leapyear%100==0)
        {
            leapyear=false;
        }
        if(leapyear%400==0)
        {
            leapyear=true;
        }
        if((leapyear)&&(month==12||month==1||month==3||month==5||month==7||month==8||month==10))
        {
            leapdays=31;
        }
        if((leapyear)&&(month==4||month==6||month==9||month==11))
        {
            leapdays=30;
        }
        if((leapyear)&&(month==2))
        {
            leapdays=29;
        }
        else if((leapyear==false)&&(month==2))
        {
            leapdays=28;
        }
        printf("enter a date in the form day month year: %d %d %d",day,month,year);
        printf("the date of the next day is:%d/%d/%d",ndays,month,year);
    }

