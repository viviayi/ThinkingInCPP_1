/**
Create a three-level hierarchy of classes with default constructors,
along with destructors, both of which announce themselves to cout.
Verify that for an object of the most derived type, all three
constructors and destructors are automatically called. Explain
the order in which the calls are made.
**/

#include <iostream>
using namespace std;

class A{
public:
	A() { cout<<"A() constructor\n"; }
    ~A() { cout<<"~A() destructor\n"; }
};

class B:public A{
public:
	B() { cout<<"B() constructor\n"; }
    ~B() { cout<<"~B() destructor\n"; }
};

class C:public B{
public:
	C() { cout<<"C() constructor\n"; }
    ~C() { cout<<"~C() destructor\n"; }
};

int main(){
    C c;
}