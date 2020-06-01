#include "../Stack2.h"
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
    Stack henStack;
    henStack.initialize();
    Hen* hen;
    for(int i = 0; i < 5; i++){
        hen = new Hen;
        henStack.push(hen);
    }
    while((hen = (Hen*)henStack.pop()) != 0){
        hen->diplay();
        delete hen;
    }
    henStack.cleanup();
}