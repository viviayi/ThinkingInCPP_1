#include <iostream>
using namespace std;

class Fi{
public:
    Fi(){}
};
class Fee{
public:
    Fee(int) { cout << "Constructor" << endl; }
    Fee(const Fi&) { cout << "Copying constructor" << endl; }
};

int main(){
    Fee fee = 1; // Fee(int)
    Fi fi;
    Fee fum = fi; 
    Fee fum2(fi);
} ///:~