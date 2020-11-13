#include <iostream>
using namespace std;

class Simple{
    int i;
public:
    Simple(int ii = 0) : i(ii) {}
    friend Simple operator+(const Simple& left, const Simple& right);
    friend Simple operator-(const Simple& left, const Simple& right);
    void print(ostream& os){
        os << i << endl;
    }
};

Simple operator+(const Simple& left, const Simple& right){
    return Simple(left.i + right.i);
}
Simple operator-(const Simple& left, const Simple& right){
    return Simple(left.i - right.i);
}

int main(){
    Simple s1;
    Simple s2(1);
    Simple s3(3);
    Simple s4 = s1 + s2 - s3;
    s4.print(cout);
}