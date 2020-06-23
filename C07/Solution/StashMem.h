#ifndef STASHMEM_H
#define STASHMEM_H
#include "Mem2.h"
class Stash{
    int size;       // Size of each space
    int quantity;   // Number of storage spaces
    int next;       // Next empty space
    // Dynamically allocated array of bytes
    Mem* storage;
    void inflate(int increase);
public:
    Stash(int size); // Zero quantity
    Stash(int size, int initQuantity);
    ~Stash();
    int add(void* element);
    void* fetch(int index);
    int count();
};
#endif //STASHMEM