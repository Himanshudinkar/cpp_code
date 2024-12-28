#include <iostream>
using namespace std;

int fact(int a) 
{
    if (a == 0) 
    { 
        return 1;
    }

    return (a*fact(a-1));
}

int main() {
    cout << "Enter a number: ";
    int number;
    cin >> number;

   cout << fact(number);

    return 0;
}

