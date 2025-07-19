#include<iostream>
#include<deque>

using namespace std;

void DoubleEndedQueue()
{
    deque<int> dq;

    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);

    cout<<"Double Ended Queue(deque): ";
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
}

class InputRestrictedQueue{
private:
    deque<int> dq;
public:
    void pushBack(int x)
    {
        dq.push_back(x);
    }

    int popFront(){
        int front=dq.front();
        dq.pop_front();
        return front;
    }

    bool isEmpty(){
        return dq.empty();
    }
};

void InputRestrictedDequeue()
{
    InputRestrictedQueue irque;
    irque.pushBack(1);
    irque.pushBack(2);
    irque.pushBack(3);

    cout<<"Input Restricted Dequeue: ";
    while(!irque.isEmpty())
    {
        cout<<irque.popFront()<<" ";
    }
    cout<<endl;
}

class OutputRestrictedQueue{
private:
    deque<int> dq;

public:
    void pushFront(int x)
    {
        dq.push_front(x);
    }

    int popBack()
    {
        int back = dq.back();
        dq.pop_back();
        return back;
    }

    bool isEmpty()
    {
        return dq.empty();
    }
};

void OutputRestrictedDequeue()
{
    OutputRestrictedQueue outque;

    outque.pushFront(5);
    outque.pushFront(6);
    outque.pushFront(7);

    cout<<"Output Restricted Deque: ";
    while(!outque.isEmpty())
    {
        cout<<outque.popBack()<<" ";
    }
    cout<<endl;
}

int main()
{
    DoubleEndedQueue();
    InputRestrictedDequeue();
    OutputRestrictedDequeue();
}