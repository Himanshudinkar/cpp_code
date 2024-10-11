#include <iostream>
using namespace std;
int main()
{
    int number = 1;

    for (number; number <= 10; number++)
    {
        cout << "square is " << number << " = " << number * number << "\n";
    }
    return 0;
}