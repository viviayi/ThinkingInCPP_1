#include <iostream>
#include <vector>
using namespace std;

// A macro to define dummy functions:
#define DF(N) void N(){\
    cout << "funciton " #N " called.." << endl; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

class MyClass{
    vector <void(*)()> fp;
public:
    void add(void(*p)()){ fp.push_back(p); }
    void remove(){ fp.pop_back(); }
    void run(){
        for (int i = 0; i < fp.size(); i++)
            fp[i]();
    }
};

int main(){
    MyClass m;
    m.add(a);
    m.add(b);
    m.add(c);
    m.add(d);
    m.remove();
    m.run();
}