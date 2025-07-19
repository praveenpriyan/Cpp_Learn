#include<iostream>
using namespace std;

class BOX{

private:
    static int length;
    static int breadth;
    static int height;

public:
    static int showLength(int length){
        int l=length;
        return l;
    }

    static int showBreadth(int breadth){
        int b=breadth;
        return b;
    }

    static int showHeight(int height){
        int h=height;
        return h;
    }
};

int main()
{
    int length =BOX::showLength(20);
    int breadth = BOX::showBreadth(12);
    int height = BOX::showHeight(10);

    cout<<"The length is: "<<length<<endl;
    cout<<"The breadth is: "<<breadth<<endl;
    cout<<"The height is: "<<height<<endl;
}