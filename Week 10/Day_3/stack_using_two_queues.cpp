#include<iostream>
#include<queue>
using namespace std;

class Stack{
private:
    queue<int> q1,q2;

    void transferQueue(queue<int>& source,queue<int>& destination){
        while(!source.empty()){
            destination.push(source.front());
            source.pop();
        }
    }
public:
    void push(int x){
        q2.push(x);
        transferQueue(q1,q2);
        swap(q1,q2);
    }

    void pop(){
        if(q1.empty()){
            cout<<"Stack is empty!!!"<<endl;
            return;
        }
        q1.pop();
    }
    int top(){
        if(q1.empty()){
            cout<<"Stack is Empty..."<<endl;
            return -1;
        }
        return q1.front();
    }

    bool empty(){
        return q1.empty();
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<"Top Element: "<<s.top()<<endl;
    
    s.pop();
    cout<<"Top element after Pop: "<<s.top()<<endl;
    
    s.pop();
    cout<<"Top element after another pop: "<<s.top()<<endl;
}