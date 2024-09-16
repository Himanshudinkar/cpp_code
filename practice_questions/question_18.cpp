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

    int dollars_convert = 0;
    int rupees_convert = 0;

if (convert == 0)
{
    cout << "Enter the dollars ammount" << "\n";
    cin >> dollars;
    dollars_convert = dollars * exchange_rate;
    cout << "$"  << dollars <<" is " << dollars_convert << "INR" << "\n";
}
else if (convert == 1)
{
    cout << "Enter the INR ammount" << "\n";
    cin >> rupees;
    rupees_convert = rupees /exchange_rate;
    cout << "INR " << rupees << " is " << rupees_convert << "$" << "\n";
    
}
return 0;

}