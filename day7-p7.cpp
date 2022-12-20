#include<iostream>
using namespace std;

void mystrcat(char str1[40],char str2[40]);//function prototype
int main()//main function
{
    char str1[40],str2[40];
    int i,len=0;
    cout<<"Enter first string"<<"\n";
    gets(str1);
    cout<<"Enter second string"<<"\n";
    gets(str2);
    mystrcat(str1,str2);
    cout<<"Concatenated string is:"<<str1<<"\n";

    return 0;
}

void mystrcat(char str1[40], char str2[40])
  {  //calculating length of first string
  int i,len=0;
    for(i=0;str1[i]!='\0';i++)
     {
       len++;
      }
      //Concatenating second string to first string
      for(i=0;str2[i]!='\0';i++)
    {
      str1[len+i] = str2[i];
     }
     str1[len+i]='\0';
     }


