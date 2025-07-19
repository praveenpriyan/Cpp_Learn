#include<iostream>
#define SIZE 5
using namespace std;

class CircularQueue
{
private: 
    int items[SIZE],front,rear;
public:
    CircularQueue(){
        front =-1;
        rear =-1;
    }

    bool isFull()
    {
        if((front==0 && rear==SIZE-1)||(front==rear+1))
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if(front==-1)
        {
            return true;
        }
        return false;
    }

    void enqueue(int element)
    {
        if(isFull())
        {
            cout<<"Queue is Full..."<<endl;
        }else{
            if(front==-1) front=0;
            rear=(rear+1)%SIZE;
            items[rear]=element;
            cout<<"Inserted: "<<element<<endl;
        }
    }

    int dequeue()
    {
        int element;
        if(isEmpty())
        {
            cout<<"Queue is Empty!!!"<<endl;
            return -1;
        }else{
            element=items[front];
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }else{
                front=(front+1)%SIZE;
            }
            return element;
        }
    }

    void display()
    {
        int i;
        if(isEmpty())
        {
            cout<<"Queue is Empty..."<<endl;
        }
        else{
            cout<<"Front-> "<<front<<endl;
            cout<<"Items-> ";
            for(i=front;i!=rear;i=(i+1)%SIZE)
            {
                cout<<items[i]<<" ";
            }
            cout<<items[i]<<endl;
            cout<<"Rear->"<<rear<<endl;
        }
    }
};

int main()
{
    CircularQueue q;

    void display();

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.enqueue(6);//Try to Enqueue when queue is full

    q.display();

    cout<<"Dequeued Element: "<<q.dequeue()<<endl;
    cout<<"Dequeued Element: "<<q.dequeue()<<endl;

    q.display();

    q.enqueue(6);
    q.enqueue(7);

    return 0;
}