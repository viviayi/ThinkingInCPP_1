#include <iostream>
using namespace std;

struct S1{
    int i;
    char c;
}; // 8

struct S2{
    float f;
    double d;
}; // 16

struct S3{
    int x;
    void print(){
        cout << "struct S3 x: " << x << endl;
    }
}; // 4

struct S4{}; // 1

int main(){
    cout << "sizeof struct S1: " << sizeof(S1) << endl;
    cout << "sizeof struct S2: " << sizeof(S2) << endl;
    cout << "sizeof struct S3: " << sizeof(S3) << endl;
    cout << "sizeof struct S4: " << sizeof(S4) << endl;
}