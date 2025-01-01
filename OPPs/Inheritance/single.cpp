#include <iostream>
using namespace std;

class RBI
{
    int a = 10;
    int b = 10;
    public:void add()
    {
        cout << "Sum = " << a + b << "\n";
    }
};

class SBI: public RBI
{
    int a = 10;
    int b = 10;
    public:void multi()
    {
        cout << "multiplication = " << a * b << "\n";
    }
};

int main()
{
    SBI s;
    s.add();
    s.multi();

    return 0;
}