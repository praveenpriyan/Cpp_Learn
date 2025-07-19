#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

class BinaryTree{
private:
    Node* root;

    Node* insert(Node* node,int data)
    {
        if(node==nullptr)
        {
            return new Node(data);
        }
        if(data<node->data)
        {
            node->left=insert(node->left,data);
        }else{
            node->right=insert(node->right,data);
        }
        return node;
    }

    void inOrder(Node* node)
    {
        if(node!=nullptr)
        {
            inOrder(node->left);
            cout<<node->data<<" ";
            inOrder(node->right);
        }
    }

    void displayTree(Node* node, int space=0, int height=0)
    {
        if(node==nullptr)
        {
            return;
        }
        space+=height;
        displayTree(node->right, space);

        cout<<endl;
        for(int i=height;i<space;i++)
        {
            cout<<" ";
        }
        cout<<node->data<<"\n";

        displayTree(node->left, space);
    }
public:
    BinaryTree(){
        root=nullptr;
    }
    void insert(int data)
    {
        root=insert(root,data);
    }
    void inOrder()
    {
        inOrder(root);
        cout<<endl;
    }
    void displayTree()
    {
        displayTree(root);
        cout<<endl;
    }
};
int main()
{
    BinaryTree tree;
    tree.insert(10);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout<<"In-Order Traversal: ";
    tree.inOrder();

    cout << "Display tree: \n";
    tree.displayTree();
}