#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(int xVal, int yVal):x(xVal),y(yVal){}

    void display()
    {
        cout<<"X and Y values are: "<<x<<"\t"<<y;
    }
};

int main()
{
    Point* pobj = new Point(10,20);

    if (!pobj) {
        cerr << "Memory allocation failed for Point object." <<endl;
        return 1;
    }

    pobj->display();

    delete pobj;

    return 0;
}