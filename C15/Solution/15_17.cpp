/**
Take Exercise 16 and add calls to f( ) in each destructor. 
Explain what happens.
*/

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
    ~Derived() { cout << "~Derived()\n"; f(); }
    void f() { cout << "Derived::f()\n"; }
};

class MyClass : public Derived{
public:
    void f(){ cout << "MyClass::f()\n"; }
    ~MyClass(){ cout << "~MyClass()\n"; f(); }
};

int main(){
    // Derived* dp = new MyClass;
    // delete dp;
    Base* bp = new MyClass;
    delete bp;
} ///:~

/*
~MyClass()
MyClass::f()          // 正常调用MyClass类的虚构函数和虚函数f()
~Derived()
Derived::f()
Base1()
Base::f()
*/