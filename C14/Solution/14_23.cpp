// Correctly creating the copy-constructor
#include <iostream>
using namespace std;

class Parent{
    int i;
public:
    Parent(int ii) : i(ii){
        cout << "Parent(int ii)\n";
    }
    Parent(const Parent& b) : i(b.i){
        cout << "Parent(const Parent&)\n";
    }
    Parent() : i(0){
        cout << "Parent()\n";
    }
    friend ostream& operator<<(ostream& os, const Parent& b){
        return os << "Parent: " << b.i << endl;
    }
};

class Member{
    int i;
public:
    Member(int ii) : i(ii){
        cout << "Member(int ii)\n";
    }
    Member(const Member& m) : i(m.i){
        cout << "Member(const Member&)\n";
    }
    friend ostream& operator<<(ostream& os, const Member& m){
        return os << "Member: " << m.i << endl;
    }
};

class Child : public Parent{
    int i;
    Member m;
public:
    Child(int ii) : Parent(ii), i(ii), m(ii){
        cout << "Child(int ii)\n";
    }
    friend ostream& operator<<(ostream& os, const Child& c){
        return os << (Parent&)c << c.m << "Child: " << c.i << endl;
    }
    /*如果自己定义继承类拷贝构造函数*/
    // 需要正确调用父类拷贝构造函数，Parent(c)也是一种向上类型转换
    // Child(const Child& c) : Parent(c), i(c.i), m(c.m){
    //     cout << "Child(Child&)\n";
    // }
};

class GrandSon : public Child{
    Member m;
public:
    GrandSon(int ii) : Child(ii), m(ii){
        cout << "GrandSon(int ii)\n";
    }
    GrandSon(const GrandSon& g) : Child(g), m(g.m){
        cout << "GrandSon(GrandSon&)\n";
    }
    GrandSon& operator=(const GrandSon& g){
        cout << "GrandSon operator=\n";
        Child::operator=(g);
        m = g.m;
        return *this;
    }
    friend ostream& operator<<(ostream& os, const GrandSon& g){
        return os << (Child&)g << g.m << endl;
    }
};

int main(){
    Child c(2);
    cout << "calling copy-constructor: " << endl;
    Child c2 = c; // Calls copy-constructor 会调用基类的拷贝构造函数
    cout << "values in c2:\n" << c2;
    GrandSon g(1);
    cout << g;
    GrandSon g2(g);
    g2 = g;
}
