#include<stdio.h>#include<math.h>
void main()
{
    int i,x,n,fac=1;
    float y,sum=1;
    printf("enter n");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
        y=pow(x,i);
        sum=sum+y/fac;
    }
    printf("%f",sum);
}
