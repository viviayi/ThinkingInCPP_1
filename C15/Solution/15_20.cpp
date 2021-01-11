/**
Write a class with one virtual function and one non-virtual function.
Inherit a new class, make an object of this class, and upcast to a pointer
of the base-class type. Use the clock( ) function found in <ctime>
(you’ll need to look this up in your local C library guide) to measure
the difference between a virtual call and non-virtual call. You’ll need
to make multiple calls to each function inside your timing loop in order
to see the difference.
**/
#include <iostream>
#include <ctime>
using namespace std;

class Base{
public:
    void f(){
        char c[10000];
    }
    virtual void f_v(){
        char c[10000];
    }
};

class Derived : public Base{};

int main(){
    Derived d;
    Base* bp = &d;
    clock_t t0 = clock();
    for(int i = 0; i < 100000000; i++){
        bp->f();
    }
    clock_t t1 = clock();
    cout << "time of non-virtual function: " << (double)(t1 - t0) / CLOCKS_PER_SEC << endl;
    t0 = clock();
    for(int i = 0; i < 100000000; i++){
        bp->f_v();
    }
    t1 = clock();
    cout << "time of non-virtual function: " << (double)(t1 - t0) / CLOCKS_PER_SEC << endl;
}