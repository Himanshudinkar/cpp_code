/*
Write a program that print the current balance of the account, ask the user to enter the withdrawal amount.
if withdrawal amount is less than current balance,
deduct the withdrawal amount form the current balance, if current balance after deduction is less than 500 INR, deduct penalty of 50 INR and print current balance and penalty.
otherwise, print the current balance.
If withdrawal amount is greater than current balance, print insufficient funds.
Sample run 1
Current balance = 5000
Enter withdrawal amount - 4600
Current balance = 350
Penalty = 50

Sample run 2
Current balance = 5000
Enter withdrawal amount - 4500
Current balance = 500

Current balance = 5000
Enter withdrawal amount - 5600
insufficient funds
*/

#include <iostream>
using namespace std;
int main()
{
    float current_balance = 5000;
    cout << "current balance is = " << current_balance << "\n";
    
    cout << "Enter Withdraw amount = " << "\n";
    int withdraw_amount = 0;
    cin >> withdraw_amount;

    float current_balance_after_deduction = current_balance - withdraw_amount;
    int penalty = 0;

    if (withdraw_amount < current_balance && withdraw_amount <= 4500)
    {
        cout << "current balance = " << current_balance << "\n";
        cout << "withdraw amount = " << withdraw_amount << "\n";
        cout << "current balance = " << current_balance_after_deduction << "\n";
        
        
    }
    else if (withdraw_amount > 4500 && withdraw_amount < current_balance)
    {
        cout << "current balance = " << current_balance << "\n";
        cout << "withdraw amount = " << withdraw_amount << "\n";
        current_balance = current_balance_after_deduction - 50;
        cout << "current balance = " << current_balance << "\n";
        penalty = current_balance_after_deduction - current_balance;
        cout << "penalty = " << penalty << "\n";
    }
    else
    {
        cout << "insufficeant funds";
    }
     return 0;
}