#include <iostream>
using namespace std;

int func1(double d){
    cout << "Called function, double number: " << d << endl;
    return (int)d;
}

int main(){
    int (*fp)(double);
    fp = func1;
    fp(2.2);
    // difference?
    fp = &func1;
    (*fp)(3.14);
}