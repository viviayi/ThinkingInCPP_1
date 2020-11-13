#include <iostream>
using namespace std;

class Simple{
    int i;
public:
    Simple(int ii = 0) : i(ii) {}
    const Simple operator+(const Simple& right){
        return Simple(i + right.i);
    }
    const Simple& operator++(){
        ++i;
        return *this;
    }
    const Simple operator++(int){
        Simple out(i);
        i++;
        return out;
    }
    const Simple& operator--(){
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
    ++s2;
    s2.print(cout);
}