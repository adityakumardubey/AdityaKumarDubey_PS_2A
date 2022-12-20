#include<iostream>
//The library below must be included for the reverse function to work
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name="Aditya";
    reverse(name.begin(),name.end());
    //Note that it takes the iterators to the start and end of the string as arguments
    cout<<name<<"\n";
}
