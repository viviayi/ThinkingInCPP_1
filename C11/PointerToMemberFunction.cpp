#include <iostream>
using namespace std;

class Widget{
public:
    void f(int) const { cout << "Widget::f()\n"; }
    void g(int) const { cout << "Widget::g()\n"; }
    void h(int) const { cout << "Widget::h()\n"; }
    void i(int) const { cout << "Widget::i()\n"; }
};

int main(){
    Widget w;
    Widget *wp = &w;
    void (Widget::*pmem) (int) const = &Widget::h;
    (w.*pmem)(1);
    (wp->*pmem)(2);
    pmem = &Widget::f; // 利用函数指针的改变调用不同的函数
    (w.*pmem)(3);
    (wp->*pmem)(4);
}///:~