/**
Write a class with three overloaded virtual functions. Inherit a
new class from this and override one of the functions. Create an
object of your derived class. Can you call all the base class
functions through the derived-class object? Upcast the address
of the object to the base. Can you call all three functions
through the base? Remove the overridden definition in the derived
class. Now can you call all the base class functions through the
derived-class object?
**/

#include <iostream>
using namespace std;

class Base{
public:
    void func1(){
        cout << "Base func1\n";
    }
    void func2(){
        cout << "Base func2\n";
    }
    void func3(){
        cout << "Base func3\n";
    }
};

class Derived1 : public Base{
public:
    void func1(){
        cout << "Derived1 func1\n";
    }
};

class Derived2 : public Base{};

int main(){
    Derived1 d1;
    d1.func1(); // 调用重载的derived1版本
    d1.func2();
    d1.func3();
    Base *bp = &d1;
    bp->func1();
    bp->func2();
    bp->func3();
    Derived2 d2;
    d2.func1();
    d2.func2();
    d2.func3();
}