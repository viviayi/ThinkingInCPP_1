#include <iostream>
using namespace std;

class MyClass{
public:
    int i;
};

MyClass fun1(){
    cout << "Called fun1" << endl;
    return MyClass();
}

// void fun2(MyClass& m1){ // 不使用const，后面调用函数的时候会提示非const只能作为左值
void fun2(const MyClass& m1){
    cout << "Called fun2" << endl;
}

int main(){
    MyClass m;
    fun2(fun1());
}