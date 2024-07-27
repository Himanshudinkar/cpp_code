#include <iostream>
using namespace std;
int main()
{
    // wap to accept marks of 3 subjects and print totle marks

    float hindi_marks =0;
    float english_marks =0;
    float moral_science_marks =0;
    // prompt user

    cout << "Enter Marks of Hindi \n";
    cin >> hindi_marks;
    cout << "Enter Marks of Englis \n";
    cin >> english_marks;
    cout << "Enter Marks of Moral Science \n";
    cin >> moral_science_marks;

    float totle_marks = hindi_marks + english_marks + moral_science_marks;

    cout << "Totle Marks =" << totle_marks;
    return 0;
}