//: C04: Scoperes.cpp
// Global scope resolution
#include <iostream>
using namespace std;

int a = 10;
void f() { cout << "global f()" << endl;}

struct S
{
    int a;
    void f();
};

void S::f() {
    ::f(); // Would be recursive otherwise
    ::a++; // Select the global a
    cout << "global a: " << ::a << endl;
    a--; // The a at struct scope
    cout << "struct a: " << a << endl;
}

int main(){
    S s;
    s.a = 0;
    f();
    s.f();
} ///:~
