#include<stdio.h>
int gcd(int n1,int n2)
{
    if (n1==0)
    {
        return n2;
    }
    return gcd(n2%n1,n1);
}
// lcm_fun () function returns the LCM of two numbers
int lcm_fun(int n1,int n2)
{
     // divide the num1 by gcd() function and then multiply with num
     return(n1/gcd(n1,n2))*n2;
}
void main()
{
    int n1,n2;
    printf("Enter any two positive numbers \n");
    scanf("%d%d",&n1,&n2);
    printf("LCM of two numbers %d and %d is %d",n1,n2,lcm_fun(n1,n2));
}
