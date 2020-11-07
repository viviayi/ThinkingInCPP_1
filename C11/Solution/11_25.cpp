#include <iostream>
using namespace std;

class MyClass{
public:
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
};

int main(){
    int (MyClass::*ip)[10] = &MyClass::array;
    // int MyClass::*ip2 = MyClass::array; //非静态成员引用必须与特定对象相对
    MyClass m;
    cout << (m.*ip)[0] << endl;

}