#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Number" << "\n";
    int number = 0;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Number Is Even" << "\n";
    }
    else{
        cout << "Nnumber is Odd" << "\n";
    }
    return 0;
} 