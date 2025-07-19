#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int i,j;
    int matrix1[5][5], matrix2[5][5], result[5][5] = {0};

    cout<<"Enter Elements for matrix 1:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Element["<<i+1<<"]["<<j+1<<"]:";
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter Elements for matrix 2"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Element["<<i+1<<"]["<<j+1<<"]:";
            cin>>matrix2[i][j];
        }
    }
    cout<<"The Entered Elements in Matrix 1:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Entered Elements in Matrix 2:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    //Multiplication Part
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                result[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    cout<<"After Multiplication:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}