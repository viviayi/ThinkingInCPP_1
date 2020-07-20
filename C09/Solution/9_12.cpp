// Testing a simple time class
#include "../Cpptime.h"
#include <iostream>
using namespace std;

int main(){
    Time start;
    while (cin.get() != '\n') {}
    Time end;
    cout << endl;
    cout << "start = " << start.ascii();
    cout << "end = " << end.ascii();
    cout << "delta = " << end.delta(&start);
} ///:~