#include <iostream>
using namespace std;

struct S1{
    void func();
};

void S1::func(){
    cout << "Called function." << endl;
}

int main(){
    S1 s;
    s.func();
}