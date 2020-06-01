#include <iostream>
using namespace std;

class Hen{
    string h = "It's Hen";
public:
    class Nest
    {
        string n = "It's Nest";
    public:
        void display();
        class Egg{
            string e = "It's Egg";
        public:
            void display();    
        };
    };
    void diplay();
};


void Hen::diplay(){
    cout << h << endl;
}

void Hen::Nest::display(){
    cout << n << endl;
}

void Hen::Nest::Egg::display(){
    cout << e << endl;
}

int main(){
    Hen h;
    Hen::Nest n;
    Hen::Nest::Egg e;
    h.diplay();
    n.display();
    e.display();
}