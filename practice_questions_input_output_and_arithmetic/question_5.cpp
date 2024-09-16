/*
Write a program that reads in the radius and length of a cylinder and computes the area and 
volume using the following formulas:

    area = radius * radius * π
    volume = area * length

    value of π (PI) is  3.14

    Sample Run
    INPUT
    Enter the radius of a cylinder: 5.5
    Enter the length of a cylinder: 12
    
    OUTPUT
    The area is 95.0331
    The volume is 1140.4
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Radius of a Cylinder" << "\n";
    double radius = 0;
    cin >> radius;

    cout << "Enter Length of a Cylinder" << "\n";
    double length = 0;
    cin >> length;

    double area = radius * radius * 3.14;
    cout << "The area is = " << area << "\n";

    double volume = area * length;
    cout << "The volume is = " << volume << "\n";

    return 0;
}