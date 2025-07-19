#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedListStack
{
private:
    Node* top;

public:
    LinkedListStack(){
        top=nullptr;
    }

    void push(int x)
    {
        Node* newNode=new Node;
        newNode->data=x;
        newNode->next=top;
        top=newNode;
    }

    int pop()
    {
        if(top==nullptr)
        {
            cout<<"Error...Stack Underflow"<<endl;
            return -1;
        }
        int data=top->data;
        Node* temp=top;
        top=top->next;
        delete temp;
        return data;
    }

    int peek()
    {
        if(top==nullptr)
        {
            cout<<"Error...Stack Underflow"<<endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void printStack()
    {
        if(top==nullptr)
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<"Stack: ";
        Node* current=top;
        while(current!=nullptr)
        {
            cout<<current->data<<" ";
            current=current->next;            
        }
        cout<<endl;
    }
};

int main()
{
    LinkedListStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Before pop:" << endl;
    stack.printStack();

    cout << "Popped element: " << stack.pop() << endl;

    cout << "After pop:" << endl;
    stack.printStack();

    if (stack.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}