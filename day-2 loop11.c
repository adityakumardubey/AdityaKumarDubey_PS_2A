#include<stdio.h>
void main()
{
    int i,j,k,z=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<=8-i*2;k++)
        {
            printf(" ");
        }
        z=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",z);
            z--;
        }
        printf("\n");
    }
}
