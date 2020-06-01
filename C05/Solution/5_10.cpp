#include "../Stash.h"
#include <iostream>
using namespace std;

class Hen{
    string h = "It's Hen";
public:
    class Nest
    {
        string n = "It's Nest";
    public:
        friend Hen;
        void display();
        class Egg{
            string e = "It's Egg";
        public:
            friend Nest;
            void display();    
        } e;
    } n;
    void diplay();
};


void Hen::diplay(){
    cout << h << endl;
    n.display();
}

void Hen::Nest::display(){
    cout << n << endl;
    e.display();
}

void Hen::Nest::Egg::display(){
    cout << e << endl;
}

int main(){
    Stash henStash;
    henStash.initialize(sizeof(Hen));
    Hen* hen;
    for(int i = 0; i < 5; i++){
        hen = new Hen;
        henStash.add(hen);
    }
    for(int j = 0; j < henStash.count(); j++){
        hen = (Hen*)henStash.fetch(j);
        cout << j << endl;
        hen->diplay();
        cout << endl;
    }
    henStash.cleanup();
}