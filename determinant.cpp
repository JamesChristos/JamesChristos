#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the element of matrix: ";
    cin>>n;
    float determinant = 0;
    int mat[n][n], i, j;
    cout<<"Enter number of matrix:\n";
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin>>mat[i][j];
    cout<<"\nGiven matrix is:";
    for(i = 0; i < n; i++)
    {
        cout<<"\n";
        for(j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
    }
    for(i = 0; i < n; i++)
    {
        determinant = determinant + (mat[0][i] * (mat[1][(i+1)%n] * mat[2][(i+2)%n] - mat[1][(i+2)%n] * mat[2][(i+1)%n]));
    }
    cout<<"\n\ndeterminant: "<<determinant;
    
}
