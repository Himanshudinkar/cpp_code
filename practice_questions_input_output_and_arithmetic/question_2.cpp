/*
Write a program to accept int side of a Square from user. Calculate int area and int perimeter of square. 
Print the area and perimeter on the console.

    Formula to calculate area of square -> side * side
    Formula to calculate area of square -> 4 * side
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Side of Square" << "\n";
    int side = 0;
    cin >> side;

    int area_of_square = side * side;
    cout << "Area of Square is = " << area_of_square << " \n";

    int perimeter_of_square = 4 * side;
    cout << "Perimeter of Square is = " << perimeter_of_square << " \n";

    return 0;
}