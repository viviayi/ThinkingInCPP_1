/**
Create a class with two static member functions. Inherit from this class
and redefine one of the member functions. Show that the other is hidden
in the derived class.
**/

// 关于static
/*
非成员的static函数和变量：
所有未加static修饰的函数和全局变量具有全局可见性，其他的源文件也能够访问。
static修饰函数和变量这一特性可以在不同的文件中定义同名函数和同名变量，
而不必担心命名冲突。

static成员变量：
跟类相关的，跟具体的类的对象无关，为所有实例所共享，
某个类的实例修改了该静态成员变量，其修改值为该类的其它所有实例所见。

static成员函数：
和成员变量一样，跟类相关的，跟具体的类的对象无关，可以通过类名来调用。
static成员函数里面不能访问非静态成员变量，也不能调用非静态成员函数。
*/

#include <iostream>
using namespace std;

class A{
public:
    static void f1() {
        cout << "f1()\n";
    }
    static void f1(int i){
        cout << "f1(int)\n";
    }
    static void f2(){
        cout << "f2()\n";
    }
};

class B : public A{
public:
    static void f1(){
        cout << "f1() of B\n";
    }
};

int main(){
    B b;
    b.f1();
    // b.f1(1); // error: no matching function for call to 'B::f1(int)'
    b.f2();
}