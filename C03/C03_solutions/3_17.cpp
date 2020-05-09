#include <iostream>
using namespace std;

union U1{
    char a;
    int i;
    float f;
    double d;
};

int main(){
    U1 u1;
    cout << sizeof(U1) << endl;
    u1.d = 3.14;
    cout << "double u1: " << u1.d << endl
         << "char u1: " << u1.a << endl
         << "int u1: " << u1.i << endl
         << "float u1: " << u1.f << endl;
}