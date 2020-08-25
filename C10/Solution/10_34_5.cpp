#include "10_34.h"
#include <iostream>
using namespace std;

extern Mirror& m4();

Mirror& m5(){
    static Mirror m5(m4());
    return m5;
}

int main(){
    cout << m5().test() << endl;
}