#include <iostream>
using namespace std;

class MyClass{
    int* ip;
    int i;
public:
    MyClass(int ii = 0):i(ii){
        ip = &i;
    }
    MyClass(const MyClass& m) : i(m.i){
        ip = new int(*m.ip);
    }
    void print(){
        cout << ip << endl;
    }
    MyClass& operator=(const MyClass& cm){
        if(&cm != this)
        {
            cout << "operator= called" << endl;
            i = cm.i;
            ip = new int(*cm.ip);
        }
        return *this;
    }
    ~MyClass(){
        delete ip;
    }
};

int main(){
    MyClass m1(1);
    MyClass m2 = m1;
    // m2 = m1;
    cout << "m1: ";
    m1.print();
    cout << "m2: ";
    m2.print();
}