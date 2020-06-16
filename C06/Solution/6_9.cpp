#include <iostream>
using namespace std;

class Simple{
public:
    int i;
    Simple();
    Simple(int ii);
    void print();
    ~Simple();
};

Simple::Simple(){
    cout << "Simple construction is called." << endl;
}

Simple::Simple(int ii){
    i = ii;
    cout << i << endl;
}

void Simple::print(){
    cout << "Print function called!" << endl;
}

Simple::~Simple(){
    cout << i << endl;
}

int main(){
    Simple a[] = {Simple(1), Simple(2), Simple(3)};
    for(int i = 0; i < sizeof(a)/sizeof(*a); i ++){
        a[i].print();
    }
}