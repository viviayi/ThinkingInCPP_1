/**
Write a small program to show the difference between calling a
virtual function inside a normal member function and calling a
virtual function inside a constructor. The program should prove
that the two calls produce different results.
**/
#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base constructor\n";
        name();
    }
    virtual void name(){
        cout << "Base::name()" << endl;
    }
    void member_fun(){
        cout << "Base::member_fun()\n";
        name();
    }
    virtual ~Base(){}
};

class Child : public Base{
public:
    Child(){
        cout << "Child constructor\n";
        name();
    }
    void name(){
        cout << "Child::name()" << endl;
    }
    void member_fun(){
        cout << "Child::member_fun()\n";
        name();
    }
};

void fun(Base& b){
    b.name();
}

int main(){
    Base* bp = new Child;
    bp->member_fun();
    delete bp;
    return 0;
}

/*
Base constructor
Base::name()              // 构造函数中调用的还是基类的name()
Child constructor
Child::name()
Base::member_fun() 
Child::name()             // 成员函数中调用的是虚函数，Child类的name()
*/