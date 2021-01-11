/**
Modify VirtualsInDestructors.cpp by inheriting a class from Derived
and overriding f( ) and the destructor. In main( ), create and upcast
an object of your new type, then delete it.
**/
#include <iostream>
using namespace std;

class Base{
public:
    virtual ~Base(){
        cout << "Base1()\n";
        f();
    }
    virtual void f() {
        cout << "Base::f()\n";
    }
};

class Derived : public Base{
public:
    ~Derived() { cout << "~Derived()\n"; }
    void f() { cout << "Derived::f()\n"; }
};

class MyClass : public Derived{
public:
    void f(){ cout << "MyClass::f()\n"; }
    ~MyClass(){ cout << "~MyClass()\n"; }
};

int main(){
    // Derived* dp = new MyClass;
    // delete dp;
    Base* bp = new MyClass;
    delete bp;
} ///:~