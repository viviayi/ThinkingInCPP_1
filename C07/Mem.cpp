#include "Mem.h"
#include <cstring>
using namespace std;

Mem::Mem(){
    mem = 0;
    size = 0;
}

Mem::Mem(int sz){
    mem = 0;
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
        delete []mem;
        mem = newmem;
        size = minSize;
    }
}

byte* Mem::pointer(){
    return mem;
}

byte* Mem::pointer(int minSize){
    ensureMinSize(minSize);
    return mem;
} ///:~