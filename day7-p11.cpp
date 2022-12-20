#include<iostream>
using namespace std;

char*removeSpaces(char*str)
{
    int i=0,j=0;
    while(str[i])
    {
        if(str[i]!=' ')
            str[j++]=str[i];
        i++;
    }
    str[j]='\0';
    return str;
}

int main()
{
    char str1[] = " shree r a m ";
    cout << removeSpaces(str1) << endl;

    char str2[] = " si ya ra m ";
    cout << removeSpaces(str2);
    return 0;
}
