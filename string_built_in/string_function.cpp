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

    cout << "\n";

    cout << strlen(name) << "\n"; // length of string
    cout << "\n upeeercase=" << strupr(name) << "\n"; //upercase
    cout << "\n lowercase=" << strlwr(name) << "\n"; //lowercase
    cout << strcat(name,surname); // string concatenation
    cout << "\n";
    cout << "\n name=" <<name << "\n";
    cout << "surname=" <<surname << "\n";
    cout << strcpy(name,surname);//string copy
    cout << "\n name=" <<name << "\n";
    cout << "surname=" <<surname << "\n";

    return 0;
}
