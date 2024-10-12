#include <iostream>
using namespace std;

int main() {
    cout << "enter base" << "\n";
    int b = 0;
    cin >> b;

    cout << "enter path" << "\n";
    int p = 0;
    cin >> p;

    int r = 1;

    for (p; p>0; p--)
    {
        r = r * b;
    }
    cout << "result = " << r;
    return 0;
}