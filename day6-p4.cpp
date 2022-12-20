//by using Brute Force Approach or Naive Approach
#include<bits/stdc++.h>
using namespace std;
#define N 4
// Function in order to Rotate the matrix by 180 degree
void rotate(int matrix[N][N])
{
    //Now print from the last cell to first cell of the matrix
    for(int i=N-1;i>=0;i--)
    {
        for(int j=N-1;j>=0;j--)
        cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }
}
//main function of the program
int main()
{
    int matrix[N][N]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}

    };
    rotate (matrix);
    return 0;

}
