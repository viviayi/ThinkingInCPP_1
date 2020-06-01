#include <iostream>
using namespace std;

class B
{
private:
    int i = 10;
public:
    void print();
};

void B::print()
{
    cout << i << endl;
}

class C
{
private:
    string c = "It's C";
public:
    void print();
};

void C::print()
{
    cout << c << endl;
}

class A{
    int i;
public:
    friend class B;
    friend class C;
    void print(B*, C*);
};

void A::print(B* b, C* c){
    b->print();
    c->print();
}

int main(){
    A a;
    B b;
    C c;
    a.print(&b, &c);
}
