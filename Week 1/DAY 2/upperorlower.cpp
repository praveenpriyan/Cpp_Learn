#include <iostream>
#include <string.h>

using namespace std; 

int main(int argc, char* argv[])
{
    if (argc!=3)
    {
        cerr<<"Please give command like this: "<<argv[0]<<" "<<"toUpper|toLower <your_string>"<<endl;
        return 1;
    }

    string input_string = argv[2];
    if(string(argv[1]) == "toUpper")
    {
        for(char& c : input_string)
        {
            c = toupper(c);
        }
        cout<<"Upper Case:"<<input_string<<endl;
    }else if(string(argv[1]) == "toLower"){
        
        for(char& c : input_string)
        {
            c = tolower(c);
        }
        cout<<"Lower Case:"<<input_string<<endl;
    }
    else{
        cerr << "Invalid command: " << argv[1] << endl;
        return 1;
    }
    return 0;
}
