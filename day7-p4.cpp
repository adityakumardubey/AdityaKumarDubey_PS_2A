/*#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int count = 0, i;
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
}*/

#include<string>
#include<iostream>
using namespace std;
int main()
{   int c=1;
    string str;
   getline(cin,str);

   for(int i=0;i<str.size();i++)
   {
       if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
       {

           c++;

       }

   }
   cout<<c<<endl;
}


