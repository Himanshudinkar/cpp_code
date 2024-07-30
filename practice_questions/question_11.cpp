/*
Write a program to accept the annual income from the user and calculate tax based of the below conditions:

In each case provide standard deduction of 50,000 INR, calculate taxable income by subtracting 50,000 form annual income.
if the taxable income is:
less than equal to 3,00,000 INR tax rate will be 0%.
greater than 3,00,000 INR and less than or equal to 5,00,000 INR tax rate will be 5%.
greater than 5,00,000 INR and less than or equal to 10,00,000 INR tax rate will be 15%.
greater than 10,00,000 INR and less than or equal to 15,00,000 INR tax rate will be 20%.
greater than 15,00,000 INR and less than or equal to 25,00,000 INR tax rate will be 25%.
greater than 25,00,000 INR tax rate will be 30%.
On the basis of the condition calculate tax amount and print.

*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Your Annual Income" << "\n";
    float annual_income = 0;
    cin >> annual_income;

    float standard_deduction = annual_income - 50000;
    float tax_rat;

    if (standard_deduction <= 300000)
    {
        cout << "Annual income is = " << standard_deduction << " INR tax rate will be 0%" << "\n";
    }
    else if (standard_deduction > 300000 && standard_deduction <= 500000)
    {
        tax_rat = standard_deduction / 5;
        cout << "Annual income is = " << tax_rat << " INR tax rate will be 5%" << "\n";
    }
    else if (standard_deduction > 500000 && standard_deduction <= 1000000)
    {
        tax_rat = standard_deduction / 15;
        cout << "Annual income is = " << tax_rat << " INR tax rate will be 15%" << "\n";
    }
    else if (standard_deduction > 1000000 && standard_deduction <= 1500000)
    {
        tax_rat = standard_deduction / 20;
        cout << "Annual income is = " << tax_rat << " INR tax rate will be 20%" << "\n";
    }
    else if (standard_deduction > 1500000 && standard_deduction <= 2500000)
    {
        tax_rat = standard_deduction / 25;
        cout << "Annual income is = " << tax_rat << " INR tax rate will be 25%" << "\n"; 
    }
    else if (standard_deduction > 2500000)
    {
        tax_rat = standard_deduction / 30;
        cout << "Annual income is = " << tax_rat << " INR tax rate will be 30%" << "\n";
    }
    return 0;
}