// const成员函数可以被const对象和非const对象调用
// 非const成员函数只能被非const对象调用
#include <iostream>
using namespace std;

class A{
    int i;
    float f;
public:
    A(int ii = 0, float ff = 0.0):i(ii),f(ff){};
    void print_float() {cout << f << endl;};
    void print_int() const{
        cout << i << endl;
        //!print_float(); //对象含有与成员 函数 "A::print_float" 不兼容的类型限定符 -- 对象类型是:  const A
    };
    
};

int main(){
    A a;
    const A b(1, 3.14);
    a.print_int();
    a.print_float();
    b.print_int();
    //!b.print_float();//对象含有与成员 函数 "A::print_float" 不兼容的类型限定符 -- 对象类型是:  const A
}