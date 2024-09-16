/*
Write a C++ function that determines if a customer is eligible for a discount based on their 
purchase amount. Use the following criteria:

Purchase amount >= $100: 10% discount
Purchase amount >= $50 and < $100: 5% discount
Purchase amount < $50: No discount
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Your Purchase Ammount" << "\n";
    float purchase_ammount = 0;
    cin >> purchase_ammount;

    float discount = 0;

    if (purchase_ammount >= 100)
    {
        cout << "You are eligible for 10% discount" << "\n";
        discount = purchase_ammount / 10;
        cout << "Your Discount is = " << discount << "\n";
        purchase_ammount = purchase_ammount - discount;
        cout << "your final purchase ammount is = " << purchase_ammount << "\n";
    }
    else if (purchase_ammount >= 50 && purchase_ammount < 100)
    {
        cout << "You  are eligible for 5% discount" << "\n";
        discount = purchase_ammount / 5;
        cout << "Your Discount is = " << discount << "\n";
        purchase_ammount = purchase_ammount - discount;
        cout << "your final purchase ammount is = " << purchase_ammount << "\n";
    }
    else if (purchase_ammount < 50)
    {
        cout << "You are not eligible for discount " << "\n";
        cout << "Your Purchase ammount is = " << purchase_ammount << "\n";
    }
    return 0;
}