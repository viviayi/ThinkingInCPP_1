/**
This exercise creates the design pattern called proxy. Start with a
base class Subject and give it three functions: f( ), g( ), and h( ).
Now inherit a class Proxy and two classes Implementation1 and Implementation2
from Subject. Proxy should contain a pointer to a Subject, and all the member
functions for Proxy should just turn around and make the same calls through
the Subject pointer. The Proxy constructor takes a pointer to a Subject that
is installed in the Proxy (usually by the constructor). In main( ), create
two different Proxy objects that use the two different implementations.
Now modify Proxy so that you can dynamically change implementations.
**/
#include <iostream>
using namespace std;

class Subject{
public:
    void f() { cout <<"Subject::f()\n"; }
    void g() { cout <<"Subject::g()\n"; }
    void h() { cout <<"Subject::h()\n"; }
};

class Proxy : public Subject{
    Subject* sp;
public:
    Proxy(Subject* s) : Subject(), sp(s) {}
    void f() {
        cout <<"Proxy::f()\n";
        sp->f();
    }
    void g() {
        cout <<"Proxy::g()\n";
        sp->g();
    }
    void h() {
        cout <<"Proxy::h()\n";
        sp->h();
    }
    void setSubjectPoint(Subject* s){
        sp = s;
    }
};

class Implementation1 : public Subject{
public:
    void f() { cout <<"Implementation1::f()\n"; }
    void g() { cout <<"Implementation1::g()\n"; }
    void h() { cout <<"Implementation1::h()\n"; }
};

class Implementation2 : public Subject{
public:
    void f() { cout <<"Implementation2::f()\n"; }
    void g() { cout <<"Implementation2::g()\n"; }
    void h() { cout <<"Implementation2::h()\n"; }
};

int main(){
    Implementation1 i1;
    Implementation2 i2;
    Proxy p1(&i1);
    Proxy p2(&i2);
    p1.f();
    p1.g();
    p1.h();
    p2.f();
    p2.g();
    p2.h();

    Proxy p(&i1);
    p.f();
    p.g();
    p.h();
    p.setSubjectPoint(&i2); // 只需要一个Proxy对象即可
    p.f();
    p.g();
    p.h();
}