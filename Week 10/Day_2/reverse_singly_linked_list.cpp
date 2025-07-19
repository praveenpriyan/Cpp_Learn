#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

struct LinkedList{
    Node* head;
    LinkedList(){head=NULL;}

    void* reverse(){
        Node* current=head;
        Node* prev=NULL;
        Node* next=NULL;
    
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }

    void print(){
        struct Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void push(int data){
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
};

int main(){
    LinkedList l1;
    l1.push(10);
    l1.push(20);
    l1.push(30);
    l1.push(40);

    cout<<"Given Linked List: ";
    l1.print();

    l1.reverse();

    cout<<"Reversed Linked List: ";
    l1.print();
}