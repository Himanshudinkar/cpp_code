#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Month Number\n";
    int month = 0;
    cin >> month;

    switch (month)
    {
    case 1:
    {
        cout << "January = 31 Days\n";
        break;
    }
    case 2:
    {
        cout << "Fabruary = 28/29  Days\n";
        break;
    }
    case 3:
    {
        cout << "March = 31 Days\n";
        break;
    }
    case 4:
    {
        cout << "April = 30 Days\n";
        break;
    }
    case 5:
    {
        cout << "May = 31 Days\n";
        break;
    }
    case 6:
    {
        cout << "June = 30 Days\n";
        break;
    }
    case 7:
    {
        cout << "July = 31 Days\n";
        break;
    }
    case 8:
    {
        cout << "August = 31 Days\n";
        break;
    }
    case 9:
    {
        cout << "September = 30 Days\n";
        break;
    }
    case 10:
    {
        cout << "October = 31 Days\n";
        break;
    }
    case 11:
    {
        cout << "November = 30 Days\n";
        break;
    }
    case 12:
    {
        cout << "December = 31 Days\n";
        break;
    }
    default:
    {
        cout << "Invalid Option\n";
        break;
    }
    }
return 0;
}