#include <iostream>
#include <vector>
using namespace std;

// A macro to define dummy functions:
#define DF(N) void N(){\
    cout << "funciton " #N " called.." << endl; }

class FunClass{
public:
    DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);
};


class MyClass{
    vector <void(FunClass::*)()> fp;
public:
    void add(void(FunClass::*p)()){ fp.push_back(p); }
    void remove(){ fp.pop_back(); }
    void run(){
        FunClass f;
        for (int i = 0; i < fp.size(); i++)
            (f.*(fp[i]))();
    }
};

int main(){
    MyClass m;
    m.add(&FunClass::a);
    m.add(&FunClass::b);
    m.add(&FunClass::c);
    m.add(&FunClass::d);
    m.remove();
    m.run();
}