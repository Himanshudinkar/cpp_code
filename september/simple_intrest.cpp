//simple interest

#include <iostream>
using namespace std;
int main()
{
    cout << "enter principal" << "\n";
    float principal = 0;
    cin >> principal;

    cout << "enter rate" << "\n";
    float rate = 0;
    cin >> rate;

    cout << "enter time in years" << "\n";
    float time = 0;
    cin  >> time;

    float simple_interest = (principal * rate * time) / 100;

    cout << "simple intrest = " << simple_interest << "\n";

    return 0;
}