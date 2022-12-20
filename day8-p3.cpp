#include<iostream>
using namespace std;

int digitSum(int n)
{
    if (n == 0)
   return 0;
   return (n%9 == 0)? 9 :(n%9);

}
int main()
{
    int n=89;
    cout<<digitSum(n);
    return 0;

}
