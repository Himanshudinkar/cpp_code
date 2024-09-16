/*
Write a program that converts inches to centimeters. For example, 
if the user enters 16.9 for a length in inches, the output would be 42.926 cm. 
(One inch equals 2.54 centimeters). Select appropriate datatype to hold length in inches 
and result in centimeters. Accept length from user. And display the output as 16.9 inches = 42.926 centimeters

Sample Run:
input
Enter length in inches: 16.9
output
16.9 inches = 42.926 centimeters.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Length in Inches" << "\n";
    float inches = 0;
    cin >> inches;

    float centimeter = inches * 2.54;
    cout << inches << " = " << centimeter << " \n";

    return 0;
}