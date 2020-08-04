#include "10_10.h"
#include <iostream>
using namespace std;

//! int i = 2; //error: redefinition of 'int i'

void setValue(){
    c = 'a';
    f = 1.2;
    cout << i << endl;
    cout << c << endl;
    cout << f << endl;
}

int main(){
    setValue();
    return 0;
}
