//g++ -o CLibTest.exe CLibTest.cpp CLib.cpp
#include "CLib.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main(){
    // Define variables at the beginning
    // of the block, as in C:
    CStash intStash, stringStash;
    int i;
    char* cp;
    ifstream in;
    string line;
    const int bufsize = 80;
    // Now remember to initialize the variables:
    initialize(&intStash, sizeof(int));
    for(i = 0; i < 100; i++){
        add(&intStash, &i);
    }
    for(i = 0; i < count(&intStash); i++){
        cout << "fetch(&intStash, " << i << ") = "
             << *(int*)fetch(&intStash, i) << endl;
    }
    // Holds 80-character strings:
    initialize(&stringStash, sizeof(char)*bufsize);
    in.open("CLibTest.cpp");
    assert(in);
    while(getline(in, line)){
        add(&stringStash, line.c_str()); //line.c_str()返回当前字符串的首字符地址
    }
    i = 0;
    while((cp = (char*)fetch(&stringStash, i++))!=0){
        cout << "fetch(&stringStash, " << i << ") = "
             << cp << endl;
    }
    cleanup(&intStash);
    cleanup(&stringStash);
} ///:~