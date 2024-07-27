#include <iostream>
using namespace std;
int main()
{     
    
    float biology_marks =0;
    float maths_marks =0;
    float chemistry_marks =0;
    float hindi_marks =0;
    float physics_marks =0;
    float english_marks =0;

    cout << "Enter Biology Marks\n";
    cin >> biology_marks;

    cout << "Enter Maths Marks\n";
    cin >> maths_marks;

    cout << "Enter Chemistry Marks\n";
    cin >> chemistry_marks;

    cout <<"Enter Hindi Marks\n";
    cin >> hindi_marks;

    cout << "Enter Physics Marks\n";
    cin >> physics_marks;

    cout << "Enter English Marks\n";
    cin >> english_marks;

    float totle_marks = biology_marks + maths_marks + chemistry_marks + hindi_marks + physics_marks + english_marks;

    cout <<"The Grand Totle of Marks =" << totle_marks;
    return 0;
}