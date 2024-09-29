#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    int totle = 0;

    do
    {
        totle = totle + number;
        number++;

    } while (number <= 10);

    cout << totle;
    return 0;
}
