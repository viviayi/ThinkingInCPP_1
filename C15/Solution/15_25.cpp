/**
Create a base class containing a clone( ) function that returns a
pointer to a copy of the current object. Derive two subclasses that
override clone( ) to return copies of their specific types. In main( ),
create and upcast objects of your two derived types, then call clone( )
for each and verify that the cloned copies are the correct subtypes.
Experiment with your clone( ) function so that you return the base
type, then try returning the exact derived type. Can you think of
situations in which the latter approach is necessary?
**/

#include <iostream>
using namespace std;

class Base{
public:
    virtual Base* clone() const{
        cout << "Base::clone\n";
        return new Base(*this);
    }
    virtual ~Base(){}
};

class Derived1 : public Base{
public:
    virtual Derived1* clone() const{
        cout << "Derived1::clone\n";
        return new Derived1(*this);
    }
    virtual ~Derived1(){}
};

class Derived2 : public Base{
public:
    virtual Derived2* clone() const{
        cout << "Derived2::clone\n";
        return new Derived2(*this);
    }
    virtual ~Derived2(){}
};

int main(){
    Base* bp;
    Derived1 d1;
    Derived2 d2;
    bp = &d1;
    Base* bp1 = bp->clone();
    bp = &d2;
    Base* bp2 = bp->clone();
    delete bp1;
    delete bp2;
    return 0;
}