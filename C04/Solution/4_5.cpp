#include <iostream>
using namespace std;

struct S1{
    int i;
    void func1(int);
    void func2();
};

void S1::func1(int j){
    i = j;
}

void S1::func2(){
    cout << i << endl;
}

int main(){
    S1 s;
    s.func1(10);
    s.func2();
}