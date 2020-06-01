#include "StackOfInt.h"

int main(){
    StackOfInt s;
    s.initialize();
    s.push(1);
    s.push(2);
    s.print();
    s.pop();
    s.pop();
    s.pop();
    s.cleanup();
}