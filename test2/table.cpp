#include <iostream>
using namespace std;

void table(int n, int i = 1) 
{
    if (i > 10) 
    { 
        return;
    }
    cout << n * i << "\n";
    table(n, i + 1); 
}

int main() {
    cout << "Enter a number: ";
    int number;
    cin >> number;

    table(number);

    return 0;
}
