#include <iostream>
using namespace std;
int main()
{
    cout << "choose your startup" << "\n";

    cout << "paneer tadka press 1" << "\n";
    cout << "Daal Makhni prees 2" << "\n";
    cout << "Chiken biryani press 3" << "\n";
    int startup = 0;
    cin >> startup;

    int totel_bil = 0;

    if (startup == 1)
    {
        totel_bil = 100;
        cout << "your biil is = " << totel_bil << "\n";
    }
    else if (startup == 2)
    {
        totel_bil = 150;
        cout << "your bill is = " << totel_bil << "\n";
    }
    else if (startup == 3)
    {
        totel_bil = 200;
        cout << "your bill is = " << totel_bil << "\n";
    }
    else
    {
        cout << "invalid option" << "\n";
    }
    return 0;
    
}