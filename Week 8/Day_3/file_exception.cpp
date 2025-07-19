#include<iostream>
using namespace std;

int main()
{
    const char* filename="new.txt";
    try{
        FILE* fp;
        fp=fopen(filename,"r");
        if(fp == NULL)
        {
            throw runtime_error("Error: File cannot be opened");
        }
        char buffer[20];
        if(fgets(buffer,sizeof(buffer),fp)!=nullptr)
        {
            cout<<buffer;
        }else{
            throw invalid_argument("Error: cannot read from file");
        }
        fclose(fp);
    }
    catch(const runtime_error& e){
        cerr<<"Runtime Error: "<<e.what()<<endl;
    }
    catch(const invalid_argument& e){
        cerr<<"Invalid argument: "<<e.what()<<endl;
    }
    catch(...){
        cerr<<"An unexpected error occured"<<endl;
    }
    return 0;
}