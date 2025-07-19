#include<iostream>
using namespace std;

int printMax(int arr[],int size){
    
    int result={0};
    for(int i=0;i<size;i++){
        if(arr[i]>result){
            result=arr[i];
        }
    }
    return result;
}


int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    int modulos;
    cout<<"Enter a Modulos: ";
    cin>>modulos;

    int arr1[]={2,5,4};
    int arr2[]={3,7,8,9};
    int arr3[]={2,3,5,8,9,10};

    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int size3=sizeof(arr3)/sizeof(arr3[0]);

    int max1=0;
    int max2=0;
    int max3=0;

    max1=printMax(arr1,size1);
    max2=printMax(arr2,size2);
    max3=printMax(arr3,size3);

    cout<<"Maximum of first array: "<<max1<<endl;
    cout<<"Maximum of second array: "<<max2<<endl;
    cout<<"Maximum of third array: "<<max3<<endl;


    int last=(max1*max1)+(max2*max2)+(max3*max3);
    int res=last%modulos;
    cout<<"Last answer: "<<res<<endl;
}