// Testing a simple time class
#include "Cpptime.h"
#include <iostream>
using namespace std;

int main(){
    Time start;
    for(int i = 1; i < 3000; i++){
        cout << i << ' ';
        if(i%15 == 0) cout << endl;
    }
    Time end;
    cout << endl;
    cout << "start = " << start.ascii();
    cout << "end = " << end.ascii();
    cout << "delta = " << end.delta(&start);
} ///:~