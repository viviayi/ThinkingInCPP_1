// The protected keyword
#include <fstream>
#include <iostream>
using namespace std;

class Base{
    int i;
protected:
    int read() const { return i; }
    void set(int ii) { i = ii; }
public:
    Base(int ii = 0) : i(ii) {}
    int value(int m) const { return m*i; }
};

class Derived : protected Base{
    int j;
public:
    Derived(int jj = 0) : j(jj) {}
    void change(int x) { set(x); } // 使用了基类的set
    int get() const{
        return read();
    }
};

int main(){
    Derived d;
    d.change(10);
    cout << d.get();

    //error: 'int Base::value(int) const' is inaccessible within this context
    cout << d.value(2); 
} ///:~