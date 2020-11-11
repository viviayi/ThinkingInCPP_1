// Type conversion constructor
#include <iostream>
using namespace std;

class One{
public:
    One(){}
};

class Two{
public:
    Two(const One&){ cout << " constructor called. " << endl; }
};

void f(Two){}

int main(){
    One one;
    f(one); // Wants a Two, has a One
} ///:~