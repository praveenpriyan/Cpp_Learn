#include<iostream>
#include<string>

using namespace std;

int main()
{
    string sentence;
    cout<<"Enter the Sentence: ";
    getline(cin,sentence);
    int wordCount = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (isspace(c)) {
            // If the current character is a space and we are in a word, end the word
            if (inWord) {
                inWord = false;
            }
        } else {
            // If the current character is not a space and we are not in a word, start a new word
            if (!inWord) {
                inWord = true;
                ++wordCount;
            }
        }
    }
    cout << "Number of words in the sentence: " << wordCount <<endl;
} 