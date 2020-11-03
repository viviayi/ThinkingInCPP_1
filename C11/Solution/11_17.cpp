/**
Create a class that contains a double*. The constructor initializes the double*
by calling new double and assigning a value to the resulting storage from the
constructor argument. The destructor prints the value that’s pointed to, assigns
that value to -1, calls delete for the storage, and then sets the pointer to zero.
Now create a function that takes an object of your class by value, and call this
function in main( ). What happens? Fix the problem by writing a copy-constructor.
**/

#include <iostream>
using namespace std;

class MyClass{
    double d1, d2, d3;
    double* dp;
public:
    MyClass(double d){
        dp = new double (d);
    }
    MyClass(const MyClass& m1){
        // dp = m1.dp; //浅拷贝，和默认拷贝构造函数一个效果，变量和拷贝变量指向同一内存，释放多次
        dp = new double;
        *dp = *m1.dp;
    }
    ~MyClass(){
        cout << *dp << endl;
        *dp = -1;
        delete dp;
        dp = 0;
    }
};

void fun(MyClass m){}

int main(){
    MyClass m(1.2);
    fun(m);
}