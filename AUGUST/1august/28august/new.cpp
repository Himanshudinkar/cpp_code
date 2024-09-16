#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" <<"\n";
    int number = 0;
    cin >> number;

    int new_number = 0;

    new_number = number % 2 == 0 ? 1 : 0;
    cout << new_number;

    return 0;
}