/**
Starting with the previous Rodent hierarchy, add a non virtual destructor,
create an object of class Hamster using new, upcast the pointer to a Rodent*,
and delete the pointer to show that it doesn’t call all the destructors in the
hierarchy. Change the destructor to be virtual and demonstrate that the
behavior is now correct.
**/
#include <iostream>
using namespace std;

class Rodent{
public:
    virtual void eat(){
        cout << "Rodent::eat()\n"; 
    }
    virtual ~Rodent(){
        cout << "Rodent::~\n";
    }
};

class Mouse : public Rodent{
public:
    void eat(){
        cout << "Mouse::eat()\n";
    }
    ~Mouse(){
        cout << "Mouse::~\n";
    }
};

class Gerbil : public Rodent{
public:
    void eat(){
        cout << "Gerbil::eat()\n";
    }
    ~Gerbil(){
        cout << "Gerbil::~\n";
    }
};

class Hamster : public Rodent{
public:
    void eat(){
        cout << "Hamster::eat()\n";
    }
    ~Hamster(){
        cout << "Hamster::~\n";
    }
};

int main(){
    Rodent* rp = new Hamster;
    rp->eat();
    delete rp;
}