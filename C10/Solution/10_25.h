#include <string>
#include <iostream>

class MyClass{
    std::string str;
public:
    MyClass(std::string s):str(s){}
    void print() const{
        std::cout << str << std::endl;
    }
};