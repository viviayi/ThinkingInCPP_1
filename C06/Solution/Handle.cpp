// Handle implementation
#include "Handle.h"
#include "../require.h"
#include <iostream>

//Define Handle's implementaion:
struct Handle::Cheshire{
    int i;
};

/*
void Handle::intialize(){
    smile = new Cheshire;
    smile->i = 0;
}

void Handle::cleanup(){
    delete smile;
}
*/

Handle::Handle(){
    std::cout << "Constructor called!" << std::endl;
    smile = new Cheshire;
    smile->i = 0;
}

Handle::~Handle(){
    std::cout << "Deconstructor called!" << std::endl;
    delete smile;
}

int Handle::read(){
    return smile->i;
}

void Handle::change(int x){
    smile->i = x;
} ///:~