#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a 3 digit number: ";
    cin >> num;
    int i = num;

    for (i; i > 0; i /= 10) {
        int digit = i % 10;
        sum += digit * digit * digit;
    }


    if (sum == num) {
        cout << num << "Armstrong number.";
    } else {
        cout << num << "not an Armstrong number.";
    }

    return 0;
}