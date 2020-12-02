/**
Create a class Rock with a default constructor, a copy-constructor,
an assignment operator, and a destructor, all of which announce to
cout that they’ve been called. In main( ), create a vector<Rock>
(that is, hold Rock objects by value) and add some Rocks. Run the
program and explain the output you get. Note whether the destructors
are called for the Rock objects in the vector. Now repeat the exercise
with a vector<Rock*>. Is it possible to create a vector<Rock&>?
**/

#include <iostream>
#include <vector>
using namespace std;

class Rock{
public:
    Rock(){
        cout << "Rock()\n";
    }
    Rock(const Rock&){
        cout << "Rock(const Rock&)\n";
    }
    Rock& operator=(const Rock&){
        cout << "Rock& operator=(const Rock&)\n";
        return *this;
    }
    ~Rock(){
        cout << "~Rock()\n";
    }
};

int main(){
    vector<Rock> v;
    cout << "1\n"; 
    Rock r1;
    v.push_back(r1);
    cout << "2\n"; 
    Rock r2(r1);
    v.push_back(r2);
    cout << "3\n"; 
    Rock r3;
    r3 = r1;
    v.push_back(r3);
    cout << "end\n";
    // output:
    // 1
    // Rock()
    // Rock(const Rock&)  // 按照传值方式传入vector，调用拷贝构造函数
    // 2
    // Rock(const Rock&)  // 使用拷贝构造函数初始化r2
    // Rock(const Rock&)  // ?
    // Rock(const Rock&)  
    // ~Rock()
    // 3
    // Rock()
    // Rock& operator=(const Rock&) // 使用赋值运算初始化r3
    // Rock(const Rock&) // ?
    // Rock(const Rock&)
    // Rock(const Rock&)
    // ~Rock()
    // ~Rock()
    // end
    // ~Rock()
    // ~Rock()
    // ~Rock()
    // ~Rock()
    // ~Rock()
    // ~Rock()

    /*
    cout << "vector<Rock*>\n";
    vector<Rock*> vp;
    Rock r1;
    vp.push_back(&r1);
    Rock r2(r1);
    vp.push_back(&r2);
    Rock r3;
    r3 = r1;
    vp.push_back(&r3);
    vp.push_back(new Rock);
    */
    // output:
    // Rock()
    // Rock(const Rock&)
    // Rock()
    // Rock& operator=(const Rock&)
    // Rock()
    // ~Rock()
    // ~Rock()
    // ~Rock()
}