#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i='A';i<='D';i++)
    {
        k=i;
        for(j='A';j<=i;j++,k++){
            printf("%c",k);
    }
    printf("\n");
}
}
