//1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).
#include<stdio.h>
void main()
{
    int i,n;
    int temp1=1,temp2=2,temp3=3;float sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(temp1*temp2*temp3);
        temp1++;
        temp2++;
        temp3++;
    }
    printf("%f",sum);

}
