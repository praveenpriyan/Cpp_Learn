#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string filename="sample.txt";
    
    //file open for writing
    ofstream outfile;
    outfile.open(filename);

    if(!outfile)
    {
        cerr<<"Failed to open file for writing!!!"<<endl;
        return 1;
    }

    outfile<<"Hello, World!!!"<<endl;
    outfile<<"This is a sample text file...."<<endl;

    outfile.close();

    //Open file for Reading
    ifstream infile;
    infile.open(filename);

    if(!infile)
    {
        cerr<<"File is not opened for reading***"<<endl;
        return 1;
    }
    string line;

    cout<<"***File Opened and contents are***"<<endl;
    while(getline(infile,line))
    {
        cout<<line<<endl;
    }
    infile.close();
}
