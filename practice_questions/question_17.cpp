/*
Write a program that prompts the user to enter the exchange rate from currency in U.S. dollars to Indian Rupee. 
Prompt the user to enter 0 to convert from U.S. dollars to Indian Rupee and 1 to convert from Indian Rupee 
and U.S. dollars. Prompt the user to enter the amount in U.S. dollars or Indian Rupee to convert it to 
Indian Rupee or U.S. dollars, respectively. 
Here are the sample runs:
Enter the exchange rate from dollars to Indian Rupee: 83.61
Enter 0 to convert dollars to Indian Rupee and 1 vice versa: 0
Enter the dollar amount: 100
$100 is  8361 INR
Enter the exchange rate from dollars to Indian Rupee: 83.61
Enter 0 to convert dollars to Indian Rupee and 1 vice versa: 1
Enter the INR amount: 1000
1000 INR is 11.96 USD
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the exchange rate frome dollars to indian rupee" <<"\n";
    int exchange_rate = 0;
    cin >> exchange_rate;

    cout << "enter 0 to covert from u.s. dollars to indian rupees" << "\n";
    cout << "enter 1 to convert from india rupee to u.s. dollars" << "\n";
    int convert = 0;
    cin >> convert; 
    
    int rupees = 0;
    int dollars = 0;

    switch (convert)
    {
    case 0:
        cout << "Enter dollars ammount" << "\n";
        cin >> dollars;
        dollars = dollars / exchange_rate;
        cout << "$ = " << dollars << "\n";
        break;
    case 1:
        cout << "Enter INR ammount" << "\n";
        cin >> rupees;
        rupees = rupees * exchange_rate;
        cout << "INR = " << rupees << "\n";
        break;
    }

    return 0;


} 