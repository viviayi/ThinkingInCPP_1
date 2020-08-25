/*
Keep doing this until you reach the last file, which will also
contain a global object definition. In that file, main( ) should call the
test( ) function and report the result. If the result is true, find out how
to change the linking order for your linker and change it until the result
is false.
*/
#include "10_32.h"
#include <iostream>
using namespace std;

extern Mirror m4;
Mirror m5(&m4);

int main(){
    cout << m5.test() << endl;
}