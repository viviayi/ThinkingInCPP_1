#include <iostream>
using namespace std;

class A{
    int ipr = 1;
    char cpr = 'a';
protected:
    double dpt = 0.1;
public:
    float fpb = 3.14;
    void showMap();
};

void A::showMap(){
    cout << "ipr: " << &ipr << "\n"
         << "cpr: " << (void*)&cpr << "\n"
         << "dpt: " << &dpt << "\n"
         << "fpb: " << &fpb << endl;
}

int main(){
    A a;
    a.showMap();
}