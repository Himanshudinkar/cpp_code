/*
Write a program that prompts the user to enter the total_bil_amount. 
If bill amount greater than or equal to 2000, 
calculate and print the final_bill_amount by giving 10 percent discount. 
If bill amount is less than 2000 then print No Discount.
*/
#include<iostream>
using namespace std;
int main()
{
    cout << "Enter totle bill ammount" << "\n";
    float bill_ammount = 0;
    cin >> bill_ammount;

    float final_bill_ammont = 0;

    if (bill_ammount >= 2000)
    {
        final_bill_ammont = bill_ammount / 10;
        cout << "Final Bill Ammount is = " << final_bill_ammont << "\n";
    }
    return 0;
}