/**
Starting with the previous Rodent hierarchy, inherit BlueHamster from
Hamster (yes, there is such a thing; I had one when I was a kid),
override the base-class methods, and show that the code that calls
the base-class methods doesn’t need to change in order to accommodate the new type.
**/
#include <iostream>
#include <vector>
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

class BlueHamster : public Hamster{
    void eat(){
        cout << "BlueHamster::eat()\n";
        Rodent::eat();
    }
    ~BlueHamster(){
        cout << "BlueHamster::~\n";
    }
};

int main(){
    Rodent* r = new BlueHamster;
    r->eat();
    delete r;
}