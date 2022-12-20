// C++ program to convert whole string to
// uppercase or lowercase using STL.

#include<bits/stdc++.h>
using namespace std;

int main(){
	// s1 is the string which is converted to uppercase
	string s1 = "if you are bad i am your dad";

	// using transform() function and ::toupper in (STL means Standard Template Library that provides a no. of templates,containers,algorithms etc.)
	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);//toupper converts the lowercase letters into upper case letters
	cout<<s1<<endl;

	// s2 is the string which is converted to lowercase
	string s2 = "WXYZ IS A BOY";

	// using transform() function and ::tolower in STL
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);//tolower is vice versa of toupper
cout<<s2<<endl;

	return 0;
}
