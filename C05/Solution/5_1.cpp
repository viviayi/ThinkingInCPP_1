#include <iostream>
using namespace std;

class A{
    int i;
    float f;
public:
    double d;
    void initialize(){
        i = 0;
        f = 3.14;
        d = 0.01;
    }
    void printi(){
        cout << i << endl;
    };
protected:
    void printf(){
        cout << f << endl;
    };
};

int main(){
    A a;
    a.initialize();
    a.printi();
    // a.printf(); //error: 'void A::printf()' is protected within this context
    // a.i = 0; // error: 'int A::i' is private within this context
}

