/*
Write a program to accept radius of circle from user. And calculate area and perimeter of circle. 
Display the result
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter radius of circle" << "\n";
    float radius = 0;
    cin >> radius;

    float area = 3.14 * radius * radius;
    cout << "area of circle is = " << area << "\n";

    float perimeter = 2 * 3.14 * radius;
    cout << "perimeter of cicle is = " << perimeter << "\n";

    return 0;
}