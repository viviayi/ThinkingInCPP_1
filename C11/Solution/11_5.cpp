/**
Create a class with some member functions, and make that the object
that is pointed to by the argument of Exercise 4. Make the pointer a
const and make some of the member functions const and prove that you
can only call the const member functions inside your function. Make
the argument to your function a reference instead of a pointer.
**/

#include <iostream>
using namespace std;

class MyClass{
public:
    void f1() { cout << "f1" << endl; };
    void f2() { cout << "f2" << endl; };
    void f3() const{ cout << "f3 const" << endl; };
};

const MyClass& fp(const MyClass* ip){
    //! ip->f1();// const指针只能调用const函数
    //! ip->f2();
    ip->f3();
    const MyClass& i = *ip;
    return i;
}


const MyClass& f(const MyClass& ip){
    //! ip.f1();
    //! ip.f2();
    ip.f3();
    const MyClass& i = ip;
    return i;
}

int main(){
    MyClass m;
    const MyClass* mp = &m;
    fp(mp);
    f(m);
}