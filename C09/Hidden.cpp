// Hidden activities in inlines
#include <iostream>
using namespace std;

class Member{
    int i, j, k;
public:
    Member(int x = 0) : i(x), j(x), k(x) {}
    ~Member() {cout << "~Member" << endl;} 
};

class WithMembers
{
private:
    Member q, r, s;
    int i;
public:
    WithMembers(int ii) : i(ii) {} //成员对象q,r,s的构造函数和析构函数也会被调用
    ~WithMembers(){
        cout << "~WithMembers" << endl;
    }
};

int main(){
    WithMembers wm(1);
}