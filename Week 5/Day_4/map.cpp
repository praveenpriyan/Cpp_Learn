#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main()
{
    string input_string="this is a test string with some words this is a test";
    map<string, int> word_frequency;

    istringstream iss(input_string);
    string word;
    while(iss>>word)
    {
        word_frequency[word]++;
    }
    for(const auto&pair:word_frequency)
    {
        cout<<"Word: "<<pair.first<<", Frequency: "<<pair.second<<endl;
    }
    return 0;
}