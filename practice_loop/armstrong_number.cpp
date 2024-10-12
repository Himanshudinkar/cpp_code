#include <iostream>
using namespace std;
int main()
{
    cout << "enter 3 digits number" << "\n";
    int number = 0;
    cin >> number;

    int c = 0;
    int i = 0;
    int orignal_number = number;

    if (number >= 100 && number <= 999)
    {
       do
       {
         c = number % 10;
         i = i + (c*c*c);
         number = number/10;

       } while (number > 0);

       if (i == orignal_number)
       {
         cout << "armstrong number" << i << "\n";
       }

       else
       {
        cout << "not armstorng number " << "\n";
       }
       
       
    }
    else
    {
        cout << "invalid number" << "\n";
    }
    return 0;
}