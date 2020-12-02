// Operator new for arrays
#include <new> // Size_t definition
#include <fstream>
using namespace std;
ofstream trace("14_28.out");

class Widget{
    enum { sz = 10 };
    int i[sz];
public:
    Widget(){ trace << "*"; }
    ~Widget(){ trace << "~"; }
    void* operator new(size_t sz){
        trace << "Widget::new: " << sz << " bytes" << endl;
        return ::new char[sz];  // 单个Widget对象，这里要用[]吗？？？
    }
    void operator delete(void* p){
        trace << "Widget::delete" << endl;
        ::delete []p;
    }
    void* operator new[](size_t sz){
        trace << "Widget::new[]: " << sz << " bytes" << endl;
        return ::new char[sz];
    }
    void operator delete[](void* p){
        trace << "Widget::delete[]" << endl;
        ::delete []p;
    }
};

class Test : public Widget {};

int main(){
    trace << "new Widget" << endl;
    Test* w = new Test;
    trace << "\ndelete Widget" << endl;
    delete w;
    trace << "\nnew Widget[25]" << endl;
    Test* wa = new Test[25];
    trace << "\ndelete []Widget" << endl;
    delete []wa;
} ///:~