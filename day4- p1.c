#include<stdio.h>
void main()
{
    int a,n,rev=0,m;
    printf("Enter a no.");
    scanf("%d",&n);
    m=n;
    while(n>0)  //for(i=n;i>0;i=i/10)
    {
        a=n%10;       // a=n%10;
        rev=rev*10+a; // rev=rev*10+a;
        n=n/10;
    }
    printf("the reverse of a number is %d\n",rev);
    if(m==rev)
    {
        printf("no. is a palindrome");
    }
    else
    {
        printf("no. is not a palindrome");
    }
}
