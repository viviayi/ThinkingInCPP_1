// Static member of same type, ensures that
// only one object of this type exists.
// Also referred to as the "singleton" pattern.
#include <iostream>
using namespace std;

class Egg{
    static Egg e; // 可以类外定义，调用私有构造函数
    int i;
    Egg(int ii) : i(ii){} // private construction
    Egg(const Egg&); // Prevent copy-construction
public:
    static Egg* instance() { return &e; }
    int val() const { return i; }
};

Egg Egg::e(47);

int main(){
    //! Egg x(1); // Error -- can't create an Egg
    // You can access the single instance:
    cout << Egg::instance()->val() << endl;
}