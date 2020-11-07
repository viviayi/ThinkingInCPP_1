#include <iostream>
using namespace std;

class X{
    X(const X& x);
    int i;
public:
    X():i(1){};
    X* clone() const{
        return new X();
    }
    void add(){ 
        i++; 
        cout << i << endl;
    }
};

void f(const X& x){
    X* x1 = x.clone();
    x1->add();
    delete x1;
    x1 = 0;
}

int main(){
    X x;
    f(x);
}