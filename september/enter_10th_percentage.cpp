// wap to chake password and otp using nested if else

#include <iostream>
using namespace std;
int main()
{
    cout << "enter 10th percentage" << "\n";
    float pecentage_10th = 0;
    cin >> pecentage_10th;

    if (pecentage_10th >= 65 && pecentage_10th <= 100)
    {
        cout << "enter 12th percentage" << "\n";
        float percentage_12 = 0;
        cin >> percentage_12;

        if (percentage_12 >= 70 && percentage_12 <= 100)
        {
            cout << "u r eligible for peon exam" << "\n";
        }
        
    }

    else
    {
        cout << "Not eligible" << "\n";
    }

    return 0;
    
}