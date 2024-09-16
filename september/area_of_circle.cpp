// area and circumference of circle

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter radius of circle" << "\n";
    float radius = 0;
    cin >> radius;

    const float pi = 3.14;

    float area = pi * radius * radius;
    cout << "area of circle is = " << area << "\n";

    float circumference = 2 * pi * radius;
    cout << "circumference of cicle is = " << circumference << "\n";

    return 0;
}