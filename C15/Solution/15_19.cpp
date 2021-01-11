#include <iostream>
using namespace std;

class Base{
public:
    virtual void print(){
        cout << "Base\n";
    }
};

class Derived : public Base{
public:
    void print(){
        cout << "Derived\n";
    }
};

void f(Base& b){
    b.print();
}

int main(){
    Derived d;
    f(d);
}