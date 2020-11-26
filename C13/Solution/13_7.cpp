#include <iostream>
#include "Stack4.h"
using namespace std;

class Counted{
    int id;
    static int count;
public:
    Counted():id(count++){
        cout << id << " it's being created" << endl;
    }

    void f(){
        cout << id;
    }

    ~Counted(){
        cout << id << " it's being destroyed" << endl;
    }
    friend ostream& operator<<(ostream& out, const Counted& c);
};

int Counted::count = 0;
ostream& operator<<(ostream& out, const Counted& c){
    out << c.id;
    return out;
}

int main(){
    Stack countStack;
    for(int i = 0; i < 10; i++){
        countStack.push(new Counted);
    }
    Counted* temp;
    while ((temp = (Counted*)countStack.pop()) != 0)
    {
        temp->f();
        delete temp;
        temp = 0;
    }
    
    return 0;
}