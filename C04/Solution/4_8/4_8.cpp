#include "Stack.h"
#include <iostream>
using namespace std;

int main(){
    Stack doubleStack;
    doubleStack.initialize();
    double d;
    for(int i = 0; i < 50; i++){
        d = (double)i;
        doubleStack.push(new double(d)); // 每次push都new一个对象？
    }
    double* p;
    while((p = (double*)doubleStack.pop()) != 0){
        cout << *p << endl;
        delete p;
    }
    doubleStack.cleanup();
}