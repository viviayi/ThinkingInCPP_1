#include "../Cpptime.h"
#include <iostream>
using namespace std;

class A{
    
public:
    int i;
    A();
};

A::A(){ i = 1; int tmp = (i+1)*(i+1); i = i*i; cout << "A" << endl; }

class B{
    A a;
public:
    B();
};

B::B(){ a.i = 2; a.i *= a.i; cout << "B" << endl; }

class A_inline{
public:
    int i;
    A_inline(){ i = 1; int tmp = (i+1)*(i+1); i = i*i; cout << "A in_line" << endl;}
};

class B_inline{
    A_inline a;
public:
    B_inline(){ a.i = 2; a.i *= a.i; cout << "B in_line" << endl;}
};

int main(){
    Time t_start;
    B b[5000];
    Time t_end;
    Time t_inline_start;
    B_inline b_inline[5000];
    Time t_inline_end;
    cout << "inline time start: " << t_inline_start.ascii() << "no inline time start: " << t_start.ascii() << endl;
    cout << "inline time delta: " << t_inline_end.delta(&t_inline_start) << "no inline time delta: " << t_end.delta(&t_start) << endl;
}
