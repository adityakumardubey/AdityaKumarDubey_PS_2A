#include<stdio.h>
void main()
{
    int x,n,i,fact=1;
    float sum=1;
    printf("enter n");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for(i=2;i<=10;i+=2)
    {
        fact=fact*i;
        if(i%2==0)
            {
                sum=sum+pow(x,i)/fact;
            }
            else
            {
                sum=sum-pow(x,i)/fact;
            }


    }
    printf("%f",1+sum);
}
