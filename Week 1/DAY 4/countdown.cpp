#include<iostream>
#include<ctime>
#include<Windows.h>

using namespace std;

string getPresentDateTime() {
  time_t tt;
  struct tm *st;

  time(&tt);
  st = localtime(&tt);
  return asctime(st);
}

int main() {
  int seconds;
  cout << "Enter total number seconds for the counter" << endl;
  cin >> seconds;

  do{
    cout << "Counter : " << seconds << " : " + getPresentDateTime() << endl;
    Sleep(1000);
    seconds--;
  }while (seconds >= 1);

}