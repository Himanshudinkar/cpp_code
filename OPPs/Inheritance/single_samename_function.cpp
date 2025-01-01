#include <iostream>
using namespace std;

class RBI
{
    public:void show()
    {
        cout << "HEllO" << "\n";
    }

};

class SBI : public RBI
{
    public: void show()
    {
        cout << "HII" << "\n";
    }
};

int main()
{
    SBI s;
    s.show();
    s.show();

    return 0;
}