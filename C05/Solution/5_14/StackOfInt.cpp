#include "StackOfInt.h"
#include <iostream>
#include <vector>
#include "../../require.h"

class StackOfInt::StackImp{
    std::vector<int> data;
public:
    void initialize();
    void push(int);
    int pop();
    void print();
    void cleanup();
};

void StackOfInt::StackImp::initialize(){
    data = {0};
}

void StackOfInt::StackImp::push(int x){
    data.push_back(x);
}

int StackOfInt::StackImp::pop(){
    int i = data.back();
    data.pop_back();
    return i;
}

void StackOfInt::StackImp::print(){
    //std::cout << data.size() << std::endl;
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

void StackOfInt::StackImp::cleanup(){
    //std::cout << data.size() << std::endl;
    require(data.size() == 0, "Stack not empty");
}

void StackOfInt::initialize(){
    smile = new StackImp;
    smile->initialize();
}

void StackOfInt::push(int x){
    smile->push(x);
}

int StackOfInt::pop(){
    return smile->pop();
}

void StackOfInt::print(){
    smile->print();
}

void StackOfInt::cleanup(){
    smile->cleanup();
    delete smile;
}
