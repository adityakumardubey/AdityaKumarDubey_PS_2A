//ADITYA KUMAR DUBEY
//2100320130019
#include<stdio.h>
void main()
{
    int a[100],i,max,n;
    printf("Enter total elements:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum number is=%d",max);
}
