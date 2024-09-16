#include <iostream>
using namespace std;
int main()
{
    float account_balance = 500.60;
    cout << "enter the amount to withdraw\n";

    int withdrawal_amount = 0;
    cin >> withdrawal_amount;

    //conditional statment

    if (withdrawal_amount <= account_balance)
    {
        cout << "Rs." << withdrawal_amount << "is withdrawn  from your account" <<"\n";
    }

    else
    {
        cout << "insuffisient funds";
    }
    return 0;



    

}