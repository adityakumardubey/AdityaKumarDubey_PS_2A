#include<stdio.h>
void main()
{
    int i,j,k,a=0,b=0,z,n;
    printf("enter number of terms");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<=2*a-1;k++)
        {
            printf(" ");
        }
        a++;
        for(int l=n-1;l>=1;l--)
        {
            if(b>0)
            {
                continue;
            }
            printf("%d",l);
        }
        if(b>0)
        {
            for(z=i;z>=1;z--)
            {
                printf("%d",z);
            }
        }
        b++;
        printf("\n");
    }
}

