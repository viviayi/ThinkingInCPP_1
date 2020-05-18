#include <iostream>
using namespace std;

struct S1{
    int i;
};

void func1(S1* s, int i){
    s->i = i;
}

void func2(S1* s){
    cout << s->i << endl;
}

int main(){
    S1 s;
    func1(&s, 10);
    func2(&s);
}