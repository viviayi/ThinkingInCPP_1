// Constructors/deconstructors
#include "Stack3.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    string lines[] = {"one", "two", "three", "four", "five"};
    Stack textLines(lines, sizeof(lines)/sizeof(*lines));
    string* s;
    while((s = (string*)textLines.pop()) != 0){
        cout << *s << endl;
        delete s;
    }
    return 0;
} ///:~