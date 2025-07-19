#include <iostream>

using namespace std;

enum CARDS{
    CLUBS=0,
    DIAMONDS=10,
    HEARTS=20,
    SPADES=3
};

string getSuitNameAndValue(CARDS suit){
    switch(suit)
    {
        case CLUBS:
            return "CLUBS: "+ to_string(CLUBS);
        case DIAMONDS:
            return "DIAMONDS: "+ to_string(DIAMONDS);
        case HEARTS:
            return "HEARTS: "+to_string(HEARTS);
        case SPADES:
            return "SPADES: "+to_string(SPADES);
    }
}

int main()
{
    CARDS suit1=CLUBS;
    CARDS suit2=DIAMONDS;
    CARDS suit3=HEARTS;
    CARDS suit4=SPADES;

    cout<<getSuitNameAndValue(suit1)<<endl;
    cout<<getSuitNameAndValue(suit2)<<endl;
    cout<<getSuitNameAndValue(suit3)<<endl;
    cout<<getSuitNameAndValue(suit4)<<endl;
}