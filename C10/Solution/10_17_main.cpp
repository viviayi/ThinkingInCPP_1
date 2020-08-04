#include "10_17.h"
#include <iostream>
using namespace std;

extern void set_value(int);
extern void set_value2(int);
extern int get_value();
extern int get_value2();

int main(){
    set_value(11);
    set_value2(22);
    cout << get_value() << endl;
    cout << get_value2() << endl;
    cout << x << endl;
}