#include <iostream>
using namespace std;
int main()
{
    int three_digits_number = 0;
    cout << "enter an integer number\n";
    cin >> three_digits_number;

    if (three_digits_number >= 99  && three_digits_number <= 1000)
    {
        cout << "its three digits number\n";
    }
    else
    {
        cout << "its two digits number\n";
    }
    
  return 0;
}
