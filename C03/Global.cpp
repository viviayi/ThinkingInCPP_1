// {L} Global2 
// 需要将Global2.cpp链接进来 通过Makefile?
// Demonstration of global variables
#include <iostream>
using namespace std;

int globe;
void func();
int main(){
    globe = 12;
    cout << globe << endl;
    func();
    cout << globe << endl;
} ///:~