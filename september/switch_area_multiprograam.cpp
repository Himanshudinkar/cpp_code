#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any value given below" << "\n";
    cout << "c = circle" << "\n";
    cout << "s = square" << "\n";
    cout << "r = rectangle" << "\n";
    char select;
    cin >> select;

    float area = 0;
    const float pi = 3.14;

    switch (select)
    {
        case 'c':
        {
            // area of circle
            cout << "Enter Radius of Circle" << "\n";
            float radius = 0;
            cin >> radius;

            area = pi *(radius*radius);
            cout << "area of circle is = " << area << "\n";

            break;
        }
        case 's':
        {
            // area of Square
            cout << "Enter side of square" << "\n";
            float side = 0;
            cin >> side;

            area = side * side;
            cout << "Area of suare is = " << area << "\n";

            break;
        }
        case 'r':
        {
            // area of rectangle
            cout << "Enter length of rectangle" << "\n";
            float lenght = 0;
            cin >> lenght; 

            cout << "Enter widht of rectangle" << "\n";
            float width = 0;
            cin >> width;

            area = lenght * width;
            cout << "area of rectange is = " << "\n";

            break;
        }
        default:
        {
            cout << "invalid option" << "\n";
            break;
        }
    }
    return 0;
}