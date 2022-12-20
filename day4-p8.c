#include<stdio.h>
int GCD_Rec(int n1,int n2);
void main()
{
    int n1,n2;
    printf("Enter any two positive numbers\n");
    scanf("%d%d",&n1,&n2);
     // call and print the GCD of two number using GCD_Rec()
     printf("GCD of two numbers %d and %d is %d",n1,n2,GCD_Rec(n1,n2));

}
int GCD_Rec(int n1,int n2)
{
    if(n2!=0)
    {
        return GCD_Rec(n2,n1%n2);
    }
    else
    {
        return n1;
    }
}
