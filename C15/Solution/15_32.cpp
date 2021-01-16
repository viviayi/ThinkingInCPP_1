/**
Determine the sizeof the VPTR for your implementation. Now multiply-inherit
two classes that contain virtual functions. Did you get one VPTR or two in the derived class?
**/
#include <iostream>
using namespace std;

class Test{
    int i;
public:
    void f(){}
};

class A{
    int i;
public:
    virtual void f1(){}
};

class B{
    float f;
public:
    virtual void f2(){}
};

class C : public A, public B{
public:
    virtual void f1(){}
    virtual void f2(){}
};

int main(){
    Test t;
    cout << "sizeof Test: " << sizeof(t) << endl;
    A a;
    cout << "sizeof A: " << sizeof(a) << endl;
    B b;
    cout << "sizeof B: " << sizeof(b) << endl;
    C c;
    cout << "sizeof C: " << sizeof(c) << endl;
    return 0;
}

/*
sizeof Test: 4
sizeof A: 16
sizeof B: 16
sizeof C: 32 // 多个VPTR
*/