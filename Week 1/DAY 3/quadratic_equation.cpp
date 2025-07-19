/* C++ program to calculate the root of a quadratic equation ax2+bx+c=0 */
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter Coefficient for a: ";
    cin>>a;
    cout<<"Enter Coefficient for b: ";
    cin>>b;
    cout<<"Enter Coefficient for c: ";
    cin>>c;

    if(a==0)
    {
        cout<<"Coefficient of 'a' cannot be Zero for Qudartic Equation";
        return 1;
    }

    int discriminant = b*b-4*a*c;

    if(discriminant>0)
    {
        int root1=(-b + sqrt(discriminant))/(2*a);
        int root2=(-b - sqrt(discriminant))/(2*a);

        cout<<"The equation has two distinct real roots"<<endl;
        cout<<"Root 1: "<<root1<<endl;
        cout<<"Root 2: "<<root2<<endl;
    }else if(discriminant == 0){
        int root = -b/(2*a);
        cout<<"The Equation has one real root: "<<root<<endl;
    }
    else{
        int realPart = -b/(2*a);
        int imaginaryPart = sqrt(-discriminant)/(2*a);

        cout << "The equation has two complex roots: " <<endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" <<endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" <<endl;
    }
    return 0;
}

