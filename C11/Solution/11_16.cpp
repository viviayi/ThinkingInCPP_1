#include <iostream>
using namespace std;

class MyClass{
    int i;
public:
    MyClass(){ cout << "Constructor called." << endl; }
    MyClass(int ii):i(ii){ cout << "Constructor called." << endl; }
    MyClass(const MyClass&){ cout << "Copy constructor called." << endl; }
    void print(){ cout << i << endl; }
};

void f1(MyClass m1){}

MyClass f2(){
    //实际运行时发现值返回时并没有输出调用拷贝构造函数相关，原因是编译器进行了值返回优化，RVO
    // g++ 编译时加上 -fno-elide-constructors
    MyClass m(3);
    m.print();
    return m;
}

int main(){
    MyClass m1;
    f1(m1);
    f2();
}