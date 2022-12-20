#include<bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    if(b==0)
    return 1;
    else if(b%2==0)//if b is even
        return power(a,b/2)*power(a,b/2);
    else//if b is odd
        return a*power(a,b/2)*power(a,b/2);


}

int main()
{
int a=4,b=3;
cout<<power(a,b);
return 0;
}
