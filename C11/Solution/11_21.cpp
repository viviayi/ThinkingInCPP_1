#include <iostream>
using namespace std;

class MyClass{
    int i;
    MyClass(const MyClass&);
};

void f(MyClass m){
    cout << "f called" << endl;
}

int main(){
    MyClass m;
    f(m); // error: 'MyClass::MyClass(const MyClass&)' is private within this context
}