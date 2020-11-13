#include <iostream>
using namespace std;

class Simple{
    int i;
public:
    Simple(int ii = 0) : i(ii) {}
    const Simple operator+(const Simple& right){
        return Simple(i + right.i);
    }
    Simple& operator++(){
        ++i;
        return *this;
    }
    const Simple operator++(int){
        Simple out(i);
        i++;
        return out;
    }
    Simple& operator--(){
        --i;
        return *this;
    }
    const Simple operator--(int){
        Simple out(i);
        i--;
        return out;
    }
    void print(ostream& os){
        os << i << endl;
    }
};

int main(){
    Simple s1;
    Simple s2(1);
    Simple s3 = s1++;
    s1.print(cout);
    s3.print(cout);
    (++s2).print(cout);
    (--s1).print(cout);
    //! (s1++).print(cout); // s1++返回的是临时对象，编译器自动定义为常量，不能进行后续操作
}