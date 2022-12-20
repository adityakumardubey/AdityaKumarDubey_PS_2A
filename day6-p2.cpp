#include<bits/stdc++.h>//by using swapping method approach
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of matrix(N*N):"<<"\n";
    cin>>n;
    int arr[n][n];
    cout<<"Enter matrix elements:"<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            // Swapping elements after each iteration in Anticlockwise direction
            int temp=arr[i][j];
            arr[i][j]=arr[j][n-i-1];
            arr[j][n-i-1]=arr[n-i-1][n-j-1];
            arr[n-i-1][n-j-1]=arr[n-j-1][i];
            arr[n-j-1][i]=temp;

        }
    }
    // Printing matrix elements after rotation
    cout<<"Matrix after rotating 90 degree anticlockwise:"<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
