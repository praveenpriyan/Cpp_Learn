#include<iostream>
using namespace std;

int main()
{
    int array[5]={10,20,30,40,50};
    int *ptr;

    for (int i = 0; i < 5; i++) {
        ptr = &array[i];  // Point to the current element of the array
        printf("Value at arr[%d] = %d, Address = %p\n", i, *ptr, (void *)ptr);
    }
}