#include <iostream>
using namespace std;

class MyClass{
    static double d;
    static long l;
public:
    static void print();
};

double MyClass::d = 3.14;
long MyClass::l = 1234;

void MyClass::print(){
    cout << d << endl;
    cout << l << endl;
}

int main(){
    MyClass my;
    my.print();
}