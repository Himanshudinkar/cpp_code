/*
Write a program to accept int length and int breadth of rectangle from user. 
Calculate int area and int perimeter of rectangle. Print the area and perimeter on the console.

    Formula to calculate area of square -> length * breadth
    Formula to calculate area of square -> 2 * (length + breadth)
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Length of Rectangle" <<"\n";
    int leangth_of_rectangle = 0;
    cin >> leangth_of_rectangle;

    cout << "Enter Breadth of Rectangle" << "\n";
    int breadth_of_rectangle = 0;
    cin >> breadth_of_rectangle;

    int area_of_rectangle = leangth_of_rectangle * breadth_of_rectangle;
    cout << "Area of rectangle is = " << area_of_rectangle << "\n";

    int perimeter_of_rectangle = 2 * (leangth_of_rectangle + breadth_of_rectangle);
    cout << "Perimeter of Rectangle is = " << perimeter_of_rectangle << "\n";

    return 0;
}