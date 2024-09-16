// fahrenheit into celcius

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter fahrenheit" << "\n";
    float fahrenheit = 0;
    cin >> fahrenheit;

    float celsius = (fahrenheit - 32) * 5/9;

    cout << "celsius is = " << celsius << "\n";

    return 0;
}
