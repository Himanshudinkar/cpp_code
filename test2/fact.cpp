// #include <iostream>
// using namespace std;

// void table(int n, int i = 1) 
// {
//     if (n > 0) 
//     { 
//         return;
//     }
//     i = i *n;
//     cout << i<< "\n";
//     table(n-1, i); 
// }

// int main() {
//     cout << "Enter a number: ";
//     int number;
//     cin >> number;

//     table(number);

//     return 0;
// }

#include <iostream>
using namespace std;

void factorial(int n, int& result) 
{
    if (n <= 1) 
    { 
        result = 1;
        return;
    }
    result *= n;
    factorial(n - 1, result); 
}

int main() {
    cout << "Enter a number: ";
    int number;
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = 1;
        factorial(number, result); 
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}
