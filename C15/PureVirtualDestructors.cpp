// Pure virtual destructors require a function body
#include <iostream>
using namespace std;

class Pet{
public:
    virtual ~Pet() = 0;
};

Pet::~Pet() {
    cout << "~Pet()\n";
}

class Dog : public Pet{
public:
    ~Dog() {
        cout << "~Dog()\n";
    }
};

int main(){
    Pet* p = new Dog;
    delete p; // Virtual destructor call
} ///:~