#include <iostream>
using namespace std;
int main()
{
    //accepting month from user and displying no of days
    cout << "Select Month" << "\n";
    cout << "press 1 for january" << "\n";
    cout << "press 2 for fabuary" << "\n";
    cout << "press 3 for march" << "\n";
    cout << "press 4 for april" << "\n";
    cout << "press 5 for may" << "\n";
    cout << "press 6 for june" << "\n";
    cout << "press 7 for july" << "\n";
    cout << "press 8 for august" << "\n";
    cout << "press 9 for september" << "\n";
    cout << "press 10 for october" << "\n";
    cout << "press 11 for november" << "\n";
    cout << "press 12 for december" << "\n";
    cout << "press 0 for exit" << "\n";
    int month = 0;
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "31 days" << "\n";
        break;
    case 2:
        cout << "28 and 29 days" << "\n";
        break;
    case 3:
        cout << "31 days" << "\n";
        break;
    case 4:
        cout << "30 days" << "\n";
        break;
    case 5:
        cout << "31 days" << "\n";
        break;
    case 6:
        cout << "30 days" << "\n";
        break;
    case 7:
        cout << "31 days" << "\n";
        break;
    case 8:
        cout << "31 days" << "\n";
        break;
    case 9:
        cout << "31 days" << "\n";
        break;
    case 10:
        cout << "31 days" << "\n";
        break;
    case 11:
        cout << "30 days" << "\n";
        break;
    case 12:
        cout << "31 days" << "\n";
        break;
    case 0:
        cout << "Exiting...." <<"\n";
        break;
    default:
        cout << "invalid" << "\n";
        break;
    }
    cout << "Thank You" << "\n";
    return 0;
    
}