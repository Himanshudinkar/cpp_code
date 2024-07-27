#include <iostream>
using namespace std;
int main()
{
    float cureent_balance = 5000.45;
    int withdraw_balance = 0;
    cout << "enter withdrw amount" << "\n";
    cin >> withdraw_balance;
    if (cureent_balance >= withdraw_balance)
    {
        cout << "current balance =" << cureent_balance << "\n";
        cout << "withdraw rs =" << withdraw_balance << "is succesfull" << "\n";
        int update_balance = cureent_balance - withdraw_balance;
        cout << "updtated balance =" << update_balance << "\n";
    }
    else
    {
        cout << "insufficient funds" << "\n";
        cout << "current balance =" << cureent_balance;
    }
    return 0;

}