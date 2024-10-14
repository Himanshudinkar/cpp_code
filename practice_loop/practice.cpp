#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    int i = 0;

    do
    {
        i = number + i;
        number++;
    } while (number <= 10);
    cout << "sum = " << i;
    return 0;
}