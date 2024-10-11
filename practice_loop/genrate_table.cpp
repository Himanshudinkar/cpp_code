#include <iostream>
using namespace std;
int main()
{
    cout << "enter number for genrate table" << "\n";
    int number = 0;
    cin >> number;

    int i = 1;
    int s = 0;
    do
    {
        s = number * i;
        cout << s << "\t";
        i++;
    } while (i <= 10);
    return 0;
}