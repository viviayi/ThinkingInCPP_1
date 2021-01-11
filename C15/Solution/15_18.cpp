/**
Create a class that has a data member and a derived class that adds
another data member. Write a non-member function that takes an object
of the base class by value and prints out the size of that object using
sizeof. In main( ) create an object of the derived class, print out its
size, and then call your function. Explain what happens.
**/
#include <iostream>
using namespace std;

class Base{
    int i = 0;
public:
    virtual void print(){
        cout << "i=" << i << endl;
    }
};

class Child : public Base{
    int j = 0;
    int k = 0;
public:
    void print(){
        Base::print();
        cout << "j=" << j << " k=" << k << endl;
    }
};

void f(Base b){
    cout << sizeof(b) << endl;
    b.print();
}

void g(Base* b){
    cout << sizeof(*b) << endl;
    b->print();
}

void h(Base& b){
    cout << sizeof(b) << endl;
    b.print();
}

int main(){
    Base b;
    cout << "sizeof(b)" << sizeof(b) << endl;
    Child c;
    cout << "sizeof(c)" << sizeof(c) << endl;
    f(c);  // 对象切片
    g(&c);
    h(c);
    return 0;
}