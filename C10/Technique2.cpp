#include "Dependency2.h"
using namespace std;

// Returns a value so it can be called as
// a global initializer:
int seperator(){
    cout << "-------------------" << endl;
    return 1;
}

// Simulate the dependency problem:
extern Dependency1 dep1;
Dependency2 dep2(dep1);
Dependency1 dep1;
int x1 = seperator();

// But if it happens in this order it works OK:
Dependency1 dep1b;
Dependency2 dep2b(dep1b);
int x2 = seperator();

// Warpping static objects in functions succeeds
// 通过调用函数来访问静态对象
Dependency1& d1(){
    static Dependency1 dep1;//函数内部的静态对象，在函数第一次被调用时初始化，且只初始化一次
    return dep1;
}

Dependency2& d2(){
    static Dependency2 dep2(d1());
    return dep2;
}

int main(){
    Dependency2& dep2 = d2();
}