#include <iostream>
using namespace std;

class run
{
   int a = 5;
   int b = 10;

   public: void show()
   {
    cout << a + b << "\n";
   }

   void showing()
   {
    cout << a * b << "\n";
   }
};

int main()
{
    run t;
    t.show();
    t.showing();

    return 0;
}