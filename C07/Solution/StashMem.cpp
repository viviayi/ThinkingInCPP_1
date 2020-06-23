// Function overloading
#include "StashMem.h"
#include "../require.h"
#include <iostream>
#include <cassert>
using namespace std;
const int increament = 100;

Stash::Stash(int sz){
    size = sz;
    quantity = 0;
    next = 0;
    storage = new Mem(sz);
    //cout << "intialize Stash done" << endl;
}

Stash::Stash(int sz, int initQuantity){
    size = sz;
    quantity = 0;
    next = 0;
    storage = new Mem(sz * initQuantity);
    inflate(initQuantity);
}

Stash::~Stash(){
    if(storage != 0){
        cout << "freeing storage" << endl;
        delete storage;
    }
}

int Stash::add(void* element){
    if(next >= quantity)
        inflate(increament);
    // Copy element into storage,
    // starting at next empty space:
    int startBytes = next * size;
    memcpy(storage->pointer() + startBytes, element, size);
    next++;
    return(next - 1); // Index number
}

void* Stash::fetch(int index){
    require(0 <= index, "Stash::fetch (-)index");
    if(index >= next){
        return 0; // To indicate the end
    }
    // Produce pointer to desired element
    return (storage->pointer() + index * size);
}

int Stash::count(){
    return next; // Number of elements in Stash
}

void Stash::inflate(int increase){
    assert(increase >= 0);
    if(increase == 0) return;
    int newQuantity = quantity + increase;
    int newBytes = newQuantity * size;
    storage->ensureMinSize(newBytes);
    quantity = newQuantity;
} ///:~