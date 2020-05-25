#include "CppLib.h"
#include "Stack.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const int bufsize = 400;

    ifstream in("4_22.cpp");
    Stack stashStack;
    stashStack.initialize();
    Stack reverseStack;
    reverseStack.initialize();
    string line;
    Stash* textlines;
    // Read file and store lines in the Stack:
    int i = 0;
    while(getline(in, line)){
        if (i == 0){
            textlines = new Stash;
            textlines->initialize(sizeof(char) * bufsize);
        }
        textlines->add(line.c_str());
        i++;
        if(i == 5){
            i = 0;
            stashStack.push(textlines);
        }
    }

    while((textlines = (Stash*)stashStack.pop()) != 0){
        reverseStack.push(textlines);
    }

    // Pop the lines from the Stack and print them:
    char* cp;
    while((textlines = (Stash*)reverseStack.pop()) != 0){
        int k = 0;   
        while((cp = (char*)textlines->fetch(k++)) != 0)
            cout << "stringStash.fetch(" << k << ") = " << cp << endl;
        textlines->cleanup();
    }
    stashStack.cleanup();
    reverseStack.cleanup();
} ///:~
