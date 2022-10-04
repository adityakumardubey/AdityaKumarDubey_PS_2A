// ADITYA KUMAR DUBEY
//2100320130019
#include<stdio.h>
void main()
{
    int a[100],n,i,m=0,avg;
    printf("Enter no. of students:");
    scanf("%d",&n);
    printf("Enter marks:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        m=m+a[i];
    }
    avg=m/n;
    printf("average marks=%d",avg);
}
