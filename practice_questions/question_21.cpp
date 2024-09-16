//Write a program that reads a Celsius degree in a double value from the console, then converts it to Fahrenheit 
//and displays the result.

//The formula for the conversion is as follows: fahrenheit = (9 / 5) * celsius + 32

//Hint: In C++, 9 / 5 is 1, but 9.0 / 5 is 1.8.

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Celsius degree" << "\n";
    double celsius = 0;
    cin >> celsius;

    double fahrenheit = (9.0/5) * celsius + 32;

    cout << "Fahrenheit is = " << fahrenheit << "\n";

    return 0;
}
