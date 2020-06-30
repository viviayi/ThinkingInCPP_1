#include <iostream>
using namespace std;

class A{
    const float f1;
    float f2;
public:
    A(float, float);
};

A::A(const float f1, float f2):f1(f1),f2(f2){}

int main(){
    A(1.1, 2.2);
}