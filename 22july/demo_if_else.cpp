/*
Ramesh wants to withdraw money from his account using atm,
suresh is curious, what will happen if ramesh didn't have suffieciant balance.
WAP to demonstrate atm withdrawal process, 
if sufficient funds availavel account, 
print current balance, withdraw succesful and print updated balance.
otherwise print insufficent fund and current balance
*/
#include <iostream>
using namespace std;
int main()
{
    float current_balance = 5000;
    int withdraw_balance = 0;
    cout << "enter the withdraw amount" << "\n";
    cin >> withdraw_balance;

    if (current_balance >= withdraw_balance)
    {
        cout << "current balance =" << current_balance << "\n";
        cout << "withdraw amount " << withdraw_balance << "is succecsful" <<"\n";
        current_balance = current_balance - withdraw_balance;
        cout << "updated balance =" << current_balance <<"\n";
    }
    else
    {
        cout << "insufficient funds" << "\n";
        cout << "current balance =" << current_balance;
    }
    return 0;
}