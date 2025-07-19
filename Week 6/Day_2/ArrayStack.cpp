#include<iostream>
using namespace std;

class ArrayStack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    ArrayStack(int size)
    {
        arr = new int[size];
        capacity=size;
        top=-1;
    }

    void push(int x)
    {
        if(top==capacity-1)
        {
            cout<<"Error...Stack Overflow"<<endl;
            return;
        }
        arr[++top]=x;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"Error...Stack Underflow"<<endl;
            return 1;
        }
        return arr[top--];
    }

    int peek()
    {
        if(top== -1)
        {
            cout<<"Error...Stack Underflow"<<endl;
            return 1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void printStack()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty..."<<endl;
            return;
        }
        cout<<"Stack:";
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    ArrayStack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout<<"Top Element: "<<stack.peek()<<endl;

    cout<<"Stack Before pop: ";
    stack.printStack();

    cout<<"Popped Element: "<<stack.pop()<<endl;

    cout<<"Stack After pop: ";
    stack.printStack();

    if(stack.isEmpty())
    {
        cout<<"Stack is Empty..."<<endl;
    }
    else{
        cout<<"Stack is not empty..."<<endl;
    }

    return 0;
}
