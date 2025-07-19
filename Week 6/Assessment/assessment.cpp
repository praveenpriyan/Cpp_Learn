#include<iostream>
using namespace std;

class Queue{
private:
    int queue[10];
    int front;
    int rear;
    int size;
public:
    Queue(){
        rear=-1;
        front=-1;
        size=10;
    }

    bool isFull()
    {
        return (rear==size-1);
    }

    bool isEmpty()
    {
        return (rear==-1&&front==-1);
    }

    void enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Queue is Full!!!";
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
        }else{
            rear++;
        }
        queue[rear]=x;
    }

    int dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!!!";
        }
        int x=queue[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else{
            front++;
        }
        return x;
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!!!!";
        }
        cout<<"Queue: ";
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"before pop displaying Queue: "<<endl;
    q.display();

    cout<<"Dequeued Element: "<<q.dequeue()<<endl;

    cout<<"After pop displaying Queue: "<<endl;
    q.display();

    return 0;
}