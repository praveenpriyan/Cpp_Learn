#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int a):val(a),next(nullptr){}
};

class Solution{
public:
    Node* mergeTwoLists(Node* l1, Node* l2){
        Node dummy(0);
        Node* tail=&dummy;

        while(l1!=nullptr&&l2!=nullptr){
            if(l1->val < l2->val){
                tail->next=l1;
                l1=l1->next;
            }else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }

        if(l1!=nullptr){
            tail->next=l1;
        }else{
            tail->next=l2;
        }

        return dummy.next;
    }
};

void printList(Node* node){
    while(node!=nullptr){
        cout<<node->val<<" ";
        node=node->next;
    }
    cout<<endl;
}


int main(){
    Node* n1=new Node(1);
    n1->next=new Node(3);
    n1->next->next=new Node(5);

    Node* n2=new Node(2);
    n2->next=new Node(4);
    n2->next->next=new Node(6);

    Solution sol;
    Node* mergedNode=sol.mergeTwoLists(n1,n2);

    printList(mergedNode);

    while(mergedNode!=nullptr){
        Node* temp=mergedNode;
        mergedNode=mergedNode->next;
        delete temp;
    }
    return 0;
}