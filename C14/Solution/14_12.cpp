// Test of pointer Stash
#include "14_12.h"
#include "../../require.h"
#include <fstream>
#include <string>
using namespace std;


int main(){
    AStash as;
    // 'nem' works with built-in types, too. Note the "pseudo-constructor" syntax:
    for(int i = 0; i < 25; i++){
        as.add(new Asteroid(i));
    }
    for(int j = 0; j < as.count(); j++){
        cout << "AsteroidStash[" << j << "] = " << *as[j] << endl;
    }
    // Clean up:
    for(int k = 0; k < as.count(); k++){
        as.remove();
    }
} ///:~