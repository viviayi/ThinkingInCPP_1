// volatile 对象只能调用volatile函数
// volatile 函数和 非volatile 函数都可以改变volatile成员的值
#include <iostream>
using namespace std;

class A{
    volatile int i;
public:
    A(int ii = 0):i(ii){};
    void change_volatile() volatile{i++;cout << i << endl;};
    void change(){i--;cout << i << endl;};
};

int main(){
    volatile A a;
    A b(3);
    //! a.change();
    a.change_volatile();
    b.change();
    b.change_volatile();
}