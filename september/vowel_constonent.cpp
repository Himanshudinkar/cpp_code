// Write a C++ program that takes a single character as input from the user and 
// checks whether it is a vowel or a consonant. (Assume the input is a lowercase English alphabet.)

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any charector" << "\n";
    char charector;
    cin >> charector;

    if (charector == 'a' || charector == 'i' || charector == 'o' || charector == 'u' || charector == 'e')
    {
        cout << "This is Vowel = " << charector << "\n";
    }
    else
    {
        cout << "This is Consonant = " << charector << "\n";
    }
    return 0;
    
}