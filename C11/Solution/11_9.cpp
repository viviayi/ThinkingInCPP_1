#include <iostream>
using namespace std;

class MyClass{
public:
    void f1(){ cout << "f1" << endl; }
    void f2() const { cout << "f2 const" << endl; }
};

void fun1(MyClass m){
    m.f1();
    m.f2();
}

void fun2(MyClass& m){
    m.f1();
    m.f2();
}

void fun3(const MyClass& m){
    //! m.f1();
    m.f2();
}

int main(){
    MyClass m1;
    fun1(m1);
    fun2(m1);
    const MyClass m2;
    fun3(m2);
}