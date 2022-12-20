#include<stdio.h>
void main()
{
    char str[50];
    int i,len=0;
    printf("Enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("length of string is %d",len);
}
