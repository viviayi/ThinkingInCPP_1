#include <iostream>
using namespace std;

#define TRACE(s) cerr << #s << endl, s

void f(int i){
    i++;
    cout << i << endl;
}

int main(){
    for(int i = 0; i < 100; i++)
        TRACE(f(i));
}