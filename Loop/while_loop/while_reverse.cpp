#include <iostream>
using namespace std;
int main() {
    int n, r = 0, s;
    cout << "Enter an integer: ";
    cin >> n;

    while (n > 0) 
    {
        s = n % 10;             
        r = r * 10 + s; 
        n = n / 10;                       
    }
    cout << "Reversed Number: " << r << "\n";

    return 0;
}