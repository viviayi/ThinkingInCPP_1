#include <iostream>
using namespace std;

class MyClass{
    string s;
public:
    MyClass(string ss = "") : s(ss){}
    friend ostream& operator<<(ostream& os, const MyClass& m);
};

ostream& operator<<(ostream& os, const MyClass& m){
    return os << m.s << endl;
}

class SecClass{
    MyClass m;
public:
    SecClass(){}
    SecClass(const MyClass& mm) : m(mm){}
    friend ostream& operator<<(ostream& os, const SecClass& s);
};

ostream& operator<<(ostream& os, const SecClass& s){
    return os << s.m;
}

int main(){
    MyClass m1("m1");
    SecClass s1(m1);
    SecClass s2;
    s2 = s1;
    SecClass s3(s1);
    cout << s1;
    cout << s2;
    cout << s3;
}