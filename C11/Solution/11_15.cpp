#include <iostream>
using namespace std;

class MyClass1{
    int i = 0;
public:
    MyClass1(){}
    MyClass1(const MyClass1&) {}
};

class MyClass{
public:
    int i = 1;
    MyClass1 a;
    // void f(MyClass m){ cout << m.i << endl; }
};


int main(){
    MyClass m;
    MyClass m2 = m;
}