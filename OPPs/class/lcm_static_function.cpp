//Write a C++ program to find LCM of two number using static function in a class.

#include <iostream>
using namespace std;

class Lcm
{
    static int number1;
    static int number2;

    public : static void lcms()

    {
        int lcm = 0;
        for (int i = 1; i <= number1 || i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            lcm = i;
        }       
    }
    lcm = (number1 * number2) / lcm;

    cout << "LCM of " << number1 << " and " << number2 << " = " << lcm << "\n";
    }
};

int Lcm::number1 = 4;
int Lcm::number2 = 8;


int main()
{
    Lcm::lcms();

    return 0;
}