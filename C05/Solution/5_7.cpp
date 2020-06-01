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
    Hen h;
    // Hen::Nest n;
    // Hen::Nest::Egg e;
    h.diplay();
    // n.display();
    // e.display();
}