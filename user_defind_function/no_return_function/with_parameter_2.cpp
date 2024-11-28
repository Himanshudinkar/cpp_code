#include <iostream>
using namespace std;
// ye no return with parameter he
//isme parameter pass kiye jate he
//iske andar cin nahi bana sakte he 
//yha main function me w,p variable banaye he unki value copy hoke run function ke parameter me jayegi

void run(int a,int b){
int c = a+b;
cout << c;
}

int main(){

    int w = 0;
    int p = 0;
    cin >> w;
    cin >> p;
    
    run(w,p);

    return 0;
}