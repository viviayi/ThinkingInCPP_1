/**
Create a class with an assignment operator that has a second argument,
a string that has a default value that says "op= call." Create a function
that takes assigns an object of your class to another one and show that your
assignment operator is called correctly.
**/
#include <iostream>
using namespace std;

class MyClass{
    string s;
public:
    MyClass(string ss = "") : s(ss){}
    MyClass(const MyClass& m, string ss = "op= call"){
        s = ss + m.s;
    }
    void print(){
        cout << s << endl;
    }
    friend ostream& operator<<(ostream& os, const MyClass m);
};

ostream& operator<<(ostream& os, const MyClass m){
    os << m.s << endl;
    return os;
}

int main(){
    MyClass m1("m1");
    MyClass m2(m1); // 调用拷贝构造函数
    cout << "m1:" << &m1 << " "; m1.print();
    cout << "m2:" << &m2 << " "; m2.print();
    MyClass m3;
    m3 = m1; // 调用编译器自动构造的赋值运算符
    cout << "m1:" << &m1 << " "; m1.print();
    cout << "m3:" << &m3 << " "; m3.print();
    cout << "m1:" << &m1 << " " << m1; // 参数传值，再次调用拷贝构造函数，进入函数的是m1的拷贝
    cout << "m2:" << &m2 << " " << m2; // 同样进入函数的是m2的拷贝，即m1拷贝的拷贝
}