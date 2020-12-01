/**
Modify Combined.cpp to add another level of inheritance and a new member object.
Add code to show when the constructors and destructors are being called.
**/
#include <iostream>
using namespace std;

class A{
    int i;
public:
    A(int ii) : i(ii) { cout<<"A() constructor\n"; }
    ~A() { cout<<"~A() destructor\n"; }
    void f() const{}
};

class B{
    int i;
public:
    B(int ii) : i(ii) { cout<<"B() constructor\n"; }
    ~B(){ cout<<"~B() destructor\n"; }
    void f() const {}
};

class C : public B {
    A a;
public:
    C(int ii) : B(ii), a(ii){ cout<<"C() constructor\n"; }
    ~C() { cout<<"~C() destructor\n"; } // Calls ~A() and ~B()
    void f() const {  // Redefinition
        a.f();
        B::f();  // 显示调用基类版本的f
    }
};

class D : public C{
    float f;
public:
    D(int ii) : C(ii), f(float(ii)){ cout<<"D() constructor\n"; }
    ~D() { cout<<"~D() destructor\n"; } // Calls ~A() and ~B()   
};

int main(){
    D d(47);
} ///:~

/*
output:
B() constructor
A() constructor  C中定义了A对象，先调用C的父类构造函数，然后调用成员对象A的构造函数
C() constructor
D() constructor
~D() destructor
~C() destructor
~A() destructor
~B() destructor
*/