#include <iostream>
using namespace std;
int main()
{
    int number = 1;

    do
    {
        if (number % 2 == 1)
        {
            cout << number << "\t";
        }
        number++;
        
    } while (number <= 10);
    return 0;
}