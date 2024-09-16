#include <iostream>
using namespace std;
int main()
{
    cout << "enter first number" << "\n";
    int first_number = 0;
    cin >> first_number;

    cout << "enter second number" << "\n";
    int second_number = 0;
    cin >> second_number;

    int third_number = 0;
    

    if (first_number == second_number)
    {
        if (first_number % 2 == 0 && second_number % 2 == 0)
        {
             cout << "enter third number" << "\n";
             cin >> third_number;
             if (third_number >= 1)
             {
                cout << "positive" << "\n";
             }
             else if(third_number < 0)
             {
                third_number = third_number * -1;
             }
             
        }   
        
    }
    else
    {
        cout << "calculation is not possible" << "\n"
    }
}
    

