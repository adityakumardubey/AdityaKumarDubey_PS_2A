#include<bits/stdc++.h>
using namespace std;

int kthdigit(int a,int b,int k)
{
    int p=pow(a,b);
    int count=0;
    while(p>0 && count<k)
    {
        int rem=p%10;// getting last digit
        count++;//increasing count by 1

        if(count==k)
            return rem;// if current number is required digit
        p=p/10; // remove last digit


    }
    return 0;
}
int main()
{
    int a=5,b=2;
    int k=2;
    cout<<kthdigit(a,b,k);
    return 0;
}
