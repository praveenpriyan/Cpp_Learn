#include<iostream>
#include<stdexcept>
#include<limits>
using namespace std;

int main()
{
    try{
        int numerator,denominator;
        cout<<"Enter the numerator: ";
        if(!(cin>>numerator)){
            throw invalid_argument("Invalid input for numerator");
        }
        
        cout<<"Enter the denominator: ";
        if(!(cin>>denominator))
        {
            throw invalid_argument("Invalid input for denominator");
        }

        if(denominator==0)
        {
            throw runtime_error("Divide by zero error");
        }

        double result=static_cast<double>(numerator)/denominator;
        cout<<"Result: "<<result<<endl;
    }
    catch(const invalid_argument& e){
        cerr<<"Invalid Input error: "<<e.what()<<endl;
    }
    catch(const runtime_error& e){
        cerr<<"Runtime error: "<<e.what()<<endl;
    }
    catch(...){
        cerr<<"An unexpected error occured!!!"<<endl;
    }

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}