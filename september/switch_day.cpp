// Write a C++ program that takes an integer from 1 to 7 as input and prints 
// the corresponding day of the week. For example, if the user enters 1, it should print Monday,
//  if the user enters 2, it should print Tuesday, and so on.

#include <iostream>
using namespace std;
int main()
{
    cout << " you want to choose weekday press 1 to 7 " << "\n";
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