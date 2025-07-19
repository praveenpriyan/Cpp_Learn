/*Create a C++ program that defines a 2D array(3x3 array) of integers and initializes it with some values. 
Then, write functions to perform the following tasks:
 
1)Print the 2D array in a matrix format.
2)Find the sum of all elements in the 2D array.
3)Calculate the average of all elements in the 2D array.
4)Find the largest element in the 2D array.*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int sum =0;
    int average;
    int array[3][3];
    int count = 1;
    int largest_num=0;
    //getting elements
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            array[i][j] = count;
            count++;
        }
    }
    //printing elements
    cout<<"Printing the elements in matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout << endl; 
    }
    //sum of elements
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum +=array[i][j];
        }
    }
    cout<<"Total sum of elements:"<<sum<<endl;
    //average of elements
    average = sum / (3*3);
    cout<<"Average of Elements: "<<average<<endl;
    //find largest_number 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(array[i][j]>largest_num)
            {
                largest_num=array[i][j];
            }
        }
    }
    cout<<"Largest element is: "<<largest_num<<endl;
}