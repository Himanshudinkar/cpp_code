#include <iostream>
using namespace std;
// ye no return with parameter he
//isme parameter pass kiye jate he
//iske andar cin nahi bana sakte he 
//yha main function me w,p variable banaye he unki value copy hoke run function ke parameter me jayegi
int c = 0;

void run(int a,int b){
 c = a+b;
}

void show(){
    cout << "Answer is = " << c;
}

int main(){

    cout << "enter value of a" << "\n";
    int w = 0;
    cin >> w;

    cout << "enter value of b" << "\n";
    int p = 0;
    cin >> p;
    
    run(w,p);
    show();

    return 0;
}