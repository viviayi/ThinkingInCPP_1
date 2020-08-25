#ifndef INITIALIZER_H
#define INITIALIZER_H

#include <iostream>

class Mirror{
    Mirror* pt;
    bool flag;
public:
    Mirror(){ 
        flag = true; 
        pt = nullptr;
    }
    Mirror(Mirror* _pt){
        pt = _pt;
        flag = false;
    }
    bool test(){
        if(pt){
            return pt->test();
        }
        else{
            return flag;
        }
    }
    ~Mirror(){
        pt = nullptr;
    }
};

extern Mirror m1;
extern Mirror m2;
extern Mirror m3;
extern Mirror m4;
extern Mirror m5;

class Initializer{
    static int initCount;
public:
    Initializer(){
        std::cout << "Initializer()" << std::endl;
        if (initCount++ == 0){
            std::cout << m1.test() << std::endl;
            std::cout << m2.test() << std::endl;
            std::cout << m3.test() << std::endl;
            std::cout << m4.test() << std::endl;
            std::cout << m5.test() << std::endl;
        }
    }
    ~Initializer(){
        if(--initCount == 0){
            std::cout << "clean up" << std::endl;
        }
    }
};
static Initializer init;
#endif