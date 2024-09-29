#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Physics Marks" << "\n";
    float phy = 0;
    cin >> phy;

    cout << "Enter Chemistry Marks" << "\n";
    float chem = 0;
    cin >> chem;

    cout << "Enter Maths Marks" << "\n";
    float maths = 0;
    cin >> maths;

    int totel = phy + chem + maths;

    float percentage = totel / 3.0;
    

    if (phy >= 35 && chem < 35 && maths < 35) 
    {
        cout << "you are Fail" << "\n";
    }
    
    else if (phy < 35 && chem < 35 && maths >= 35)
    {
        cout << "you are Fail" << "\n";
    }

    else if (phy < 35 && chem >= 35 && maths < 35)
    {
        cout << "you are Fail" << "\n";
    }
    
    

    else if (phy >= 35 && chem >= 35 && maths < 35)
    {
        cout << "u got supply in maths" << "\n";
    }

    else if (phy < 35 && chem >= 35 && maths >= 35)
    {
        cout << "u got supply in maths" << "\n";
    }

    else if (phy >= 35 && chem < 35 && maths >= 35)
    {
        cout << "u got supply in maths" << "\n";
    }
    

    else if (percentage >= 60 && percentage <= 100)
    {
        cout << "First Division your totel marks = " << totel << " your percentage = " << percentage << "\n";
    }

    else if (percentage >= 50 && percentage <= 59)
    {
        cout <<"Second Division your totle marks" << totel << " your percentage = " << percentage << "\n";
    }

    else if (percentage >= 35 && percentage <= 49)
    {
        cout << "Third Divison your totle marks" << totel << " your percentage = " << percentage << "\n";
    }

    else
    {
        cout << "invalid input" << "\n";
    }

    return 0;


}
