/**
Starting with the previous Rodent hierarchy, 
modify Rodent so it is a pure abstract base class.
**/

#include <iostream>
using namespace std;

class Rodent{
public:
    virtual void eat() = 0 ;
    virtual ~Rodent() = 0;
};

Rodent::~Rodent(){
    cout << "Rodent::~\n";
}

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