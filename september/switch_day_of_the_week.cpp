#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number Between 1 to 7 to select days of the week" << "\n";
    int day;
    cin >> day;

    switch (day)
    {
        case 1:
        {
            cout << "Monday" << "\n";
            break;
        }
        case 2:
        {
            cout << "Tuesday" << "\n";
            break;
        }
        case 3:
        {
            cout << "Wednesday" << "\n";
            break;
        }
        case 4:
        {
            cout << "Thursday" << "\n";
            break;
        }
        case 5:
        {
            cout << "Friday" << "\n";
            break;
        }
        case 6:
        {
            cout << "Saturday" << "\n";
            break;
        }
        case 7:
        {
            cout << "Sunday" << "\n";
            break;
        }
        default:
        {
            cout << "Invalid Option" << "\n";
            break;
        }
    }
    return 0;
}