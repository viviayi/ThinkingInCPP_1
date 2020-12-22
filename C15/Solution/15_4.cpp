#include <iostream>
using namespace std;

class A{
    int i;
public:
    A(int ii) : i(ii) {}
    ~A() {}
    void f() const{}
};

class B{
    int i;
public:
    B(int ii) : i(ii) {}
    virtual ~B(){}
    virtual void f() const {
        cout << "B::f()\n" ;
    }
};

class C : public B {
    A a;
public:
    C(int ii) : B(ii), a(ii){}
    ~C() {} // Calls ~A() and ~B()
    void f() const {  // Redefinition
        cout << "C::f()\n" ;
        a.f();
        B::f();  // 显示调用基类版本的f
    }
};

// void foo(B b) {// 不使用引用会被切片
void foo(B& b) {  
    b.f();
}

int main(){
    C c(47);
    foo(c);
} ///:~