/**
Modify C14:Order.cpp by adding a virtual function in the base class of
the CLASS macro (have it print something) and by making the destructor
virtual. Make objects of the various subclasses and upcast them to the
base class. Verify that the virtual behavior works and that proper
construction and destruction takes place.
**/
#include <fstream>
using namespace std;
ofstream out("order.out"); // 因为掉了一个分号，一直报错，晕

#define CLASS(ID) class ID{ \
public: \
    ID(int){ out << #ID " constructor\n"; } \
    virtual void print(){ out << #ID " virtual print()\n"; } \
    virtual ~ID(){ out << #ID " destructor\n"; } \
}

CLASS(Base1);
CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);

class Derived1 : public Base1{
    Member1 m1; // 按照声明的顺序调用成员对象的构造函数
    Member2 m2;
public:
    Derived1(int) :  m2(1), m1(2), Base1(3){ // 构造函数的初始化表不决定构造函数调用顺序
        out << "Derived1 constructor\n";
    }
    void print(){
        out << "Derived1 virtual print()\n";
    }
    ~Derived1(){ out << "Derived1 destructor\n"; }
};

class Derived2 : public Derived1{
    Member3 m3;
    Member4 m4;
public:
    Derived2() : m3(1), Derived1(2), m4(3){
        out << "Derived2 constructor\n";
    }
    void print(){
        out << "Derived2 virtual print()\n";
    }
    ~Derived2(){
        out << "Derived2 destructor\n";
    }
};

int main(){
    Base1* bp = new Derived2();
    bp->print();
    delete bp;
}