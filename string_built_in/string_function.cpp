#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char name[20];
    char surname[20];

    cout << "enter ur name\n";
    cin >> name;

    cout << "enter ur surname\n";
    cin >> surname;

    cout << "length=" << strlen(name) << "\n"; // length of string
    cout << "upercase=" << strupr(name) << "\n"; //upercase
    cout << "lowercase=" << strlwr(name) << "\n"; //lowercase
    cout << strcat(name,surname); // string concatenation
    cout << "\n";
    cout << "name=" <<name << "\n";
    cout << "surname=" <<surname << "\n";
    cout << "copy " <<strcpy(name,surname) << "\n"; //string copy
    cout << "name=" <<name << "\n";
    cout << "surname=" <<surname << "\n";

    return 0;
}
