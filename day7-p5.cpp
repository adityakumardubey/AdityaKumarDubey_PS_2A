#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[30];
    int i;
    cout<<"Enter the string"<<"\n";
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
        else
        {
            s[i]=s[i]+32;
        }


    }
    cout<<"The string after converting into lowercase/uppercase letters is:"<<s;
    return 0;


}
