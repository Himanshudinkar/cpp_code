/*
Write a program to accept radius of circle from user. 
And calculate area and perimeter of circle. Display the result on console. Hint value of PI = 3.14
*/
#include <iostream> 
using namespace std;
int main()
{
    cout << "Enter Radius of Cicle" << "\n";
    float radius_of_circle = 0;
    cin >> radius_of_circle;

    float area = 3.14 * (radius_of_circle * radius_of_circle);

    float perimeter = 2 * 3.14 * radius_of_circle;

    cout << "area of circle is = " << area << "\n";
    cout << "perimeter of circle is = " << perimeter << "\n";

    return 0;
}