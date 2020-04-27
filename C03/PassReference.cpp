#include <iostream>
using namespace std;

void f(int& r){
    cout << "r = " << endl;
    cout << "&r = " << &r << endl;
    r = 5;
    cout << "r = " << r << endl;
}

int main(){
    int x = 47;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(x); // 看起来和按值传递一样
    cout << "x = " << x << endl;
}