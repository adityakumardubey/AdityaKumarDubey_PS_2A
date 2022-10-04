#include<stdio.h>
void main()
{
    int i,j,k=0,rows;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",k+j);
        k++;
        printf("\n");
    }
}
