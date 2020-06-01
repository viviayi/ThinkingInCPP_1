#include <iostream>
using namespace std;

class A{
    int i;
public:
    friend void set(A*, int);
};

void set(A* a, int x){
    cout << a->i << endl;
    a->i = x;
    cout << a->i << endl;
}

int main(){
    A a;
    set(&a, 5);
}