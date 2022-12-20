#include<bits/stdc++.h>
using namespace std;

void balanced_No(string s)
{
    int left_sum=0;
    int right_sum=0;

    for(int i=0;i<s.size()/2;i++){
        left_sum=left_sum+int (s[i]);
        right_sum=right_sum+int(s[s.size()-1-i]);
    }
    if(left_sum==right_sum)
        cout<<"Balanced"<<"\n";
        else
        cout<<"Not Balanced"<<"\n";

}

int main()
{
    string s="1234006";
    balanced_No(s);
    return 0;


}
