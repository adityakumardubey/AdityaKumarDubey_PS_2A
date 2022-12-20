#include<stdio.h>
#include<math.h>
void main(){
    int i,n,x,fact=1,c;
    float sum=0;
    printf("Enter n =");
    scanf("%d",&n);
    printf("Enter x =");
    scanf("%d",&x);
    for(i=0;i<=n-1;i++)
    {
        c=2*i+1;
        fact=fact*c;
        if(i%2!=0)
        {
            sum=sum-pow(x,c)/fact;
        }
        else
            sum=sum+pow(x,c)/fact;
    }
    printf("%f",sum);
}
