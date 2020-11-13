#include <iostream>
using namespace std;

class Simple{
    int i;
public:
    Simple(int ii = 0) : i(ii) {}
    const Simple operator+(const Simple& right){
        return Simple(i + right.i);
    }
    void print(ostream& os){
        os << i << endl;
    }
};

int main(){
    Simple s1;
    Simple s2(1);
    s1.print(cout);
    Simple s3 = s1 + s2;
    s3.print(cout);
}