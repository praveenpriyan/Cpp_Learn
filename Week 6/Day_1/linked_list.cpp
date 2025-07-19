#include<iostream>
using namespace std;

struct singlyNode{
    int data;
    singlyNode* next;
};

struct doubleNode{
    int data;
    doubleNode* prev;
    doubleNode* next;
};

void addSingleNodeAtBegin(singlyNode** head, int data){
    singlyNode* newNode = new singlyNode;
    newNode->data=data;
    newNode->next=*head;
    *head=newNode;
}

void addDoubleNodeAtBegin(doubleNode** head, int data)
{
    doubleNode* newNode = new doubleNode;
    newNode->data=data;
    newNode->prev=nullptr;
    newNode->next=*head;
    if(*head != nullptr)
    {
        (*head)->prev=newNode;
    }
    (*head)=newNode;
}

void printSingleLinkedList(singlyNode* head){
    if(head == nullptr)
    {
        cout<<"Singly Linked List: ";
        return;
    }
    singlyNode* current = head;
    while(current != nullptr)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

void printDoubleLinkedList(doubleNode* head){
    doubleNode* current = head;
    while(current != nullptr)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main()
{
    singlyNode* singleHead=nullptr;
    addSingleNodeAtBegin(&singleHead,3);
    addSingleNodeAtBegin(&singleHead,6);
    addSingleNodeAtBegin(&singleHead,12);
    addSingleNodeAtBegin(&singleHead,5);
    addSingleNodeAtBegin(&singleHead,2);
    cout<<"Singly Linked List: ";
    printSingleLinkedList(singleHead);

    doubleNode* doubleHead=nullptr;
    addDoubleNodeAtBegin(&doubleHead,5);
    addDoubleNodeAtBegin(&doubleHead,2);
    addDoubleNodeAtBegin(&doubleHead,7);
    addDoubleNodeAtBegin(&doubleHead,4);
    cout<<"Doubly Linked List: ";
    printDoubleLinkedList(doubleHead);
}