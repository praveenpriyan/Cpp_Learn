#include<iostream>
using namespace std;

struct complex_numbers
{
    double real;
    double imag;

    complex_numbers(double r=0.0, double i=0.0):real(r),imag(i){}
};

complex_numbers add(const complex_numbers& c1,const complex_numbers& c2)
{
    return complex_numbers(c1.real+c2.real, c1.imag+c2.imag);
}

complex_numbers subtract(const complex_numbers& c1, const complex_numbers& c2)
{
    return complex_numbers(c1.real-c2.real, c1.imag-c2.imag);
}

complex_numbers multiply(const complex_numbers& c1, const complex_numbers& c2)
{
    return complex_numbers(c1.real*c2.real-c1.imag*c2.imag, c1.real*c2.imag + c1.imag*c2.real);
}

complex_numbers divide(const complex_numbers& c1, const complex_numbers& c2)
{
    double denominator=c2.real*c2.real+c2.imag*c2.imag;
    return complex_numbers((c1.real*c2.real+c1.imag*c2.imag)/denominator,(c1.imag*c2.real - c1.real*c2.imag)/denominator);
}

void printComplex(const complex_numbers& c)
{
    cout<<c.real;
    if(c.imag>=0)
    {
        cout<<" + "<<c.imag<<"i"<<endl;
    }else{
        cout<<" - "<<-c.imag<<"i"<<endl;
    }
}

int main()
{
    complex_numbers c1(2.3,3.7);
    complex_numbers c2(1.7,-3.4);

    complex_numbers result;

    cout<<"Complex Number 1: ";
    printComplex(c1);

    cout<<"Complex Number 2: ";
    printComplex(c2);

    result=add(c1,c2);
    cout<<"Addition of Complex numbers: ";
    printComplex(result);

    result=subtract(c1,c2);
    cout<<"Subtraction of Complex Numbers: ";
    printComplex(result);

    result=multiply(c1,c2);
    cout<<"Multiplication of Complex Numbers: ";
    printComplex(result);

    result=divide(c1,c2);
    cout<<"Division of Complex Numbers: ";
    printComplex(result);

    return 0;
}
