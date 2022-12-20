#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100]="once upon a time in mumbai dobara";
    char c='o';
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]==c)
        count++;
    }
    cout<<"frequency of alphabet"<<c<<"in the string is "<<count;
    return 0;
}
