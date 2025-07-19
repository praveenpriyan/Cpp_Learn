/*C++ program that demonstrates the usage of a weak pointer.*/
#include <iostream>
#include <memory>

using namespace std;

class Node{
public:
    int Value;
    shared_ptr<Node> next;

    Node(int val):Value(val),next(nullptr){
        cout<<"Node Created with Value: "<<Value<<endl;
    }

    ~Node(){
        cout<<"Node Value"<<Value<<" destroyed"<<endl;
    }
};

int main()
{
    shared_ptr<Node> node1=make_shared<Node>(1);

    weak_ptr<Node> weakPtr = node1;
    {
        shared_ptr<Node> node2 = make_shared<Node>(2);
        node1->next = node2;

        node2->next = node1;

        cout<<"node1 use_count: "<<node1.use_count()<<endl;
        cout<<"node2 use_count: "<<node2.use_count()<<endl;
    }
    cout<<"****After node2 goes out of Scope****"<<endl;
    cout<<"node1 use_count: "<<node1.use_count()<<endl;

    if(shared_ptr<Node> sharedPtr = weakPtr.lock())
    {
        cout<<"Weak pointer is still valid, value: "<<sharedPtr->Value<<endl;
    }
    else{
        cout << "Weak pointer is expired" <<endl;
    }
}