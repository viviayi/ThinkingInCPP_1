#include <iostream>
using namespace std;

struct S1{
    int i;
    float f;
    void func1();
    int func2(float);
};

void S1::func1(){
    cout << this->i << endl;
    cout << "Called func1." << endl;
}

int S1::func2(float x){
    this->f = x;
    cout << this->f << endl;
    return i;
}

int main(){
    S1 s;
    s.i = 1;
    s.func1();
    s.func2(3.14);
}



