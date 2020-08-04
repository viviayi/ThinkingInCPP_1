#ifndef TEN_ELEVEN_H
#define TEN_ELEVEN_H 

#include <iostream>

class myClass
{
private:
    int i;
public:
    myClass(int ii = 0) : i(ii){}
    void setData(int ii){
        i = ii;
    }
    void print() const{
        std::cout << i << std::endl;
    }
};

#endif // TEN_ELEVEN_H ///:~ 