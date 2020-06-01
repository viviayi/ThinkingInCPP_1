// Converted to us access control
#ifndef STASH_H
#define STASH_H

class Stash
{
private:
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void inflate(int increase);
public:
    void initialize(int size);
    void cleanup();
    int add(void* element);
    void* fetch(int index);
    int count();
};
#endif // STASH_H ///:~