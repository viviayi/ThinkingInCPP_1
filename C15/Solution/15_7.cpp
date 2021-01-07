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

int main(){
    vector<Rodent*> rv;
    rv.push_back(new Rodent);
    rv.push_back(new Gerbil);
    rv.push_back(new Mouse);
    rv.push_back(new Hamster);
    for(int i = 0; i < rv.size(); i++){
        rv[i]->eat();
    }
    Rodent* temp;

    while ( !rv.empty() ) {
        temp = rv.back();
        rv.pop_back();
        delete temp;
    }

}