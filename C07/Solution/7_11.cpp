#include "Mem2.h"
#include <iostream>
using namespace std;

int main(){
    Mem a(sizeof(int));
    a.ensureMinSize(10*sizeof(int));
    cout << a.moved() << endl;
}