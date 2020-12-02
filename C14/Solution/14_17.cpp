#include <iostream>
using namespace std;

class A{
    int i;
};

class B: private A{};  // 私有继承不允许该类的对象的处理和基类对象一样，

class C : protected A{};

class D : public A{};

void f(A a){
    cout << "f(A)\n";
}

int main(){
    B b;
    // f(b);  // error: 'A' is an inaccessible base of 'B'
    C c;
    // f(c); // error: 'A' is an inaccessible base of 'C'
    D d;
    f(d);
}