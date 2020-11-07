#include <iostream>
using namespace std;

class Simple2{
public:
    int f(float) const{
        cout << "f" << endl;
        return 1;
    }
    void f(int) const{
        cout << "f overloaded" << endl;
    }
};

int (Simple2::*fp)(float) const; // 定义类Simple2的成员函数指针
int (Simple2::*fp2)(float) const = &Simple2::f; // 定义并初始化类Simple2的成员函数指针
int main(){
    fp = &Simple2::f;
    void (Simple2::*fp3)(int) const = &(Simple2::f);
    Simple2 s;
    (s.*fp3)(1);
    (s.*fp)(1.0);
} ///:~