#include <iostream>
using namespace std;

class RBI
{
    public:RBI() //constructor
    {
        cout << "RBI MEMORY ADD" << "\n";
    }

    void rbibank()
    {
        cout << "RBI MONY" << "\n";
    }

    ~RBI() //distuctor
    {
        cout << "RBI MEMORY RELESED" << "\n";
    }
};

class SBI : public RBI
{
    public:SBI() //constructor
    {
        cout << "SBI MEMORY ADD" << "\n";
    }

    void sbibank()
    {
        cout << "SBI MONY" << "\n";
    }

    ~SBI() //distuctor
    {
        cout << "SBI MEMORY RELESED" << "\n";
    }
};

int main()
{
    SBI s;
    cout << sizeof(s) << "\n";
    s.rbibank();
    s.sbibank();

    return 0;
}