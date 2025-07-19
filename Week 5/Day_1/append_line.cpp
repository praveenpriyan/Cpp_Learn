#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string filename = "sample.txt";

    ofstream outfile;
    outfile.open(filename,ios::app);

    if(!outfile)
    {
        cerr<<"---Failed to open file for append"<<endl;
        return 1;
    }

    cout<<"-----Appending occurs 1st time----"<<endl;
    outfile<<"Appending a new line to the file"<<endl;
    outfile.close();

    fstream file;
    file.open(filename,ios::in|ios::out);

    if(!file)
    {
        cerr<<"Failed to open file for reading and Writing..."<<endl;
        return 1;
    }

    string line;
    getline(file,line);

    file.seekg(0,ios::beg);

    cout << "Reading the file from the beginning:" <<endl;

    while(getline(file,line))
    {
        cout<<line<<endl;
    }

    file.clear();
    file.seekp(0,ios::end);

    cout<<"-----Appending occurs 2nd time----"<<endl;
    file<<"Adding another line at end of file...."<<endl;

    file.seekg(0,ios::beg);

    cout<<"Reading the file after appending:"<<endl;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();

    return 0;
}