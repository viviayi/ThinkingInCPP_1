/**
In Combined.cpp, create a class D that inherits from B and has a
member object of class C. Add code to show when the constructors
and destructors are being called.
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

class D : public B{
    C c;
public:
    D(int ii) : B(ii), c(ii){ cout<<"D() constructor\n"; }
    ~D() { cout<<"~D() destructor\n"; } // Calls ~A() and ~B()   
};

int main(){
    D d(47);
} ///:~

/*
output:
B() constructor  // 先调用D的父类B的构造函数
B() constructor  // 然后对D的成员对象C，又先调用父类B
A() constructor  // 再调用成员对象A的构造函数
C() constructor  // 返回调用C
D() constructor  // 返回调用D
~D() destructor
~C() destructor
~A() destructor
~B() destructor
~B() destructor
*/