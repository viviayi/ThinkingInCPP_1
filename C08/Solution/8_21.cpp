#include <iostream>
using namespace std;

class A
{
private:
    const int i;
    enum{size = 10};
    int il[size];
public:
    A(int ii = 0):i(ii), il({0}){};
    void print(){cout << i << endl;}
};

int main(){
    A a(11);
    a.print();
    A b;
    b.print();
}