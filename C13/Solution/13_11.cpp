#include <new>
#include <iostream>
using namespace std;

class MyClass{
    int i;
public:
    MyClass():i(0){}
    void* operator new(size_t){
        cout << "new called" << endl;
        return ::new int;
    }
    void operator delete(void* s){
        cout << "delete called" << endl;
        ::delete (int*)s;
    }
    void* operator new[](size_t sz){
        cout << "new[] called" << endl;
        return ::new int[sz];
    }
    void operator delete[](void* s){
        cout << "delete[] called" << endl;
        ::delete [](int*)s;
    }
};

int main(){
    MyClass* mp = new MyClass;
    delete mp;
    mp = 0;
    mp = new MyClass[10];
    delete []mp;
    mp = 0;
}