#include "CppLib.h"
#include "Stack.h"
#include <iostream>

struct StackStruct
{
    Stack stashStack;
    Stack reverseStack;
    Stash* textlines;
    const int bufsize = 400;
    int i;

    void intialize();
    void reverse();
    void add(const void* element);
    void* pop();
    void cleanup();
};

void StackStruct::intialize(){
    i = 0;
    stashStack.initialize();
    reverseStack.initialize();
}

void StackStruct::cleanup(){
    stashStack.cleanup();
    reverseStack.cleanup();
}

void StackStruct::add(const void* element){
    // std::cout << i << std::endl;
    if (i == 0){
        textlines = new Stash;
        textlines->initialize(sizeof(char) * bufsize);
    }
    textlines->add(element);
    i++;
    if(i == 5){
        i = 0;
        stashStack.push(textlines);
    }
}

void StackStruct::reverse(){
    reverseStack.push(textlines);
    while((textlines = (Stash*)stashStack.pop()) != 0){
        reverseStack.push(textlines);
    }
    textlines = (Stash*)reverseStack.pop();
    i = 0;
}

void* StackStruct::pop(){
    //std::cout << textlines->count() << std::endl;
    if (i == textlines->count()){
        textlines->cleanup();
        if ((textlines = (Stash*)reverseStack.pop()) == 0)
        {
            return 0;
        }   
        else{
            i = 0;
        }
    }
    return textlines->fetch(i++);
}


