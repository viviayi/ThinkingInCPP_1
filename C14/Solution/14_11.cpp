// Test of pointer Stash
#include "14_11.h"
#include "../../require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    AStash as;
    // 'nem' works with built-in types, too. Note the "pseudo-constructor" syntax:
    for(int i = 0; i < 25; i++){
        as.add((Asteroid*)new int(i));
    }
    for(int j = 0; j < as.count(); j++){
        cout << "intStash[" << j << "] = " << *(int*)as[j] << endl;
    }
    // Clean up:
    for(int k = 0; k < as.count(); k++){
        delete as.remove(k);
    }
} ///:~