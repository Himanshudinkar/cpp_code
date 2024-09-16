// celsius into fahrenheit

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Celsius degree" << "\n";
    float celsius = 0;
    cin >> celsius;

    float fahrenheit = (9.0/5) * celsius + 32;

    cout << "Fahrenheit is = " << fahrenheit << "\n";

    return 0;
}
