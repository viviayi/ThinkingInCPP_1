#include <iostream>
using namespace std;

class Pet{
public:
    virtual ~Pet() {}
};

class Dog : public Pet {};
class Cat : public Pet {};

int main(){
    Pet* b = new Cat; // Upcast
    // Try to cast it to Dog*:
    Dog* d1 = dynamic_cast<Dog*>(b);
    // Try to cast it to Cat*:
    Cat* d2 = dynamic_cast<Cat*>(b);
    cout << "d1 = " << (long long)d1 << endl;
    cout << "d2 = " << (long long)d2 << endl;  // 正确的向下类型转换，有非零值
} ///:~