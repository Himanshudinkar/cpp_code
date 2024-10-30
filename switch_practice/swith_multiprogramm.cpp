#include <iostream>
using namespace std;
int main()
{
    cout << "press 1 for area of circle\n";
    cout << "press 2 for area of square\n";
    cout << "press 3 for area of rectangle\n";
    int area = 0;
    cin >> area;

    const float pi = 3.14;

    switch (area)
    {
    case 1:
    {
        cout << "enter radius of circle\n";
        float radius = 0;
        cin >> radius;

        area = pi * (radius * radius);

        cout << "area of circle is = " << area << "\n";

        break;
    }
    case 2:
    {
        cout << "enter side of square\n";
        float side = 0;
        cin >> side;

        area = side * side;

        cout << "area of square is = " << area << "\n";

        break;
    }
    case 3:
    {
        cout << "enter length of rectangle\n";
        float length = 0;
        cin >> length;

        cout << "enter  width of rectangle\n";
        float width = 0;
        cin >> width;

        area = width * length;

        cout << "area of rectangle is = " << area << "\n";

        break;
    }
    default:
    {
        cout << "invalid option" << "\n";
    }
    return 0;
}