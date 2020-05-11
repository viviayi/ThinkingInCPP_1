// Implementation of example C-like library
// Declare structure and functions:
#include "CLib.h"
#include <iostream>
#include <cassert>
using namespace std;
// Quantity of elements to add
// when increasing storage:
const int increment = 100;

void initialize(CStash* s, int sz) {
    s->size = sz;
    s->quantity = 0;
    s->storage = 0; // 不分配初始存储
    s->next = 0;
}

int add(CStash* s, const void* element) {
    if(s->next >= s->quantity) //Enough space left?
        inflate(s, increment); // 没有可用空间则进行扩展
    // Copy element into storage,
    // starting at next empty space:
    int startBytes = s->next * s->size;
    unsigned char* e = (unsigned char*)element;
    for(int i = 0; i < s->size; i++)
        s->storage[startBytes + i] = e[i];
    s->next++;
    return(s->next -1); //index number
}

// fetch 获取变量地址
void* fetch(CStash* s, int index){ 
    // check index boundaries:
    assert(0 <= index);
    if(index >= s->next)
        return 0; //To indicate the end
    // Produce pointer to desired element:
    return &(s->storage[index * s->size]);
}

int count(CStash* s){
    return s->next;
}

// 扩展，对旧的进行逐一复制
void inflate(CStash* s,int increase) {
    assert(increase > 0);
    int newQuantity = s->quantity + increase;
    int newBytes = newQuantity * s->size;
    int oldBytes = s->quantity * s->size;
    unsigned char* b = new unsigned char[newBytes];
    for(int i = 0; i < oldBytes; i++)
        b[i] = s->storage[i]; // Copy old to new
    delete [](s->storage); // old storage
    s->storage = b; // Point to new memory
    s->quantity = newQuantity;
}

void cleanup(CStash* s) {
    if(s->storage != 0){
        cout << "freeing storage" << endl;
        delete [](s->storage);
    }
}