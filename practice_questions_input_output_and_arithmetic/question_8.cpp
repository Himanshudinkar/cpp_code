/*
If you know the balance and the annual percentage interest rate, 
you can compute the interest on the next monthly payment using the following formula:

interest = balance x (annualInterestRate/1200)

Write a program that reads the balance and the annual percentage interest rate and displays the interest 
for the next month.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Balance" << "\n";
    float balance = 0;
    cin >> balance;

    cout << "Enter the Annual Percentage intrest rate" << "\n";
    float annual_percentage_intrest_rate = 0;
    cin >> annual_percentage_intrest_rate;

    float next_month_intrest_rate = balance * (annual_percentage_intrest_rate / 1200);
    cout << "The nest month intrest rate is = " << next_month_intrest_rate << "\n";

    return 0;
}