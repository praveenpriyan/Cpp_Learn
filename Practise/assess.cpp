#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num];

    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    int count[num]={0};
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count[i]++;
            }
        }
    }

    // cout << "Duplicate counts for each element:" << endl;
    // for (int i = 0; i < num; i++) {
    //     cout << "Element " << arr[i] << " has " << count[i] << " duplicates." << endl;
    // }

    for(int i=0;i<num;i++)
    {
        arr[i]=num-count[i];
    }

    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
// arr[8]={1,2,5,2,2,4,4}
// arr[8]={7,5,7,5,5,6,6}