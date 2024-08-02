/*
Write a program to accept length and breadth of rectangle from user. 
And calculate area and perimeter of rectangle. Display the result on console. formula
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter lenght of rectangele" << "\n";
    float lenght = 0;
    cin >> lenght;

    cout << "Enter breadth of rectangle " << "\n";
    float breadth = 0;
    cin >> breadth;

    float area = lenght * breadth;
    cout << "area of rectangle is = " << area << "\n";

    float perimeter = 2 * (lenght + breadth);
    cout << "perimeter of rectangle is = " << perimeter << "\n";

    return 0;
}