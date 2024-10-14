#include <iostream>
using namespace std;
int main()
{
    cout << "enter fahrenheit" << "\n";
    float f = 0;
    cin >> f;

    float c = (f - 32) * 5.0/9;

    cout << c;
}