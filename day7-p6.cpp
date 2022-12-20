#include<iostream>
using namespace std;

void compare(string str1,string str2)
{
    if(str1!=str2)
    {
        cout<<str1<<"is not equal to"<<str2<<"\n";
    }
    else{
        cout<<str1<<"is equal to"<<str2<<"\n";
    }

}

int main()
{
    string str1("ADITYA");
    string str2("ADITYA");

    compare(str1,str2);//Call function

    string str3("LUDO");
    string str4("CHESS");

    compare(str3,str4);
    return 0;
}
