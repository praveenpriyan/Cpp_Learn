#include<iostream>

using namespace std;

int main()
{
    //N - Number of Students, B- Boys, G - Girls
    int N=45;
    int B=25;
    int G= N-B;
    cout<<"Total number of Girls: "<<G<<endl;

    int gradeA = static_cast<int>(0.8*N);
    cout<<"Total number of students getting Grade 'A': "<<gradeA<<endl;

    int BoysgradeA=17;
    int GirlsgradeA = gradeA-BoysgradeA;
    cout<<"Total number of girls taken Grade 'A': "<<GirlsgradeA<<endl;

    return 0;
}