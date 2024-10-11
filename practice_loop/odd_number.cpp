#include <iostream>
using namespace std;
int main()
{
    int number = 1;

    do
    {
        if (number % 2 != 0)
        {
            cout << "odd number is = " << number << "\n";
        }
        number++;
        
    } while (number <= 10);
    
    return 0;
}