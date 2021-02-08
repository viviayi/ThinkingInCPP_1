#include "../AutoCounter.h"
#include "16_3.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    PStash<AutoCounter> acStash;
    for(int i = 0; i < 10; i++)
        acStash.add(AutoCounter::create());
    cout << "Removing 5 manually:" << endl;
    for(int j = 0; j < 5; j++)
        delete acStash.remove(j);
    // cout << "Remove two without deleting them:" << endl;
    // ... to generate the cleanup error message.
    // cout << acStash.remove(5) << endl; // PStash里的remove函数，返回值为AutoCounter指针
    // cout << acStash.remove(6) << endl;
    
    // Repeat the test from earlier chapters:
    ifstream in("16_3.cpp");
    assure(in, "16_3.cpp");
    PStash<string> stringStash;
    string line;
    while(getline(in, line))
        stringStash.add(new string(line));
    // Print out the strings:
    for(int u = 0; stringStash[u]; u++)
        cout << "stringStash[" << u << "] = " << *stringStash[u] << endl;
    cout << "The destructor cleans up the rest:" << endl;
} ///:~
