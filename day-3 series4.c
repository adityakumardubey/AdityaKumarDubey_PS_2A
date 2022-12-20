#include<stdio.h>
#include<math.h>
void main()
{
    int i,x,n,fact=1;
    float sum=0;
    printf("enter n");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        if(i%2!=0)
        {
            sum=sum-pow(x,i)/fact;
        }
        else

            sum=sum+pow(x,i)/fact;

    }
    printf("%f",1+sum);

}
