#include<iostream>
using namespace std;


int dealer(int ltr){
return 90*ltr;
}

int main(){
    int ltr;
    cout<<"enter petrol in litre";
    cin>>ltr;

    cout<<"ammount  "<< dealer(ltr) + (5*ltr);

    return 0;
}