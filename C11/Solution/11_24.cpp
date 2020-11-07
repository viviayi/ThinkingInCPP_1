#include <iostream>
using namespace std;

class MyClass{
public:
    double d;
    void print() const{
        cout << d << endl;
    }
};

int main(){
    double MyClass::*dp = &MyClass::d;
    void (MyClass::*fp)() const= &MyClass::print;
    MyClass m;
    MyClass* mp = &m;
    m.*dp = 2;
    (m.*fp)();
    mp->*dp = 3;
    (mp->*fp)();
    delete mp;
    mp = 0;
}