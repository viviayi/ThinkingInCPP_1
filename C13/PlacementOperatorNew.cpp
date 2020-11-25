// Placement with operator new()
#include <cstddef> // Size_t
#include <iostream>
using namespace std;

class X{
    int i;
public:
    X(int ii = 0) : i(ii){
        cout << "this = " << this << endl;
    }
    ~X(){
        cout << "X::~X(): " << this << endl;
    }
    void* operator new(size_t, void* loc){
        return loc;
    }
};

int main(){
    int l[10];
    cout << "l = " << l << endl;
    X* xp = new(l) X(47); // X at location l
    xp->X::~X(); // Explicit desturctor call  显示的调用析构函数
    // ONLY use with placement!
    // 不可在其他情况下使用，比如用于实时决定对象生存时间
    // 因为若析构在栈上创建的函数，则对象超出作用范围时又会析构一次，
    // 若对堆上对象使用，则对象内存没有被释放。
    
} ///:~