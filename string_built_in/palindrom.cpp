#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char name[20];
    cout << "enter name" << "\n";
    cin >> name;

    char surname;
    surname = strrev(name)

    if (strrev(name) == name)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}