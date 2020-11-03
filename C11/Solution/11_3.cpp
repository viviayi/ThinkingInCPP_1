#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int y = 20;
    int& ref2 = x;

    cout << "ref2=" << ref2 << endl;
    cout << "x=" << x << endl;
    cout << "&ref2=" << &ref2 << endl;

    // 1
    // int& ref1;
    // error: 'ref1' declared as reference but not initialized

    // 2
    ref2 = y; // 这句不是将引用的指向改变，而是将ref2指向的x的值改变为y；
    //! &ref2 = y;// &ref2不是能被修改的左值
    cout << "ref2=" << ref2 << endl; // ref2指向的变量的值被改变
    cout << "x=" << x << endl; // 即x的值被改变
    cout << "&ref2=" << &ref2 << endl; // 但ref2本身指向的还是x
    

    // 3
    // int& ref3 = NULL;
    // error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'|
return 0;
}