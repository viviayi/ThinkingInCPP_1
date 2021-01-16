#include <iostream>
using namespace std;

class A{
public:
    virtual void print() const{
        cout << "A::print\n";
    }
};

class B : public A{
public:
    void print() const{
        cout << "B::print\n";
    }
};

void f(A a){
    B* b = static_cast<B*>(&a);
    b->print();
}

int main(){
    B b;
    f(b);
}

// A::print
// 强行调用还是调用的基类的函数
// 以值传递时，传进去完全变成了一个A类的对象