#include<iostream>
using namespace std;

bool isDiagonalMatrix(int matrix[][10], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j &&matrix[i][j]!=0)
            {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    
    // Read the size of the matrix
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int i,j;

    int matrix[10][10];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin>>matrix[i][j];
        }
    }
    cout<<"The Entered Matrix is"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    // Check if the matrix is a diagonal matrix
    if (isDiagonalMatrix(matrix, n)) {
        cout << "The matrix is a diagonal matrix." << endl;
    } else {
        cout << "The matrix is not a diagonal matrix." << endl;
    }
}