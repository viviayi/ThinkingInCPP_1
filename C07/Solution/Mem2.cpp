#include "Mem2.h"
#include <cstring>
using namespace std;

Mem::Mem(int sz){
    pre_mem = mem = 0;
    size = 0;
    ensureMinSize(sz);
}

Mem::~Mem(){
    delete []mem;
}

int Mem::msize(){
    return size;
}

void Mem::ensureMinSize(int minSize){
    if(size < minSize){
        byte* newmem = new byte[minSize]; // allocate minSize space
        memset(newmem + size, 0, minSize - size); // [0,...,size,...,minSize] set 0 from size to minSize
        memcpy(newmem, mem, size); // Copy mem to newmem, from 0 to size
        pre_mem = mem;
        delete []mem;
        mem = newmem;
        size = minSize;
    }
}


byte* Mem::pointer(int minSize){
    ensureMinSize(minSize);
    return mem;
}

bool Mem::moved(){
    if(pre_mem != mem)
        return true;
    else
        return false;
}
 ///:~