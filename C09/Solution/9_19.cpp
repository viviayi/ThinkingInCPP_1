/*
Modify the FIELD( ) macro so that it automatically generates access functions
for each field (the data should still be private, however). Create a class
whose members are composed of calls to the FIELD( ) macro.
Write a main( ) to test the class.
*/

#include <iostream>
using namespace std;

#define FIELD(a) char* a##_string; int a##_size; public: char* a##_getStr(){ return a##_string; } ; int a##_getInt(){ return a##_size; } // 需要设置一个public

class MyClass{
    FIELD(one);
    FIELD(two);
public:
    MyClass(){one_string = "It's one"; one_size = 1; two_string = "It's two"; two_size = 2;}
};

int main(){
    MyClass m;
    cout << m.one_getInt() << endl;
    cout << m.one_getStr() << endl;
    cout << m.two_getInt() << endl;
    cout << m.two_getStr() << endl;
    return 0;
}