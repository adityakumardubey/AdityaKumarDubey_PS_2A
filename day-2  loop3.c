#include<stdio.h>
void main()
{
    int i,j;
    for(i='A';i<='C';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}
