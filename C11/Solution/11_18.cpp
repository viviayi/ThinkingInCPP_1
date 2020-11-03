#include <iostream>
using namespace std;

class MyClass{
public:
    MyClass(int i){}
    MyClass(const MyClass&, int i = 0){ cout << " Copy constructor" << endl; }
};

void f(MyClass m){}

int main(){
    MyClass m(1);
    f(m);
}