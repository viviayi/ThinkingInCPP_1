/**
Write two classes, each of which has a member function that takes a pointer
to an object of the other class. Create instances of both objects in main( )
and call the aforementioned member function in each class.
**/
#include <iostream>
using namespace std;

class B;

class A{
    string a="It's A";
public:
    void print(B*);
    friend class B;
};

class B{
    string b="It's B";
public:
    friend void A::print(B*);
    void print(A*);
};

void A::print(B* b){
    cout << b->b << endl; 
}

void B::print(A* a){
    cout << a->a << endl;
}

int main(){
    A a;
    B b;
    a.print(&b);
    b.print(&a);
}