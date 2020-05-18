#include "4_3.h"
#include <iostream>
using namespace std;

void S1::func(){
    cout << "Called function." << endl;
}

int main(){
    S1 s;
    s.func();
}