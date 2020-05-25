#include "StackStruct.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    StackStruct s1;
    s1.intialize();
    ifstream in("4_23.cpp");
    string line;
    while(getline(in, line)){
        s1.add(line.c_str());
        // cout << line << endl;
    }
    s1.reverse();
    char* cp;
    while((cp = (char*)s1.pop()) != 0)
    {
        cout << "stringStash.fetch(" << s1.i << ") = " << cp << endl;
    }
    s1.cleanup();    
} ///:~