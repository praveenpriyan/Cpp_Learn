#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class PriorityQueue{
private:
    priority_queue<int> pq;

public:
    void insert(int element)
    {
        pq.push(element);
        cout<<"Inserted: "<<element<<endl;
    }
    void remove()
    {
        if(pq.empty())
        {
            cout<<"Priority Queue is Empty...";
        }else{
            cout<<"Removed: "<<pq.top()<<endl;
            pq.pop();
        }
    }

    void display()
    {
        if(pq.empty())
        {
            cout<<"Priority Queue is Empty..."<<endl;
        }
        else{
            priority_queue<int> temp=pq;
            cout<<"Priority Elements: ";
            while(!temp.empty())
            {
                cout<<temp.top()<<" ";
                temp.pop();
            }
            cout<<endl;
        }
    }
};

int main()
{
    PriorityQueue pq;
    
    pq.insert(10);
    pq.insert(20);
    pq.insert(30);

    pq.display();

    pq.remove();

    pq.display();
    
    pq.insert(40);
    pq.insert(50);

    pq.display();
}