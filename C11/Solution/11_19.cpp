#include <iostream>
using namespace std;

class MyClass_one{
public:
    MyClass_one(){}
    MyClass_one(const MyClass_one&){
        cout << "MyClass_one copy constructor" << endl;
    }
};

class MyClass_two{
    MyClass_one one;
};

int main(){
    MyClass_two m2;
    MyClass_two m2_ = m2;
}