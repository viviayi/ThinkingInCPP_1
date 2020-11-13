#include <iostream>
using namespace std;

class Simple{
    int i;
public:
    Simple(int ii = 0) : i(ii) {}
    const Simple operator+(const Simple& right) const{
        return Simple(i + right.i);
    }
    const Simple operator-(const Simple& right) const{
        return Simple(i - right.i);
    }
    void print(ostream& os){
        os << i << endl;
    }
};

int main(){
    Simple s1;
    Simple s2(1);
    Simple s3(3);
    Simple s4 = s1 + s2 - s3;
    s4.print(cout);
}