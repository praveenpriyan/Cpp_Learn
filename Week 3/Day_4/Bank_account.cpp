/*"Design a BankAccount Class:
Implement a class called BankAccount with members to store account number, account holder’s name, and balance.
Include methods to deposit, withdraw, and check the balance."*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
private:
    string Account_number;
    double balance;
    string name;
public:
    BankAccount(string number,string account_holder,double bal=0.0)
        :Account_number(number),balance(bal),name(account_holder){}
    
    void deposit(double);
    void withdrawal(double amount)
    {
        cout<<"*********Calling Withdrawal Section***********"<<endl;
        if(amount>0 && amount<=balance)
        {
            balance -= amount;
            cout<<"Withdraw amount: "<<amount<<", New Balance is: "<<balance<<endl;
        }
        else{
            cout<<"Please Provide a correct Amount to withdraw"<<endl;
        }
    }
    double check_balance();
};

void BankAccount::deposit(double amount)
{
    cout<<"*********Calling Deposit Section***********"<<endl;
    if(amount>0){
        balance += amount;
        cout<<"Deposited Amount is: "<<amount<<", New Balance is: "<<balance<<endl;
    }else{
        cout<<"Please Enter a Valid Amount"<<endl;
    }
}

double BankAccount::check_balance()
{
    cout<<"*********Calling Check Balance Section***********"<<endl;
    cout<<"Account_number: "<<Account_number<<", Balance is: "<<balance<<endl;
    return 0;
}

int main()
{
    BankAccount account("9876543210","Praveen",1000.0);
    account.deposit(500.0);
    account.withdrawal(200.0);
    account.check_balance();
}