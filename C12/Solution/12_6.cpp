#include <iostream>
using namespace std;

class Simple{
    int i;
public:
    Simple(int ii = 0) : i(ii) {}
    const Simple operator+(const Simple& right){
        return Simple(i + right.i);
    }
    friend ostream& operator<<(ostream& os, const Simple& s);
};

ostream& operator<<(ostream& os, const Simple& s){
    os << s.i << endl;
    return os;
}

int main(){
    Simple s1;
    Simple s2(1);
    cout << s1;
    Simple s3 = s1 + s2;
    cout << s3;
}