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
};

class Gerbil : public Rodent{
public:
    void eat(){
        cout << "Gerbil::eat()\n";
    }
};

class Hamster : public Rodent{
public:
    void eat(){
        cout << "Hamster::eat()\n";
    }
};

int main(){
    Rodent* rp[] = {new Rodent, new Mouse, new Gerbil, new Hamster};
    for(int i = 0; i < sizeof(rp)/sizeof(*rp); i++){
        rp[i]->eat();
        delete rp[i];
    }
}