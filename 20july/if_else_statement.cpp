#include <iostream>
using namespace std;
int main()
{
    float totle_accont_balance = 0;
    float withdraw_balance = 0;

    cout << "Enter Totle Account Balance\n";
    cin >> totle_accont_balance;

    cout << "Enter Withdraw Balance\n";
    cin >> withdraw_balance;

    if (totle_accont_balance >= withdraw_balance)
    {
        cout << "rupee =" << withdraw_balance << "is succesfully withdrw\n";
        cout << "Thank You";
    }
    else 
    {
        cout << "insufficiat funds";
    }
    return 0;
}