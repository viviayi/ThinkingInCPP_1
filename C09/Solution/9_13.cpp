#include <iostream>
using namespace std;

class X{
    int i;
public:
    X(int ii = 0) : i(ii){}
    int f1(){
        int a = f2();
        return a;
    }
    int f2(){
        return i;
    }
};

int main(){
    X x(2);
    cout << x.f1() << endl;
}