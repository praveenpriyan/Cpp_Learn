#include<iostream>
using namespace std;

class Queue
{
private:
    int queue[10];
    int front;
    int rear;
    int size;
public:
    Queue(){
        front=-1;
        rear=-1;
        size=10;
    }

    bool isEmpty()
    {
        return rear==-1&&front==-1;
    }

    bool isFull()
    {
        return(rear==size-1);
    }

    void enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Error...Queue is Full!!!"<<endl;
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
        }else{
            rear++;
        }
        queue[rear] = x;
    }

    int dequeue()
    {
        if(isEmpty()){
            cout<<"Queue is Empty!!!"<<endl;
            return -1;
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
            cout<<"Queue is Empty!!!"<<endl;
            return;
        }
        cout<<"Queue:";
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

    cout<<"Displaying Queue before Dequeue: ";
    q.display();

    cout << "Dequeued element: " << q.dequeue() << endl;

    cout<<"Displaying Queue after Dequeue: ";
    q.display();

    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}