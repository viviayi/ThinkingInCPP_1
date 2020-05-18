#include "CppLib.h"
#include <iostream>
using namespace std;

int main(){
    Stash doubleStash;
    doubleStash.initialize(sizeof(double));
    double d;
    for (int i = 0; i < 50; i++){
        d = (double)i;
        doubleStash.add(&d);
    }

    for(int j = 0; j < doubleStash.count(); j++){
        cout << "doubleStash.fetch(" << j << ") = "
             << *(double*)doubleStash.fetch(j)
             << endl;
    }
    doubleStash.cleanup();
}