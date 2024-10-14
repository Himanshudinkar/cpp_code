#include <iostream>
using namespace std;
int main()
{
    cout << " you want to choose weekday press 1 to 7 " << "\n";
    cout << " 1 for monday" << "\n";
    cout << " 2 for teusday" << "\n";
    cout << " 3 for wednesday" << "\n";
    cout << " 4 for thursday" << "\n";
    cout << " 5 for friday" << "\n";
    cout << " 6 for saturday" << "\n";
    cout << " 7 for sunday" << "\n";
    int week = 0;
    cin >> week;

    switch (week)
    {
    case 1:
    {
        cout << "Monday\n";
        break;
    }
    case 2:
    {
        cout << "Tuesday\n";
        break;
    }
    case 3:
    {
        cout << "Wednesdsay\n";
        break;
    }
    case 4:
    {
        cout << "Thurday\n";
        break;
    }
    case 5:
    {
        cout << "Friday\n";
        break;
    }
    case 6:
    {
        cout << "Saturday\n";
        break;
    }
    case 7:
    {
        cout << "Sunday\n";
        break;
    }
    default:
    {
        cout << "invalid option\n";
        break;
    }
    return 0;
}
}